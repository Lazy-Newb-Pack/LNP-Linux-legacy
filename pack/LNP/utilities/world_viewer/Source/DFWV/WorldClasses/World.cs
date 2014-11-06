using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;

namespace DFWV.WorldClasses 
{
    #region Delegates
    public delegate void XMLLinkedSectionStartEventHandler(string section);
    public delegate void XMLLinkedSectionEventHandler(string section);
    public delegate void XMLLinkedEventHandler();
    public delegate void XMLProcessedSectionStartEventHandler(string section);
    public delegate void XMLProcessedSectionEventHandler(string section);
    public delegate void XMLProcessedEventHandler();

    public delegate void FamiliesCountedEventHandler();
    public delegate void DynastiesCreatedEventHandler();
    public delegate void EventCollectionsEvaluatedEventHandler();
    public delegate void HistoricalFiguresPositionedEventHandler();
    public delegate void StatsGatheredEventHandler();
    public delegate void VisualizationsCreatedEventHandler();
    #endregion

    class World : IDisposable
    {
        #region Fields and Properties
        private readonly string historyPath;
        private readonly string sitesPath;
        private readonly string paramPath;
        private readonly string mapPath;
        private readonly string xmlPath;

        public static List<Thread> Threads = new List<Thread>();

        public string Name { get; private set; }
        public string AltName { get; private set; }
        private string Version { get; set; }
        public int LastYear { get; private set; }

        public readonly List<Civilization> Civilizations = new List<Civilization>();
        public readonly List<Leader> Leaders = new List<Leader>();
        public readonly Dictionary<string, Race> Races = new Dictionary<string, Race>();
        public readonly List<God> Gods = new List<God>();
        public readonly Dictionary<int, Site> SitesFile = new Dictionary<int, Site>();
        public readonly List<Entity> EntitiesFile = new List<Entity>();
        public readonly List<Parameter> Parameters = new List<Parameter>();
        public readonly List<Dynasty> Dynasties = new List<Dynasty>();

        public readonly Dictionary<int, Region> Regions = new Dictionary<int, Region>();
        public readonly Dictionary<int, UndergroundRegion> UndergroundRegions = new Dictionary<int, UndergroundRegion>();
        public readonly Dictionary<int, Site> Sites = new Dictionary<int, Site>();
        public readonly Dictionary<int, Structure> Structures = new Dictionary<int, Structure>();
        public readonly Dictionary<int, HistoricalFigure> HistoricalFigures = new Dictionary<int, HistoricalFigure>();
        public readonly Dictionary<int, EntityPopulation> EntityPopulations = new Dictionary<int, EntityPopulation>();
        public readonly Dictionary<int, Entity> Entities = new Dictionary<int, Entity>();
        public readonly Dictionary<int, HistoricalEvent> HistoricalEvents = new Dictionary<int, HistoricalEvent>();
        public readonly Dictionary<int, HistoricalEventCollection> HistoricalEventCollections = new Dictionary<int, HistoricalEventCollection>();
        public readonly Dictionary<int, HistoricalEra> HistoricalEras = new Dictionary<int, HistoricalEra>();
        public readonly Dictionary<int, WorldConstruction> WorldConstructions = new Dictionary<int, WorldConstruction>();
        public readonly Dictionary<int, Artifact> Artifacts = new Dictionary<int, Artifact>();

        public Dictionary<string, string> Maps { get; private set; }

        public readonly FilterSettings Filters;

        public Stats Stats;
        private VisualizationCollection Visualizations;
        #endregion

        public World(string historyPath, string sitesPath, string paramPath, string xmlPath, string mapPath, int MapYear)
        {
            LastYear = MapYear;
            WorldTime.Present = new WorldTime(LastYear);

            this.historyPath = historyPath;
            this.sitesPath = sitesPath;
            this.paramPath = paramPath;
            this.mapPath = mapPath;
            this.xmlPath = xmlPath;

            Filters = new FilterSettings(this);
        }


        #region World Loading
        public void LoadFiles()
        {
            LoadHistory();
            LoadSites();
            LoadMaps();
            LoadParam();
            LoadXML();

        }

        /// <summary>
        /// Given the name and path to the Basic Map, this will find and add another other maps found in teh same directory.
        /// </summary>
        private void LoadMaps()
        {
            Maps = new Dictionary<string, string> {{"Main", mapPath}};
            var MapSymbols = new List<string>
            {"bm", "dip", "drn", "el", "elw", "evil", "hyd", "nob", "rain",
                    "sal", "sav", "str", "tmp", "trd", "veg", "vol"};
            var MapNames = new List<string>
            {"Biome", "Diplomacy", "Drainage", "Elevations", "Elevations w/Water", "Evil", 
                    "Hydrosphere", "Nobility", "Rainfall", "Sailinity", "Savagry", "Structures", 
                    "Temperature", "Trade", "Vegetation", "Volcanism"};

            var thisMap = mapPath.Replace("world_map", "world_graphic");
            if (File.Exists(thisMap))
                Maps.Add("Standard+Biome", thisMap);

            for (var i = 0; i < MapSymbols.Count; i++)
            {
                thisMap = mapPath.Replace("world_map", "world_graphic-" + MapSymbols[i]);
                if (File.Exists(thisMap))
                    Maps.Add(MapNames[i], thisMap);
            }

        }

