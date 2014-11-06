using System.Linq;

namespace DFWV
{
    using System;
    using System.Collections.Generic;
    using System.IO;
    using System.Text;
    using System.Xml;
    using System.Xml.Linq;
    using WorldClasses;
    using WorldClasses.HistoricalEventClasses;
    using WorldClasses.HistoricalEventCollectionClasses;

    public delegate void XMLFinishedSectionEventHandler(string section);
    public delegate void XMLFinishedEventHandler();

    public delegate void XMLStartedSectionEventHandler(string section);

    static class DFXMLParser
    {

        private static string _path;
        public static bool MemoryFailureQuitParsing;

        static readonly Dictionary<string, string> MissingXMLElements = new Dictionary<string, string>();


        public static event XMLFinishedSectionEventHandler FinishedSection;
        public static event XMLFinishedEventHandler Finished;

        public static event XMLStartedSectionEventHandler StartedSection;

        private static bool workflowDetected;
        private static bool autochopDetected;

        private static void OnFinishedSection(string section)
        {
            if (FinishedSection != null)
                FinishedSection(section);
        }

        private static void OnStartedSection(string section)
        {
            if (StartedSection != null)
                StartedSection(section);
        }
        private static void OnFinished()
        {
            if (Finished != null)
                Finished();
        }

        /// <summary>
        /// Parses a DF Legends XML file using XmlReader.  
        ///     Steps through each tag and upon finding one related to a known XML section type we fire off a call to LoadSection of T with the dictionary that we're going to fill from that XML section.
        /// </summary>
        public static void Parse(World world, string path)
        {
            _path = path;

            using (var streamReader = new StreamReader(path, Encoding.GetEncoding("ISO-8859-9")))
            using (var xReader = XmlReader.Create(streamReader))
            {

                xReader.Read();
                while (xReader.Read())
                {
                    if (xReader.NodeType == XmlNodeType.Whitespace)
                        continue;
                    if (xReader.Name != "df_world") continue;
                    while (xReader.Read())
                    {
                        if (xReader.NodeType == XmlNodeType.Whitespace)
                            continue;
                        if (xReader.NodeType == XmlNodeType.EndElement && xReader.Name == "df_world")
                            break;
                        var knownSection = true;
                        switch (xReader.Name)
                        {
                            case "regions":
                                LoadSection(world.Regions, world, xReader);
                                break;
                            case "underground_regions":
                                LoadSection(world.UndergroundRegions, world, xReader);
                                break;
                            case "sites":
                                LoadSection(world.Sites, world, xReader);
                                break;
                            case "world_constructions":
                                LoadSection(world.WorldConstructions, world, xReader);
                                break;
                            case "artifacts":
                                LoadSection(world.Artifacts, world, xReader);
                                break;
                            case "historical_figures":
                                LoadSection(world.HistoricalFigures, world, xReader);
                                break;
                            case "entity_populations":
                                LoadSection(world.EntityPopulations, world, xReader);
                                break;
                            case "entities":
                                LoadSection(world.Entities, world, xReader);
                                break;
                            case "historical_events":
                                LoadSection(world.HistoricalEvents, world, xReader);
                                break;
                            case "historical_event_collections":
                                LoadSection(world.HistoricalEventCollections, world, xReader);
                                break;
                            case "historical_eras":
                                LoadSection(world.HistoricalEras, world, xReader);
                                break;
                            default:
                                Program.Log(LogType.Error, "Unknown XML Section: " + xReader.Name);
                                xReader.Skip();
                                knownSection = false;
                                break;
                        }
                        if (knownSection)
                            OnFinishedSection(xReader.Name);
                    }
                    break;
                }
            }
            OnFinished();
        }

        /// <summary>
        /// Given a specific section of type T if we encounter an open tag at one level below we want to load a new object of type T, starting at that XML.
        /// </summary>
        private static void LoadSection<T>(IDictionary<int, T> WorldList, World world, XmlReader xReader) where T : XMLObject
        {
            OnStartedSection(xReader.Name);
            while (xReader.Read())
            {
                
                if (xReader.NodeType == XmlNodeType.Whitespace)
                    continue;
                if (xReader.NodeType != XmlNodeType.EndElement && xReader.Depth == 2)
                {
                    if (!MemoryFailureQuitParsing)
                        LoadItem(WorldList, world, xReader);
                    else
                        xReader.ReadSubtree();
                }
                else if (xReader.Depth >= 2)
                {

                }
                else if (xReader.NodeType == XmlNodeType.EndElement)
                    break;
                else
                    Program.Log(LogType.Error, "Unknown part of section xml/n" + xReader.Name);
            }
        }