        /// <summary>
        /// This splits up the paramters file and adds the lines as new Parameters.
        /// </summary>
        private void LoadParam()
        {
            var lines = File.ReadAllLines(paramPath, Encoding.GetEncoding(437)).ToList();

            Version = lines[0].Substring(15);
            Version = Version.Substring(0, Version.Length - 1);

            lines.RemoveRange(0, 3);
            foreach (var line in lines)
                Parameters.Add(new Parameter(line.Trim(), this));
        }


        /// <summary>
        /// This parses the Sites file, which has multiple sections.  
        ///     This keeps track of data associated with the most recent site, and adds it to cursite, which stores all lines about a site (which could be 1 to more then a dozen).
        ///     When it encounters data about a new site it dumps the data about the current site into a new Site object.
        ///     
        ///     It also retrieves data about the numbers of specific races as listed in the sites file.
        /// </summary>
        private void LoadSites()
        {

            var lines = File.ReadAllLines(sitesPath, Encoding.GetEncoding(437)).ToList();

            lines.RemoveRange(0, 2);

            var curSite = new List<string>();
            foreach (var line in lines)
            {
                if (line == "" || line == "Sites" || line == "Outdoor Animal Populations (Including Undead)")
                {
                    if (curSite.Count > 0)
                    {
                        var newSite = new Site(curSite, this);
                        SitesFile.Add(newSite.ID, newSite);
                        curSite.Clear();
                    }
                    continue;
                }
                if (line.StartsWith("\t") && curSite.Count == 0)
                {
                    if (line.Contains("Total: ")) continue;
                    var raceName = line.Trim().Substring(line.Trim().IndexOf(' ') + 1);
                    var thisRace = GetAddRace(raceName);
                    thisRace.Population = line.Contains("Unnumbered") ? long.MaxValue : Convert.ToInt32(line.Trim().Split(' ')[0]);
                }
                else if (!line.StartsWith("\t")) //Start of Site maybe
                {
                    if (curSite.Count > 0)
                    {
                        var newSite = new Site(curSite, this);
                        SitesFile.Add(newSite.ID, newSite);
                        curSite.Clear();
                    }
                    curSite.Add(line);
                }
                else
                    curSite.Add(line);
            }
        }


        /// <summary>
        ///  This parses the History file.
        ///     First it pulls the Wolrd Name and Alt name
        ///     then it runs through each civ, creating a new object as it does so.
        ///     For civs that are just names, like "Ant Men" they're designated as not being "FullCivs" in the Civilizatio constructor.
        ///  
        /// </summary>
        private void LoadHistory()
        {
            var lines = File.ReadAllLines(historyPath, Encoding.GetEncoding(437)).ToList();

            Name = lines[0];
            AltName = lines[1];
            Program.mainForm.Text = string.Format("World Viewer - {0} \"{1}\"", Name, AltName);

            lines.RemoveRange(0, 3);

            var curCiv = new List<string>();
            foreach (var line in lines)
            {
                if (!line.StartsWith(" ")) // Start of a civ
                {
                    if (curCiv.Count > 0)
                    {
                        Civilizations.Add(new Civilization(curCiv, this));
                        curCiv.Clear();
                    }
                }
                curCiv.Add(line);
            }
            if (curCiv.Count <= 0) return;
            Civilizations.Add(new Civilization(curCiv, this));
            curCiv.Clear();
        }

        /// <summary>
        /// This creates a new thread from the DFXMLParser static class, to parse the XML.  
        /// Due to it being exceptionally complext having a separate thread and object made sense.
        /// See DFXMLParser.Parse() for details.
        /// </summary>
        private void LoadXML()
        {
            StartThread(() => DFXMLParser.Parse(this, xmlPath));
        }

        #endregion

        #region World Importing (WIP)

        //private string dbPath;

        //public World(string dbPath)
        //{
        //    this.dbPath = dbPath;
        //}

        //internal void Import()
        //{
        //    Database.SetConnection();

        //    ImportWorldItems<Artifact>(Artifacts, "artifact");
        //    ImportWorldItems<Entity>(Entities, "entity");
        //    ImportWorldItems<EntityPopulation>(EntityPopulations, "entitypopulation");
        //    ImportWorldItems<HistoricalFigure>(HistoricalFigures, "historicalfigure");
        //    ImportWorldItems<HistoricalEra>(HistoricalEras, "historicalera");
        //    ImportWorldItems<HistoricalEvent>(HistoricalEvents, "historicalevent");
        //    ImportWorldItems<HistoricalEventCollection>(HistoricalEventCollections, "historicaleventcollection");
        //    ImportWorldItems<Parameter>(Parameters, "parameter");
        //    ImportWorldItems<Race>(Races, "race");
        //    ImportWorldItems<Region>(Regions, "region");
        //    ImportWorldItems<Site>(Sites, "site");
        //    ImportWorldItems<UndergroundRegion>(UndergroundRegions, "undergroundregion");
        //    ImportWorldItems<WorldConstruction>(WorldConstructions, "worldconstruction");
        //    //ImportMaps();
        //    //ImportWorldData();
        //    Database.CloseConnection();
        //}

        //private void ImportWorldItems<T>(Dictionary<int, T> dict, string table) where T : XMLObject
        //{
        //    Database.ExecuteQuery("Select * From " + table);
        //    while (Database.Reader.Read())
        //    {
        //        if (typeof(T) == typeof(HistoricalEvent))
        //        {
        //            HistoricalEvent evt = HistoricalEvent.Create(Database.Reader.GetValues(), this);
        //            HistoricalEvents.Add(evt.ID, evt);
        //        }
        //        else if (typeof(T) == typeof(HistoricalEventCollection))
        //        {
        //            HistoricalEventCollection evtcol = HistoricalEventCollection.Create(Database.Reader.GetValues(), this);
        //            HistoricalEventCollections.Add(evtcol.ID, evtcol);
        //        }
        //        else
        //        {
        //            T WorldObject = (T)Activator.CreateInstance(typeof(T), new object[] { Database.Reader.GetValues(), this });
        //            dict.Add(WorldObject.ID, WorldObject);
        //        }
        //    }
        //}

        //private void ImportWorldItems<T>(Dictionary<string, T> dict, string table) where T : WorldObject
        //{
        //    Database.ExecuteQuery("Select * From " + table);
        //    while (Database.Reader.Read())
        //    {
        //        T WorldObject = (T)Activator.CreateInstance(typeof(T), new object[] { Database.Reader.GetValues(), this });
        //        dict.Add(WorldObject.Name, WorldObject);
        //    }
        //}

        //private void ImportWorldItems<T>(List<T> list, string table) where T : WorldObject
        //{
        //    Database.ExecuteQuery("Select * From " + table);
        //    while (Database.Reader.Read())
        //    {
        //        T WorldObject = (T)Activator.CreateInstance(typeof(T), new object[] { Database.Reader.GetValues(), this });
        //        list.Add(WorldObject);
        //    }
        //}
        #endregion

        /// <summary>
        /// These methods all work in the same way.  Since the site and history file might list the same civ, god, entity, or leader in multiple places 
        ///     we need to check if we already created that object before we create it again.  These methods all check the current list of Objects for one matching the given one.
        ///     If a match is found it's returned, otherwise a new object is created, and then that is returned.
        /// </summary>
        /// <param name="raceName"></param>
        /// <returns></returns>
        #region GetAdd Functions
        internal Race GetAddRace(string raceName)
        {
            var lname = raceName.ToLower();
            lname = StripRaceNumbers(lname);
            lname = lname.Replace("_", " ");
            if (lname.Contains("prisoners"))
                lname = lname.Replace(" prisoners", "");
            else if (lname.Contains("prisoner"))
                lname = lname.Replace(" prisoner", "");
            else if (lname.Contains("outcasts"))
                lname = lname.Replace(" outcasts", "");
            else if (lname.Contains("outcast"))
                lname = lname.Replace(" outcast", "");

            if (Races.ContainsKey(lname))
                return Races[lname];
            if (Races.ContainsKey(lname.Remove(lname.Length - 1) + "ves"))
                return Races[lname.Remove(lname.Length - 1) + "ves"];
            if (Races.ContainsKey(lname + "s"))
                return Races[lname + "s"];
            if (lname.Contains("men") && Races.ContainsKey(lname.Replace("men", "man")))
                return Races[lname.Replace("men", "man")];
            if (lname.Contains("man") && Races.ContainsKey(lname.Replace("man", "men")))
                return Races[lname.Replace("man", "men")];


            foreach (var race in Races.Values)
            {
                var thisRaceName = race.Name.ToLower();
                if (thisRaceName == lname)
                    return race;
                if (thisRaceName.EndsWith("s") && thisRaceName.Remove(thisRaceName.Length - 1) == lname)
                    return race;
                if (thisRaceName.EndsWith("ves") && thisRaceName.Remove(thisRaceName.Length - 3) + "f" == lname)
                    return race;
                if (thisRaceName.Contains("men") && thisRaceName.Replace("men", "man") == lname)
                    return race;
                if (lname.Contains("men") && thisRaceName.Replace("men", "man") == lname)
                    return race;
            }

            if (Races.ContainsKey(lname)) return Races[lname];
            var newRace = new Race(lname, this);
            Races.Add(lname, newRace);
            return newRace;
        }