        /// <summary>
        /// Now at the open tag of a single object in our XML, we want to dump the entire contents into an XDocument.
        ///   If we have a historical event or historical event collection we want to use their factory methods to create a new version of those with the given XDocument.
        ///   For all other object types we want to use their constructor to make a new object of that type.
        ///   In any case we add the object after making it to the appropriate dictionary.
        /// Individual object reads are separated out to allow us to work past failing to load any specific XML item for some weird reason.
        /// </summary>
        private static void LoadItem<T>(IDictionary<int, T> WorldList, World world, XmlReader xReader) where T : XMLObject
        {
            XDocument xdoc = null;
            try
            {
                xdoc = XDocument.Load(xReader.ReadSubtree());

                if (typeof(T) == typeof(HistoricalEvent))
                {
                    var evt = HistoricalEvent.Create(xdoc, world);
                    world.HistoricalEvents.Add(evt.ID, evt);
                }
                else if (typeof(T) == typeof(HistoricalEventCollection))
                {
                    var evtcol = HistoricalEventCollection.Create(xdoc, world);
                    world.HistoricalEventCollections.Add(evtcol.ID, evtcol);
                }
                else
                {
                    var WorldObject = (T)Activator.CreateInstance(typeof(T), new object[] { xdoc, world });
                    WorldList.Add(WorldObject.ID, WorldObject);
                }


            }
            catch (OutOfMemoryException e)
            {
                Program.Log(LogType.Error, "Error reading XML item: id\n" + e.Message);


                var fi = new FileInfo(_path);
                Program.Log(LogType.Error, "XML file is" + Math.Round(fi.Length / 1024f / 1024f / 1024f, 2) + " GB");

                Program.Log(LogType.Error, string.Format("Running {0} Bit World Viewer", (Environment.Is64BitProcess ? "64" : "32")));
                Program.Log(LogType.Error, string.Format("Running {0} Bit Operating System", (Environment.Is64BitOperatingSystem ? "64" : "32")));

                if (!Environment.Is64BitOperatingSystem) //Running 32 bit OS
                {
                    Program.Log(LogType.Error, "32 Bit World Viewer does not support Huge XML files");
                }
                else if (!Environment.Is64BitProcess) //Running 32 bit app in 64 bit OS
                {
                    Program.Log(LogType.Error, "Recommend using 64 Bit World Viewer");
                }
                else
                {
                    Program.Log(LogType.Error, "Please report Log");
                }


                MemoryFailureQuitParsing = true;
            }
            catch (Exception e)
            {
                try
                {
                    if (xdoc != null)
                    {
                        int id = Int32.Parse(((XElement)xdoc.Root.Nodes().ToArray()[1]).Value);

                        if (id < 0)
                        {
                            if (xdoc.Root.Name.LocalName == "historical_event")
                            {
                                if (!workflowDetected)
                                {
                                    Program.Log(LogType.Error,
                                        "Negative ID historical event.  Likely due to dfHack Workflow, ignoring\n" + xdoc);
                                    workflowDetected = true;
                                }
                            }
                            else if (xdoc.Root.Name.LocalName == "historical_figure")
                            {
                                if (!autochopDetected)
                                {
                                    Program.Log(LogType.Error,
                                        "Negative ID historical figure detected. Likely due to autochop, ignoring\n" + xdoc);
                                    autochopDetected = true;
                                }
                            }
                            else
                            {
                                Program.Log(LogType.Error,
                                    "Negative ID " + xdoc.Root.Name.LocalName + " detected. Unknown cause, ignoring\n" + xdoc);
                            }
                        }
                        else
                            Program.Log(LogType.Error, "Error reading XML item: id\n" + e.Message);
                    }
                }
                catch (Exception)
                {
                    Program.Log(LogType.Error, "Error reading XML item: id\n" + e.Message);
                    throw;
                }

            }

            
            
        }


        /// <summary>
        /// While parsing individual objects XML if an original element is discovered it will be reported in the log, but only one time per new element.
        /// </summary>
        internal static void UnexpectedXMLElement(string ElementType, XElement ProblemElement, string XML)
        {
            if (MissingXMLElements.ContainsKey(ElementType + "-" + ProblemElement.Name.LocalName)) return;

            var result = ProblemElement.Nodes().Aggregate("", (current, node) => current + node.ToString());
            Program.Log(LogType.Warning, "New XML!" + ElementType + "\t" + ProblemElement.Name.LocalName + "\t" + result.Trim());
#if DEBUG
            Console.WriteLine(XML);
#endif
            MissingXMLElements.Add(ElementType + "-" + ProblemElement.Name.LocalName, ProblemElement.Value);
        }

    }
}