        private static string StripRaceNumbers(string race)
        {
            int num;
            while (Int32.TryParse(race.Substring(race.Length - 1, 1), out num) || race[race.Length - 1] == '_')
            {
                race = race.Remove(race.Length - 1);
            }
            return race;
        }

        internal God GetAddGod(God tempGod)
        {
            foreach (var god in Gods.Where(god => String.Equals(god.Name, tempGod.Name, StringComparison.CurrentCultureIgnoreCase)))
            {
                return god;
            }
            Gods.Add(tempGod);
            return tempGod;
        }

        internal God GetAddGod(string godName)
        {
            foreach (var god in Gods.Where(god => String.Equals(god.Name, godName, StringComparison.CurrentCultureIgnoreCase)))
            {
                return god;
            }
            var newGod = new God(godName);
            Gods.Add(newGod);
            return newGod;

        }

        internal Civilization GetCiv(string civName)
        {
            foreach (var civ in Civilizations.Where(civ => civ.Name == civName))
            {
                return civ;
            }
            Program.Log(LogType.Warning, "Site Civ doesn't exist in history file/n" + civName); // 
            return null;

        }

        internal Entity GetAddEntity(string data)
        {
            var entityName = data.Split(',')[0].Trim();
            var entityRaceName = data.Split(',')[1].Trim();

            var entityRace = GetAddRace(entityRaceName);

            foreach (var civ in Civilizations.Where(civ => civ.Name == entityName && civ.Race == entityRace))
            {
                return civ;
            }
            foreach (var entity in EntitiesFile.Where(entity => entity.Name == entityName))
            {
                Program.Log(LogType.Warning, "Duplicate named Entities: " + entityName);
                if (entity.Race == entityRace)
                    return entity;
            }
            var newEntity = new Entity(entityName, this) {Race = entityRace};
            EntitiesFile.Add(newEntity);
            return newEntity;
        }

        internal Leader GetAddLeader(string leaderName)
        {
            foreach (var leader in Leaders.Where(leader => String.Equals(leader.Name, leaderName, StringComparison.CurrentCultureIgnoreCase)))
            {
                return leader;
            }
            var newLeader = new Leader(leaderName);
            Leaders.Add(newLeader);
            return newLeader;
        }
        #endregion 

        /// <summary>
        /// These methods handle object linking, which generally is used to turn object IDs (from XML) into references to World Objects in code.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Data Linking
        
        public static event XMLLinkedSectionStartEventHandler LinkedSectionStart;
        public static event XMLLinkedSectionEventHandler LinkedSection;
        public static event XMLLinkedEventHandler Linked;

        internal void LinkXMLData()
        {
            StartThread(Link);
        }

        private static void LinkSection<T>(IEnumerable<T> List, string sectionName) where T : XMLObject
        {

            OnLinkedSectionStart(sectionName);
            foreach (var item in List)
                item.Link();
            OnLinkedSection(sectionName);

        }

        private void Link()
        {

            LinkSection(Artifacts.Values, "Artifacts");
            LinkSection(Entities.Values, "Entities");
            LinkSection(EntityPopulations.Values, "Entity Populations");
            LinkSection(HistoricalEras.Values, "Historical Eras");
            LinkSection(HistoricalEvents.Values, "Historical Events");
            LinkSection(HistoricalEventCollections.Values, "Historical Event Collections");
            LinkSection(HistoricalFigures.Values, "Historical Figures");
            LinkSection(Regions.Values, "Regions");
            LinkSection(Sites.Values, "Sites");
            LinkSection(UndergroundRegions.Values, "Underground Regions");
            LinkSection(WorldConstructions.Values, "World Constructions");

            OnLinked();
        }

        private static void OnLinkedSectionStart(string section)
        {
            if (LinkedSectionStart != null)
                LinkedSectionStart(section);
        }

        private static void OnLinkedSection(string section)
        {
            if (LinkedSection != null)
                LinkedSection(section);
        }

        private static void OnLinked()
        {
            if (Linked != null)
                Linked();
        }
        #endregion

        /// <summary>
        /// These methods handle object processing, which gathers additional information about objects including creating lists of things.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Data Processing
        public static event XMLProcessedSectionStartEventHandler ProcessedSectionStart;
        public static event XMLProcessedSectionEventHandler ProcessedSection;
        public static event XMLProcessedEventHandler Processed;
        public static event FamiliesCountedEventHandler FamiliesCounted;
        public static event DynastiesCreatedEventHandler DynastiesCreated;
        public static event EventCollectionsEvaluatedEventHandler EventCollectionsEvaluated;
        public static event HistoricalFiguresPositionedEventHandler HistoricalFiguresPositioned;
        public static event StatsGatheredEventHandler StatsGathered;
        public static event VisualizationsCreatedEventHandler VisualizationsCreated;

        internal void ProcessXMLData()
        {
            StartThread(Process);
        }

        private void Process()
        {
            ProcessSection(Regions.Values, "Regions");
            ProcessSection(Sites.Values, "Sites");
            ProcessSection(UndergroundRegions.Values, "Underground Regions");
            ProcessSection(WorldConstructions.Values, "World Constructions");
            ProcessSection(Artifacts.Values, "Artifacts");
            ProcessSection(Entities.Values, "Entities");
            ProcessSection(EntityPopulations.Values, "Entity Populations");
            ProcessSection(HistoricalEras.Values, "Historical Eras");
            ProcessSection(HistoricalFigures.Values, "Historical Figures");
            ProcessSection(HistoricalEvents.Values, "Historical Events");
            ProcessSection(HistoricalEventCollections.Values, "Historical Event Collections");

            OnProcessed();
        }

        private static void ProcessSection<T>(IEnumerable<T> List, string sectionName) where T : XMLObject
        {
            OnProcessedSectionStart(sectionName);
            foreach (var item in List)
                item.Process();
            OnProcessedSection(sectionName);

        }

        private static void OnProcessedSectionStart(string section)
        {
            if (ProcessedSectionStart != null)
                ProcessedSectionStart(section);

        }


        private static void OnProcessedSection(string section)
        {
            if (ProcessedSection != null)
                ProcessedSection(section);

        }

        private static void OnProcessed()
        {
            if (Processed != null)
                Processed();
        }
        #endregion

        /// <summary>
        /// These methods handle Family processing, which counts families and dynasties to allow sorting by number of descendents/ancestors.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Family Processing
        internal void FamilyProcessing()
        {
            StartThread(CountFamilies);
            StartThread(CreateDynasties);
        }

        private void CountFamilies()
        {
            foreach (var HF in HistoricalFigures.Values)
                HF.CountAncestors();
            foreach (var HF in HistoricalFigures.Values)
                HF.CountDescendents();

            OnFamiliesCounted();
        }

        private static void OnFamiliesCounted()
        {
            if (FamiliesCounted != null)
                FamiliesCounted();
        }

        /// <summary>
        /// Creates Dynasties given familial relationships from the XML and data on inheritance from the history file.
        /// </summary>
        private void CreateDynasties()
        {
            foreach (var civ in Civilizations)
            {
                foreach (var leaderList in civ.Leaders.Values)
                {
                    //king list
                    leaderList.Reverse();

                    Dynasty thisDynasty = null;
                    
                    for (var i = 0; i < leaderList.Count - 1; i++)
                    {
                        if (leaderList[i].HF  != null &&
                            leaderList[i].InheritedFrom != null &&
                            leaderList[i + 1].HF != null &&
                            leaderList[i].InheritedFrom == leaderList[i + 1].HF)
                        {
                            //i and i+1 are in the same dynasty
                            if (thisDynasty == null)
                            {
                                thisDynasty = new Dynasty(this, leaderList[i].HF, Leader.LeaderTypes[leaderList[i].LeaderType], civ);
                                thisDynasty.Members.Add(leaderList[i + 1].HF);
                            }
                            else
                            {
                                thisDynasty.Members.Add(leaderList[i + 1].HF);
                            }
                        }
                        else if (Leader.InheritanceTypes[leaderList[i].Inheritance] != "New Line" &&
                                 Leader.InheritanceTypes[leaderList[i].Inheritance] != "Original Line")
                        {

                        }
                        else if (thisDynasty != null)
                        {
                            thisDynasty.Members.Reverse();
                            Dynasties.Add(thisDynasty);
                            thisDynasty = null;
                        }
                    }
                    if (thisDynasty != null)
                    {
                        thisDynasty.Members.Reverse();
                        Dynasties.Add(thisDynasty);
                    }
                    
                    leaderList.Reverse();
                }
            }

            OnDynastiesCreated();
        }

        private static void OnDynastiesCreated()
        {
            if (DynastiesCreated != null)
                DynastiesCreated();
        }

        #endregion

        /// <summary>
        /// These methods handle further evluation of Event Collections following all XML data processing.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Event Collection Evaluation
        internal void EventCollectionEvaluation()
        {
            StartThread(EvaluateEventCollections);
        }

        /// <summary>
        /// Evaluates event collections in detail.  Allowing events to be linked to additional pieces of information only available by analyzing the event collection they are a part of.
        /// </summary>
        private void EvaluateEventCollections()
        {
            // Only check Historical Event Collections that contain events
            foreach (var evtcol in HistoricalEventCollections.Values.Where(x => x.Event != null))
                evtcol.Evaluate();

            //TODO
            //Case: Any simple battle event in event col with following hf died.
            //Change: Tie simple battle event to death event, noting that one person died.

            OnEventCollectionsEvaluated();
        }

        private static void OnEventCollectionsEvaluated()
        {
            if (EventCollectionsEvaluated != null)
                EventCollectionsEvaluated();
        }

        #endregion

        /// <summary>
        /// These methods handle assigning Historical Figures to coordinates, sites, or regions.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Historical Figures Positioning
        internal void HistoricalFiguresPositioning()
        {
            StartThread(PositionHistoricalFigures);
        }

        /// <summary>
        /// Evaluates the last known change HF state for a HF.  We then set the location of that HF at their last known location.
        /// </summary>
        private void PositionHistoricalFigures()
        {

            foreach (var hf in HistoricalFigures.Values.Where(x => x.DiedEvent == null))
            {
                if (hf.Events == null || hf.Events.All(x => HistoricalEvent.Types[x.Type] != "change hf state"))
                    continue;
                var evt = (HE_ChangeHFState)hf.Events.Last(x => HistoricalEvent.Types[x.Type] == "change hf state");

                hf.Site = evt.Site;
                hf.Region = evt.Subregion;
                hf.Coords = evt.Coords;

                if (hf.Site != null)
                {
                    if (hf.Site.Inhabitants == null)
                        hf.Site.Inhabitants = new List<HistoricalFigure>();
                    if (!hf.Site.Inhabitants.Contains(hf))
                        hf.Site.Inhabitants.Add(hf);
                }
                if (hf.Region == null) continue;
                if (hf.Region.Inhabitants == null)
                    hf.Region.Inhabitants = new List<HistoricalFigure>();
                if (!hf.Region.Inhabitants.Contains(hf))
                    hf.Region.Inhabitants.Add(hf);
            }

            

            OnHistoricalFiguresPositioned();
        }

        private static void OnHistoricalFiguresPositioned()
        {
            if (HistoricalFiguresPositioned != null)
                HistoricalFiguresPositioned();
        }

        #endregion

        /// <summary>
        /// These methods handle gathering stats following all XML Processing.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Stats Gathering
        internal void StatsGathering()
        {
            StartThread(GatherStats);
        }

        private void GatherStats()
        {
            Stats = new Stats(this);
            Stats.Gather();
            OnStatsGathered();
        }

        private static void OnStatsGathered()
        {
            if (StatsGathered != null)
                StatsGathered();
        }
        #endregion


        /// <summary>
        /// These methods handle creation of visualization maps and follows Event Collection Evaluation.
        ///     They raise events up to the MainForm to notify when things are finished.
        /// </summary>
        #region Visualization Creation
        internal void VisualizationCreation()
        {
            StartThread(CreateVisualizations);
        }

        private void CreateVisualizations()
        {
            Visualizations = new VisualizationCollection(this);
            VisualizationCollection.Create();
            OnVisualizationsCreated();
        }

        private static void OnVisualizationsCreated()
        {
            if (VisualizationsCreated != null)
                VisualizationsCreated();
        }
        #endregion

        /// <summary>
        /// These methods all find existing site/entity/civ objects from the history/site files, and if they were also found in the XML 
        ///     the data from the history/site file is copied over and the old object removed.
        /// </summary>
        #region Merging History/Site file data with XML
        internal void MergeSites()
        {
            Program.Log(LogType.Status, "Site Merging...");
            foreach (var sf in SitesFile.Values)
            {
                if (Sites[sf.ID].Name == sf.AltName.ToLower())
                    Sites[sf.ID].MergeInSiteFile(sf);
                else if (Sites[sf.ID].Name == Program.CleanString(sf.AltName.ToLower()))
                    Sites[sf.ID].MergeInSiteFile(sf);
                else if (PartialNameMatch(Sites[sf.ID].Name, sf.AltName.ToLower()) > .5)
                    Sites[sf.ID].MergeInSiteFile(sf);
                else
                    Program.Log(LogType.Warning, "Site from site file doesn't exist in XML");
                    
            }
            SitesFile.Clear();
            Program.Log(LogType.Status, " Done");
        }

        internal void MergeEntities()
        {
            Program.Log(LogType.Status, "Entity Merging...");
            foreach (var ent in EntitiesFile)
            {
                var entname = ent.Name.ToLower();
                foreach (var entxml in Entities.Values.Where(entxml => entxml.Name == entname && (entxml.Race == null || entxml.Race == ent.Race)))
                {
                    entxml.MergeInEntityFile(ent);
                    break;
                }
                if (!ent.EntityFileMerged)
                {
                    entname = Program.CleanString(entname);
                    foreach (var entxml in Entities.Values.Where(entxml => entxml.Name == entname))
                    {
                        entxml.MergeInEntityFile(ent);
                        break;
                    }
                }
                if (!ent.EntityFileMerged)
                    Program.Log(LogType.Warning, "Entity from file doesn't exist in XML");
            }
            EntitiesFile.Clear();
            Program.Log(LogType.Status, " Done");
        }

        internal void MergeCivs()
        {
            Program.Log(LogType.Status, "Civilization Merging...");
            foreach (var civ in Civilizations.Where(x => x.isFull))
            {
                var civname = civ.Name.ToLower();
                if (civ.Color == Color.Empty)
                    civ.Color = Program.NextDistinctColor();
                foreach (var ent in Entities.Values.Where(ent => ent.Name == civname))
                {
                    civ.Entity = ent;
                    ent.Civilization = civ;
                    break;
                }
                if (civ.Entity == null)
                {
                    civname = Program.CleanString(civname);
                    foreach (var ent in Entities.Values.Where(ent => ent.Name == civname))
                    {
                        civ.Entity = ent;
                        ent.Civilization = civ;
                        break;
                    }
                }
                if (civ.Entity == null)
                    Program.Log(LogType.Warning, "Civ from file doesn't exist in XML");
            }
            Program.Log(LogType.Status, " Done");
        }
        #endregion


        /// <summary>
        /// These methods are used to match a leader/god to a historical figure, based on name comparisons and other data.
        /// </summary>
        #region Matching HFsToPeople
        internal void MatchHistoricalFiguresToPeople()
        {
            Program.Log(LogType.Status, "Historical Figure Matching...");

            foreach (var leader in Leaders)
            {
                var leadername = leader.Name.ToLower();
                foreach (var hf in HistoricalFigures.Values.Where(hf => hf.Name != null && hf.Name.ToLower() == leadername))
                {
                    leader.HF = hf;
                    if (leader.InheritedFromSource != Leader.InheritanceSource.None)
                        leader.LinkInheritance();

                    hf.Leader = leader;
                    break;
                }
                if (leader.HF == null)
                {
                    leadername = Program.CleanString(leadername);
                    foreach (var hf in HistoricalFigures.Values.Where(hf => hf.Name != null && hf.Name.ToLower() == leadername))
                    {
                        leader.HF = hf;
                        if (leader.InheritedFromSource != Leader.InheritanceSource.None)
                            leader.LinkInheritance();

                        hf.Leader = leader;
                        break;
                    }
                }
                if (leader.HF == null)
                {
                    foreach (var hf in HistoricalFigures.Values.Where(x =>
                        ((x.BirthYear < 0 && leader.Birth == null) || 
                         ((leader.Birth != null) && x.BirthYear == leader.Birth.Year)) &&
                        ((x.DeathYear == null && leader.Death  == WorldTime.Present) || 
                         (leader.Death != null && (x.DeathYear == leader.Death.Year)))
                        ).Where(hf => isPartialMatch(hf, leader)))
                    {
                        leader.HF = hf;
                        if (leader.InheritedFromSource != Leader.InheritanceSource.None)
                            leader.LinkInheritance();
                        hf.Leader = leader;
                        break;
                    }
                }
                if (leader.HF == null)
                    Program.Log(LogType.Warning, "Leaderfrom File not in XML: " + leader.Name);
            }
            foreach (var god in Gods)
            {
                var godname = god.Name.ToLower();
                foreach (var hf in HistoricalFigures.Values.Where(hf => hf.Name != null && hf.Name.ToLower() == godname))
                {
                    god.HF = hf;
                    hf.God = god;
                    break;
                }
                if (god.HF == null)
                {
                    godname = Program.CleanString(godname);
                    foreach (var hf in HistoricalFigures.Values.Where(hf => hf.Name != null && hf.Name.ToLower() == godname))
                    {
                        god.HF = hf;
                        hf.God = god;
                        break;
                    }
                }
                if (god.HF == null)
                {
                    //var q = HistoricalFigures.Values.Where(x => x.Name.Length == 3 && x.Name.Contains("le")).ToList();
                    foreach (var hf in HistoricalFigures.Values.Where(x => x.Deity || x.Force).Where(hf => isPartialMatch(hf, god)))
                    {
                        god.HF = hf;
                        hf.God = god;
                        break;
                    }
                }
                if (god.HF == null)
                    Program.Log(LogType.Warning, "God from File not in XML: " + god.Name);
            }

            Program.Log(LogType.Status, " Done");
        }

        private static bool isPartialMatch(HistoricalFigure hf, WorldObject leader)
        {
            var useFull = false;
            if (hf.Name == null)
                return false;
            if (hf.Name.Length == leader.Name.Length)
                useFull = true;
            else if (hf.ShortName == null || hf.ShortName.Length != leader.Name.Length)
                return false;
            var hfname = useFull ? hf.Name : hf.ShortName;
            return PartialNameMatch(hfname, leader.Name.ToLower()) > .5;
        }

        private static float PartialNameMatch(string A, string B)
        {
            var i = 0;
            if (A == null || B == null)
                return 0;
            var matches = A.Count(t => t == B[i++]);
            return matches / (float)A.Length;
        }

        private static bool isPartialMatch(HistoricalFigure hf, God god)
        {
            var useFull = false;
            if (hf.Name.Length == god.Name.Length)
                useFull = true;
            else if (hf.Name == "" || hf.ShortName.Length != god.Name.Length)
                return false;
            var hfname = useFull ? hf.Name : hf.ShortName;
            return PartialNameMatch(hfname, god.Name.ToLower()) > .5;
        }
        #endregion

        #region Exporting

        /// <summary>
        /// When export is ran against  the world it exports all objects it first empties all the tables, then exports all the objects in sequence.
        /// </summary>
        internal void Export(string dbPath)
        {
            Database.SetConnection(dbPath);
            Database.EmptyAllTables();

            ExportWorldItems(Artifacts.Values.ToArray(), "artifact");
            ExportWorldItems(Entities.Values.ToArray(), "entity");
            ExportWorldItems(EntityPopulations.Values.ToArray(), "entitypopulation");
            ExportWorldItems(HistoricalFigures.Values.ToArray(), "historicalfigure"); //
            ExportWorldItems(HistoricalEras.Values.ToArray(), "historicalera");
            ExportWorldItems(HistoricalEvents.Values.ToArray(), "historicalevent"); //
            ExportWorldItems(HistoricalEventCollections.Values.ToArray(), "historicaleventcollection"); //
            ExportWorldItems(Parameters.ToArray(), "parameter");
            ExportWorldItems(Races.Values.ToArray(), "race");
            ExportWorldItems(Regions.Values.ToArray(), "region");
            ExportWorldItems(Sites.Values.ToArray(), "site");
            ExportWorldItems(Structures.Values.ToArray(), "structure");
            ExportWorldItems(UndergroundRegions.Values.ToArray(), "undergroundregion");
            ExportWorldItems(WorldConstructions.Values.ToArray(), "worldconstruction");
            ExportMaps();
            ExportWorldData();
            Database.CloseConnection();

            Program.mainForm.InvokeEx(f => f.exportWorldToolStripMenuItem.Visible = true);
        }

        private void ExportWorldData()
        {
            Database.BeginTransaction();

            Database.ExportWorldItem("World", new List<object> { "Name", LastYear.ToString() });
            Database.ExportWorldItem("World", new List<object> { "AltName", Name });
            Database.ExportWorldItem("World", new List<object> { "LastYear", AltName });

            Database.CommitTransaction();
        }

        private void ExportMaps()
        {
            foreach (var map in Maps)
            {
                Database.BeginTransaction();


                var vals = new List<object> { map.Key, Database.ImageToBlob(Image.FromFile(map.Value)) };

                Database.ExportWorldItem("Map", vals);
                Database.CommitTransaction();
                vals.Clear();
                //Memory grew too fast without this.
                GC.Collect();
            }
        }


        /// <summary>
        /// Objects are exported 500 at a time in each transaction.
        /// </summary>
        private static void ExportWorldItems<T>(IEnumerable<T> arr, string table) where T : WorldObject
        {

            var iCounter = 0;
            foreach (var item in arr)
            {

                if (iCounter == 0)
                    Database.BeginTransaction();
                item.Export(table);
                iCounter++;
                if (iCounter < 500) continue;
                Database.CommitTransaction();
                iCounter = 0;
            }

            if (iCounter > 0)
                Database.CommitTransaction();
        }

        #endregion

        public override string ToString()
        {
            return Name;
        }

        public void Dispose()
        {
            CloseActiveThreads();
            ClearStaticLists();
        }

        private void CloseActiveThreads()
        {
            foreach (var thread in Threads)
            {
                if (thread.IsAlive)
                {
                    thread.Abort();
                }
                while (thread.IsAlive)
                {
                    
                }
            }
        }

        private void ClearStaticLists()
        {
            God.Types.Clear();
            Leader.InheritanceTypes.Clear();
            Leader.LeaderTypes.Clear();
            Leader.InheritanceTypes = new List<string> { "Unknown", "Inherited", "New Line", "Original Line"};
            Region.Types.Clear();
            Site.Types.Clear();
            Structure.numStructures = 0;
            HistoricalEvent.Types.Clear();
            HE_ChangeHFState.States.Clear();
            HE_HFDied.Causes.Clear();
            HE_HFSimpleBattleEvent.Subtypes.Clear();
            
            HistoricalEventCollection.Types.Clear();
            
            HistoricalFigure.AssociatedTypes.Clear();
            HistoricalFigure.Castes.Clear();
            HistoricalFigure.Goals.Clear();
            HistoricalFigure.Interactions.Clear();
            HistoricalFigure.JourneyPets.Clear();
            HistoricalFigure.Spheres.Clear();
            EntityLink.LinkTypes.Clear();
            HFLink.LinkTypes.Clear();
            HFSkill.Skills.Clear();

            SiteLink.LinkTypes.Clear();
            
        }

        private void StartThread(Action action)
        {
            var threadStart = new ThreadStart(action);
            var thread = new Thread(threadStart) {IsBackground = true};
            Threads.Add(thread);

            thread.Start();
        }
    }
}
