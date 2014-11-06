using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using System.Windows.Forms;
using DFWV.WorldClasses;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;
using Drawing = System.Drawing;
using System.Drawing;

namespace DFWV
{
    public partial class MainForm : Form
    {
        /// <summary>
        /// The Root object which describes everything about the DF world.
        /// </summary>
        internal World World;

        /// <summary>
        /// Stores the dynamically generated controls for the currently viewed Historical Event, whereever it's viewed.
        /// </summary>
        public readonly List<Control> EventDetailControls = new List<Control>();

        /// <summary>
        /// Allows navigation through World Objects. (See Navigation Methods Region)
        /// </summary>
        private readonly Stack<WorldObject> NavBackObjects = new Stack<WorldObject>();
        private readonly Stack<WorldObject> NavForwardObjects = new Stack<WorldObject>();
        private bool navigatingBack;

        public MainForm()
        {
            InitializeComponent();

            LinkEvents();
            ClearTabs();
        }

        /// <summary>
        /// Displays box for searching for image map file to represent the world.
        /// The map is used because it's straightforward to find other related files for the world from the map, 
        ///     but not vice versa (because the world map file name contains extra data)
        /// After finding the map file it calls World.LoadFiles() which does all the initial loading.
        /// Events are subscribed which call XMLSectionFinished() and XMLFinished() which do post-loading processing of various sorts.
        /// </summary>
        private void loadWorldToolStripMenuItem_Click(object sender, EventArgs e)
        {
            var selectedFile = AutoFindFiles();

            if (selectedFile == "")
            { 
                var openFileDiag = new OpenFileDialog
                {
                    InitialDirectory = Program.GetDefaultPath(),
                    Filter = @"DF Maps/Archives(*.bmp, *.png, *.7z, *.zip)|*.bmp;*.png;*.7z;*.zip"
                };


                openFileDiag.ShowDialog();

                if (openFileDiag.FileName != "")
                    selectedFile = openFileDiag.FileName;
            }

            if (selectedFile != "")
            {
                if (Path.GetExtension(selectedFile) == ".7z" || Path.GetExtension(selectedFile) == ".zip")
                {
                    Program.ExtractArchive(selectedFile);

                    var newDirectory = Path.Combine(Path.GetDirectoryName(selectedFile), Path.GetFileNameWithoutExtension(selectedFile));

                    selectedFile = Directory.GetFiles(newDirectory, "*.bmp").FirstOrDefault();
                }
                if (selectedFile != null)
                    LoadFromFiles(selectedFile);
            }
        }

        private static string AutoFindFiles()
        {
            try
            {
                var selectedFile = "";

                var workingFolder = Program.GetDefaultPath();
                

                foreach (var file in Directory.GetFiles(workingFolder))
                {
                    var fileNameWithoutExtension = Path.GetFileNameWithoutExtension(file);
                    if (fileNameWithoutExtension == null ||
                        ((Path.GetExtension(file) != ".bmp" && Path.GetExtension(file) != ".png") ||
                         !fileNameWithoutExtension.StartsWith("world_map-"))) 
                        continue;
                    var mapFile = Path.GetFileNameWithoutExtension(file);
                    if (mapFile == null) 
                        continue;
                    var mapSplit = mapFile.Split("-".ToCharArray(), StringSplitOptions.RemoveEmptyEntries).ToList();

                    var tempName = mapSplit[1];


                    var xmlPath = Path.Combine(workingFolder, tempName + "-legends.xml");
                    var paramPath = Path.Combine(workingFolder, tempName + "-world_gen_param.txt");
                    var historyPath = Path.Combine(workingFolder, tempName + "-world_history.txt");
                    var sitesPath = Path.Combine(workingFolder, tempName + "-world_sites_and_pops.txt");

                    if (!File.Exists(xmlPath) || !File.Exists(paramPath) || !File.Exists(historyPath) ||
                        !File.Exists(sitesPath)) 
                        continue;
                    if (selectedFile == "")
                        selectedFile = file;
                    else
                    { //In case of multiple possibilities, make the user decide.
                        selectedFile = "";
                        break;
                    }
                }
                return selectedFile;
            }
            catch (Exception)
            {
                return "";
            }

            
            
        }

        private void LoadFromFiles(string filename)
        {
            var mapPath = filename;
            var path = Path.GetDirectoryName(mapPath) ?? "";
            if (mapPath.Contains("_graphic-")) //Picked wrong image
            {
                var thisFile = Path.GetFileName(mapPath);
                var restofFile = thisFile.Split('-').ToList();
                int year;
                //while (restofFile.Count > 4) //If the save file contains a hypen, deal with that.
                //{
                //    restofFile[1] = restofFile[1] + "-" + restofFile[2];
                //    restofFile.RemoveAt(2);
                //}
                restofFile.RemoveRange(0, Int32.TryParse(restofFile[2], out year) ? 1 : 2);

                thisFile = String.Join("-", restofFile);
                mapPath = Path.Combine(path, "world_map-" + thisFile);
            }
            if (!File.Exists(mapPath))
            {
                MessageBox.Show(@"Couldn't find basic map image");
                return;
            }

            var mapFile = Path.GetFileNameWithoutExtension(mapPath);
            var mapSplit = mapFile.Split("-".ToCharArray(), StringSplitOptions.RemoveEmptyEntries).ToList();

            mapSplit.RemoveAt(0);
            mapSplit.RemoveAt(mapSplit.Count - 1);

            var Year = Convert.ToInt32(mapSplit[mapSplit.Count - 1]);

            mapSplit.RemoveAt(mapSplit.Count - 1);

            var name = string.Join("-", mapSplit);


            var xmlPath = Path.Combine(path, name + "-legends.xml");
            var paramPath = Path.Combine(path, name + "-world_gen_param.txt");
            var historyPath = Path.Combine(path, name + "-world_history.txt");
            var sitesPath = Path.Combine(path, name + "-world_sites_and_pops.txt");

            if (File.Exists(xmlPath) && File.Exists(paramPath) && File.Exists(historyPath) && File.Exists(sitesPath))
            {

                DFXMLParser.StartedSection -= XMLSectionStarted;
                DFXMLParser.FinishedSection -= XMLSectionFinished;
                DFXMLParser.Finished -= XMLFinished;

                DFXMLParser.StartedSection += XMLSectionStarted;
                DFXMLParser.FinishedSection += XMLSectionFinished;
                DFXMLParser.Finished += XMLFinished;

                Program.Log(LogType.Status, "Loading XML");

                Application.DoEvents();

                World = new World(historyPath, sitesPath, paramPath, xmlPath, mapPath, Year);

                loadWorldToolStripMenuItem.Visible = false;

                World.LoadFiles();
                FillNonXMLLists();
            }
            else
                MessageBox.Show(@"Files not found.  Please make sure all 5 files Legends files are located with the selected map file. See the README.txt file included for details.", @"DF World Viewer",MessageBoxButtons.OK);



        }

        //private void LoadFromDB(string filename)
        //{

        //    //DFXMLParser.FinishedSection += new XMLFinishedSectionEventHandler(XMLSectionFinished);
        //    //DFXMLParser.Finished += new XMLFinishedEventHandler(XMLFinished);

        //    Program.Log(LogType.Status, "Loading World...");

        //    Application.DoEvents();

        //    World = new World(filename);

        //    loadWorldToolStripMenuItem.Visible = false;

        //    World.Import();
        //    FillNonXMLLists();
        //}


        /// <summary>
        /// Cleanly empties EventDetailControls, which stores controls related to displaying the current event.  
        /// Called normally before displaying a new event.
        /// </summary>
        internal void ClearEventDetails()
        {
            foreach (var ctrl in EventDetailControls)
            {
                if (ctrl.Parent != null)
                    ctrl.Parent.Controls.Remove(ctrl);
                ctrl.Dispose();
            }
            EventDetailControls.Clear();

        }

        /// <summary>
        /// Removes all but the World tab from the tablist, when the form loads.
        /// </summary>
        private void ClearTabs()
        {
            foreach (var tabpage in MainTab.TabPages.Cast<TabPage>().Where(tabpage => tabpage.Text != @"World"))
            {
                MainTab.TabPages.Remove(tabpage);
            }
            foreach (TabPage tabpage in MainTabEventCollectionTypes.TabPages)
            {
                MainTabEventCollectionTypes.TabPages.Remove(tabpage);
            }
        }

        /// <summary>
        /// Links all listboxes and treeviews to their appropriate "generic" methods, found in the Generic Control Events region below.
        /// The main listbox on all tabs won't be linked by design, they are linked manually when they are added.
        /// </summary>
        private void LinkEvents()
        {

            foreach (var listbox in Program.GetControlsOfType<ListBox>(this))
            {
                if (listbox.Parent is GroupBox)
                    listbox.DoubleClick += SubListBoxDoubleClicked;
                else
                {
                    listbox.DrawMode = DrawMode.OwnerDrawFixed;
                    listbox.DrawItem += ListBoxDrawItem;
                    listbox.SelectedIndexChanged += ListBoxSelectedIndexChanged;
                }
            }

            foreach (var treeview in Program.GetControlsOfType<TreeView>(this))
            {
                treeview.DoubleClick += TreeviewDoubleClicked;
                treeview.MouseClick += TreeviewMouseClicked;
            }
        }


        /// <summary>
        /// These are events fired off when a toolstrip menu button is clicked, besdies the navigation ones
        /// </summary>
        #region ToolbarClickEvents
        /// <summary>
        /// Loads and displays the map form.
        /// </summary>
        private void showMapToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Program.mapForm == null || Program.mapForm.IsDisposed)
                Program.mapForm = new MapForm(World);
            Program.mapForm.Location = Location;
            Program.mapForm.Show();
        }

        /// <summary>
        /// Loads and displays the map form.
        /// </summary>
        private void timelinetoolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Program.timelineForm == null || Program.timelineForm.IsDisposed)
                Program.timelineForm = new TimelineForm(World);
            Program.timelineForm.Location = Location;
            Program.timelineForm.Show();
        }

        /// <summary>
        /// Loads and displays the stats form.
        /// </summary>
        private void statsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Program.statsForm == null || Program.statsForm.IsDisposed)
                Program.statsForm = new StatsForm(World);
            Program.statsForm.Location = Location;
            Program.statsForm.Show();
        }

        /// <summary>
        /// Fires off the Export method of the World Object on a new thread, which outputs all relevant world data to a SQLite database.
        /// </summary>
        private void exportWorldToolStripMenuItem_Click(object sender, EventArgs e)
        {
            var saveFileDiag = new SaveFileDialog
            {
                InitialDirectory = Application.StartupPath,
                Filter = @"World Viewer Export (*.sqlite3)|*.sqlite3",
                FileName = Program.CleanString(World.Name) + " Export.sqlite3"
            };

            saveFileDiag.ShowDialog();

            if (saveFileDiag.FileName == "")
                return;
            var filename = saveFileDiag.FileName;
            if (Path.GetExtension(filename) != ".sqlite3")
                filename = Path.GetFileNameWithoutExtension(filename) + ".sqlite3";

            if (File.Exists(filename))
                File.Delete(filename);
            File.Copy(Application.StartupPath + @"\DFWV_Template.sqlite3.backup", filename);

            exportWorldToolStripMenuItem.Visible = false;
            var XMLThread = new Thread(() => World.Export(filename));

            XMLThread.Start();
        }

        /// <summary>
        /// Closes the existing world so allow a new world to be loaded.
        /// </summary>
        private void closeWorldToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ClearTabs();
            closeWorldToolStripMenuItem.Visible = false;
            exportWorldToolStripMenuItem.Visible = false;
            showMapToolStripMenuItem.Visible = false;
            statsToolStripMenuItem.Visible = false;
            timelineToolStripMenuItem.Visible = false;
            visualizationsToolStripMenuItem.Visible = false;
            ClearNav();

            WorldSummaryTree.Nodes.Clear();
            StatusBox.Clear();
            IssuesBox.Clear();

            loadWorldToolStripMenuItem.Visible = true;

            World.Dispose();
            World = null;
        }
        #endregion

        /// <summary>
        /// These are methods that are fired off for nearly every treeview and listbox, so allow easy navigation between objects on the form without a lot of coding work.
        /// </summary>
        #region Generic Control Events
        private static void TreeviewMouseClicked(object sender, MouseEventArgs e)
        {
            var treeview = (TreeView)sender; 
            if (e.Button == MouseButtons.Right)
                treeview.ExpandAll();
        }

        /// <summary>
        /// When treeview items are added, they will be given a tag of a World Object 
        ///     (for example, the descendents treeview has historical figure objects added as tags)
        /// When those treeview nodes are double clicked we should route to the associated world object by running it's Select() method.
        /// </summary>
        private void TreeviewDoubleClicked(object sender, EventArgs e)
        {
            var treeview = (TreeView)sender;
            var selectedNode = treeview.SelectedNode;
            if (selectedNode == null || selectedNode.Tag == null) 
                return;
            var selectedItem = (WorldObject)selectedNode.Tag;
            selectedItem.Select(this);
        }

        /// <summary>
        /// When sub-listbox items are added, they are not always world objects (for example, historical figure spheres)
        /// In those cases we want to first verify if the list box item is a world object, and if so we 
        ///     want to route to it by running it's Select() method.
        /// </summary>
        private void SubListBoxDoubleClicked(object sender, EventArgs e)
        {
            var listBox = (ListBox)sender;
            var selectedItem = listBox.SelectedItem as WorldObject;
            if (selectedItem != null)
            {
                selectedItem.Select(this);
            }
        }


        /// <summary>
        /// Called from all the "primary" listboxes, on the left of each of the tabs.  These always are world objects 
        ///     and if we select one of them we should route to it by running it's Select() method.
        /// </summary>
        private void ListBoxSelectedIndexChanged(object sender, EventArgs e)
        {
            var listBox = (ListBox)sender;
            if (listBox.SelectedItem is WorldObject)
            {
                var selectedItem = (WorldObject)listBox.SelectedItem;
                if (selectedItem != null)
                    selectedItem.Select(this);
            }
        }

        private void ListBoxDrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                ListBox lstBox = sender as ListBox;
                if (lstBox.Items[e.Index] is WorldObject)
                {
                    e.Graphics.DrawString(lstBox.Items[e.Index].ToString(),
                            e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);
                }
                else
                {
                    e.Graphics.DrawString(lstBox.Items[e.Index].ToString(),
                            e.Font, Drawing.Brushes.Red, e.Bounds, Drawing.StringFormat.GenericDefault);
                }

            }
            e.DrawFocusRectangle();
        }
#endregion


        /// <summary>
        /// These all are used to fill the primary listboxes without having to write loops for each of them, 
        ///     designed with the goal of having a single line call to be able to clear and refill a listbox appropriately.
        /// FillList<T>() and  FillList<T,K>() are the interesting bits.
        /// </summary>
        #region Fill Lists
        private void FillAllLists()
        {
            FillNonXMLLists();
            FillXMLLists();
        }

        private void FillNonXMLLists()
        {
            FillList(lstCivilization, World.Civilizations, tabCivilization);
            FillList(lstGod, World.Gods, tabGod);
            FillList(lstLeader, World.Leaders, tabLeader);
            FillList(lstParameter, World.Parameters, tabParameter);
            FillList(lstRace, World.Races, tabRace);
            FillList(lstSite, World.SitesFile, tabSite);
            FillList(lstEntity, World.EntitiesFile, tabEntity);
        }

        private void FillXMLLists()
        {
            FillList(lstRegion, World.Regions, tabRegion);
            FillList(lstUndergroundRegion, World.UndergroundRegions, tabUndergroundRegion);
            FillList(lstEntity, World.Entities, tabEntity);
            FillList(lstEntityPopulation, World.EntityPopulations, tabEntityPopulation);
            FillList(lstSite, World.Sites, tabSite);
            FillList(lstWorldConstruction, World.WorldConstructions, tabWorldConstruction);
            FillList(lstArtifact, World.Artifacts, tabArtifact);
            FillList(lstHistoricalFigure, World.HistoricalFigures, tabHistoricalFigure);
            FillList(lstHistoricalEvent, World.HistoricalEvents, tabHistoricalEvent);
            FillList(lstHistoricalEventCollection, World.HistoricalEventCollections, tabHistoricalEventCollection);
            FillList(lstHistoricalEra , World.HistoricalEras, tabHistoricalEra);
        }


        /// <summary>
        /// Fill listboxes (from a non-UI thread) in a AddRange() call from a generic list.
        /// Takes into account the current filters on that type of object before filling the list.
        /// </summary>
        /// <typeparam name="T">The type of the object which will fill our listbox</typeparam>
        /// <param name="listBox">The listbox to fill</param>
        /// <param name="list">The list of objects to fill from</param>
        /// <param name="tabPage">The page this listbox is on</param>
        private void FillList<T>(ListBox listBox, List<T> list, TabPage tabPage) where T : class
        {
            listBox.InvokeEx(f =>
            {
                f.BeginUpdate();
                f.Items.Clear();
                f.Items.AddRange(World.Filters[typeof(T)].Get(list).ToArray<object>());
                f.EndUpdate();

            });


            if (!MainTab.TabPages.Contains(tabPage))
                this.InvokeEx(f => f.MainTab.TabPages.Add(tabPage));
        }

        /// <summary>
        /// Same as FillList<T>() except for use with World Dictionaries instead of World Lists (dictionaries are normally from the XML, where IDs are given)
        /// </summary>
        /// <typeparam name="T">The type of the object which will fill our listbox</typeparam>
        /// <typeparam name="K">The type of the key for the dictionary, often int</typeparam>
        /// <param name="listBox">The listbox to fill</param>
        /// <param name="dict">The dictionary of objects to fill from</param>
        /// <param name="tabPage">The page this listbox is on</param>
        private void FillList<T, K>(ListBox listBox, Dictionary<K, T> dict, TabPage tabPage) where T : WorldObject
        {

            listBox.InvokeEx(f =>
            {
                f.BeginUpdate();
                f.Items.Clear();
                f.Items.AddRange(World.Filters[typeof(T)].Get(dict.Values.ToList()).ToArray<object>());
                f.EndUpdate();
            });

            if (!MainTab.TabPages.Contains(tabPage))
                this.InvokeEx(f => f.MainTab.TabPages.Add(tabPage));
        }

    #endregion

        #region Loading Events
        /// <summary>
        /// These methods are called from the World object after being subscribed to, 
        ///     they allow the UI to operate while other threads are handling world *XML* loading.
        ///     Other loading is so quick it doesn't need events.
        /// </summary>

        /// <summary>
        /// Called when a specific section of XML starts loading.  
        /// </summary>
        private void XMLSectionStarted(string section)
        {
            Program.Log(LogType.Status, section + " Loading...");
        }

        /// <summary>
        /// Called when a specific section of XML is finished loading.  
        ///     After each is finished the details are written on the World Tab.  The first section writes the details from all the other files which are loaded first.
        /// </summary>
        private void XMLSectionFinished(string section)
        {
            Program.Log(LogType.Status, " Done");
            if (DFXMLParser.MemoryFailureQuitParsing)
                return;
            switch (section)
            {
                case "regions":
                    FillList(lstRegion, World.Regions, tabRegion);

                    AddSummaryItem(World.Name  + World.AltName  );
                    AddSummaryItem(@"Last Year: " + World.LastYear );
                    AddSummaryItem(@"Maps Found: " + World.Maps.Count  );
                    AddSummaryItem(@"History File" );
                    AddSummaryItem(@"Civilizations: " + World.Civilizations.Count , "History File");
                    AddSummaryItem(@"Gods: " + World.Gods.Count , "History File");
                    AddSummaryItem(@"Leaders: " + World.Leaders.Count  , "History File");
                    AddSummaryItem(@"Site File" );
                    AddSummaryItem(@"Sites: " + World.SitesFile.Count , "Site File");
                    AddSummaryItem(@"Entities: " + World.EntitiesFile.Count , "Site File");
                    AddSummaryItem(@"Races: " + World.Races.Count  , "Site File");
                    AddSummaryItem(@"XML" );
                    AddSummaryItem(@"Regions: " + World.Regions.Count , "XML");
                    
                    break;
                case "underground_regions":
                    FillList(lstUndergroundRegion, World.UndergroundRegions, tabUndergroundRegion);
                    AddSummaryItem(@"Underground Regions: " + World.UndergroundRegions.Count , "XML");
                    break;
                case "entities":
                    FillList(lstEntity, World.Entities, tabEntity);
                    AddSummaryItem(@"Entities: " + World.Entities.Count , "XML");
                    break;
                case "entity_populations":
                    FillList(lstEntityPopulation, World.EntityPopulations, tabEntityPopulation);
                    AddSummaryItem(@"Entity Populations: " + World.EntityPopulations.Count , "XML");
                    break;
                case "sites":
                    FillList(lstSite, World.Sites, tabSite);
                    AddSummaryItem(@"Sites: " + World.Sites.Count , "XML");
                    break;
                case "world_constructions":
                    FillList(lstWorldConstruction, World.WorldConstructions, tabWorldConstruction);
                    
                    break;
                case "artifacts":
                    FillList(lstArtifact, World.Artifacts, tabArtifact);
                    AddSummaryItem(@"Artifacts: " + World.Artifacts.Count , "XML");
                    break;
                case "historical_figures":
                    FillList(lstHistoricalFigure, World.HistoricalFigures, tabHistoricalFigure);
                    string hfLabel = @"Historical Figures: " + World.HistoricalFigures.Count ;
                    AddSummaryItem(hfLabel, "XML");

                    AddSummaryItem(@"Castes" , hfLabel);
                    foreach (var hfCaste in HistoricalFigure.Castes)
                    {
                        AddSummaryItem(string.Format(@"{0}: {1}", hfCaste, World.HistoricalFigures.Values.Count(x => x.Caste.HasValue && HistoricalFigure.Castes[x.Caste.Value] == hfCaste)), "Castes");
                    }
                    
                    AddSummaryItem(string.Format(@"{0}: {1}", "*NONE*", World.HistoricalFigures.Values.Count(x => !x.Caste.HasValue)), "Castes");

                    AddSummaryItem(@"      Associated Types" , hfLabel);
                    foreach (var hfAssociatedType in HistoricalFigure.AssociatedTypes)
                    {
                        AddSummaryItem(string.Format(@"{0}: {1}", hfAssociatedType, World.HistoricalFigures.Values.Count(x => x.AssociatedType.HasValue && HistoricalFigure.AssociatedTypes[x.AssociatedType.Value] == hfAssociatedType)), "Associated Types");
                    }

                    AddSummaryItem(string.Format(@"{0}: {1}", "*NONE*", World.HistoricalFigures.Values.Count(x => !x.AssociatedType.HasValue)), "Associated Types");
                    AddSummaryItem(@"Adventurers: " + World.HistoricalFigures.Values.Count(x => x.Adventurer), hfLabel);
                    AddSummaryItem(@"Animated: " + World.HistoricalFigures.Values.Count(x => x.Animated), hfLabel);
                    AddSummaryItem(@"Ghost: " + World.HistoricalFigures.Values.Count(x => x.Ghost), hfLabel);
                    AddSummaryItem(@"Deity: " + World.HistoricalFigures.Values.Count(x => x.Deity), hfLabel);
                    AddSummaryItem(@"Force: " + World.HistoricalFigures.Values.Count(x => x.Force), hfLabel);


                    AddSummaryItem(@"Sphere Alignment", hfLabel);
                    for (int i = 0; i < HistoricalFigure.Spheres.Count; i++)
                    {
                        AddSummaryItem(HistoricalFigure.Spheres[i] + ": " +  World.HistoricalFigures.Values.Count(x => x.Sphere != null && x.Sphere.Contains(i)), @"Sphere Alignment");
                    }

                    AddSummaryItem(@"Has Pet: " + World.HistoricalFigures.Values.Count(x => x.JourneyPet != null), hfLabel);

                    break;
                case "historical_events":
                    FillList(lstHistoricalEvent, World.HistoricalEvents, tabHistoricalEvent);
                    string evtLabel = @"    Historical Events: " + World.HistoricalEvents.Count ;
                    AddSummaryItem(evtLabel, "XML");
                    foreach (var evtType in HistoricalEvent.Types)
                    {
                        AddSummaryItem(string.Format(@"      {0}: {1}", evtType, World.HistoricalEvents.Values.Count(x => x.EventType == evtType)), evtLabel);
                    }
                    break;
                case "historical_event_collections":
                    FillList(lstHistoricalEventCollection, World.HistoricalEventCollections, tabHistoricalEventCollection);
                    string evtColLabel = @"    Historical Event Collections: " + World.HistoricalEventCollections.Count ;
                    AddSummaryItem(evtColLabel, "XML");
                    foreach (var evtColType in HistoricalEventCollection.Types)
                    {
                        AddSummaryItem(string.Format(@"      {0}: {1}", evtColType, World.HistoricalEventCollections.Values.Count(x => x.EventCollectionType == evtColType)), evtColLabel);
                    }
                    break;
                case "historical_eras":
                    FillList(lstHistoricalEra, World.HistoricalEras, tabHistoricalEra);
                    AddSummaryItem(@"    Historical Eras: " + World.HistoricalEras.Count , "XML");
                    break;
            }
        }

        /// <summary>
        /// Adds an additional item to the World Summary Tree, optionally under a specific parent
        /// </summary>
        private void AddSummaryItem(string item, string parent = null)
        {
            //this.InvokeEx(f => f.WorldSummary.Text += item);
            this.InvokeEx(f =>
            {
                if (!(f.WorldSummaryTree.TreeViewNodeSorter is WorldSummaryNodeSorter))
                    f.WorldSummaryTree.TreeViewNodeSorter = new WorldSummaryNodeSorter();
            });
            if (parent == null)
                this.InvokeEx(f => f.WorldSummaryTree.Nodes.Add(item.Trim()));

                

            else
            {
                this.InvokeEx(f =>
                {
                    var parentNode = f.WorldSummaryTree.FlattenTree().FirstOrDefault(n => n.Text == parent.Trim());
                    if (parentNode != null)
                    {
                        var itemNode = new TreeNode(item.Trim());
                        parentNode.Nodes.Add(itemNode);
//#if DEBUG
//                        itemNode.EnsureVisible();
//                        f.WorldSummaryTree.Refresh();
//#endif
                    }
                });
            }

        }

        /// <summary>
        /// Once all the sections are finished we spin off 4 different threads which handle making matching up the XML with the history/site files.
        /// Since the XML is all loaded we allow world exporting at this point, since nothing else after this point is data that's exported.
        /// Events are subscribed to for the "Linking" step, which turns associations to XML objects by IDs, to actual references to the corresponding object.
        /// </summary>
        private void XMLFinished()
        {
            Program.Log(LogType.Status, "XML Loading Done");

            World.MergeSites();
            World.MergeEntities();
            World.MergeCivs();
            World.MatchHistoricalFiguresToPeople();


            this.InvokeEx(f => f.exportWorldToolStripMenuItem.Visible = true);
            
            Program.Log(LogType.Status, "XML Linking Started");

            World.LinkedSectionStart -= XMLSectionLinkedStart;
            World.LinkedSection -= XMLSectionLinked;
            World.Linked -= XMLLinked;

            World.LinkedSectionStart += XMLSectionLinkedStart;
            World.LinkedSection += XMLSectionLinked;
            World.Linked += XMLLinked;

            World.LinkXMLData();

        }

        /// <summary>
        /// When a section linking starts it's noted.
        /// </summary>
        private static void XMLSectionLinkedStart(string section)
        {
            Program.Log(LogType.Status, section + " Linking...");
        }

        /// <summary>
        /// After a section is linked, it's noted.
        /// </summary>
        private static void XMLSectionLinked(string section)
        {
            Program.Log(LogType.Status, " Done");
        }

        /// <summary>
        /// Once all the sections are linked we allow map and timeline viewing, further processing just improves data, which isn't necessary for those features.
        /// Events are subscribed to for the "Processing" step which makes data more efficiently pulled back, including filling various "events" lists which will be blank before that item is processed.
        /// Dynasties Created and Families Counted are event handlers which are called after completing the World.FamilyProcessing() method below.
        /// </summary>
        private void XMLLinked()
        {
            Program.Log(LogType.Status, "XML Linking Done");
            this.InvokeEx(f => f.showMapToolStripMenuItem.Visible = true);
            this.InvokeEx(f => f.timelineToolStripMenuItem.Visible = true);
            FillList(lstStructure, World.Structures, tabStructure);

            AddSummaryItemsLearnedFromLinking();

            World.ProcessedSectionStart -= XMLSectionProcessedStart;
            World.ProcessedSection -= XMLSectionProcessed;
            World.Processed -= XMLProcessed;
            World.FamiliesCounted -= FamiliesCounted;
            World.DynastiesCreated -= DynastiesCreated;

            World.ProcessedSectionStart += XMLSectionProcessedStart;
            World.ProcessedSection += XMLSectionProcessed;
            World.Processed += XMLProcessed;
            World.FamiliesCounted += FamiliesCounted;
            World.DynastiesCreated += DynastiesCreated;

            Program.Log(LogType.Status, "XML Processing Started");

            World.ProcessXMLData();
        }

        /// <summary>
        /// After linking is complete, certain additional bits of World Summary Data can be dropped into the summary.
        /// </summary>
        private void AddSummaryItemsLearnedFromLinking()
        {
            AddSummaryItem(@"World Constructions: " + World.WorldConstructions.Count);

            string hfLabel = @"    Historical Figures: " + World.HistoricalFigures.Count;
            AddSummaryItem(@"Races", hfLabel);
            foreach (var race in World.Races.Values)
            {
                int count = World.HistoricalFigures.Values.Count(x => x.Race == race);
                if (count == 0)
                    continue;
                AddSummaryItem(string.Format(@"{0}: {1}", race.Name, count), "Races");
            }

            AddSummaryItem(@"Alive: " + World.HistoricalFigures.Values.Count(x => !x.Dead), hfLabel);
            AddSummaryItem(@" Dead: " + World.HistoricalFigures.Values.Count(x => x.Dead), hfLabel);
            AddSummaryItem(@"Is Leader: " + World.HistoricalFigures.Values.Count(x => x.Leader != null), hfLabel);

        }

        /// <summary>
        /// After processing is complete, certain additional bits of World Summary Data can be dropped into the summary.
        /// </summary>
        private void AddSummaryItemsLearnedFromProcessing()
        {
            string hfLabel = @"    Historical Figures: " + World.HistoricalFigures.Count;

            AddSummaryItem(@"Prisoners: " + World.HistoricalFigures.Values.Count(x => x.PrisonerOf != null), hfLabel);
            AddSummaryItem(@"Slaves: " +  World.HistoricalFigures.Values.Count(x => x.SlaveOf != null), hfLabel);
            AddSummaryItem(@"Heroes: " + World.HistoricalFigures.Values.Count(x => x.HeroOf != null), hfLabel);
            AddSummaryItem(@"Had Children: " + World.HistoricalFigures.Values.Count(x => x.Children != null), hfLabel);
            AddSummaryItem(@"Childless: " +  World.HistoricalFigures.Values.Count(x => x.Children == null), hfLabel);
            AddSummaryItem(@"Married: " + World.HistoricalFigures.Values.Count(x => x.Spouses != null), hfLabel);

        }

        /// <summary>
        /// Before a section is processed, it's noted.
        /// </summary>
        private void XMLSectionProcessedStart(string section)
        {
            Program.Log(LogType.Status, section + " Processing...");
        }


        /// <summary>
        /// After a section is processed, it's noted.  The World.FamilyProcessing() method starts threads which create dynasties and 
        ///     count family members (this could take an enormous amount of time on old worlds, so it'll likely just keep running in the background as you view everything else)
        /// </summary>
        private void XMLSectionProcessed(string section)
        {
            Program.Log(LogType.Status, " Done");
            if (section == "Historical Figures")
                World.FamilyProcessing();
        }

        /// <summary>
        /// When families are done being counted that's noted.  Once this is done the Ancestor and Descendnet counts in the Historical Figures filter option will give good results.
        /// </summary>
        static void FamiliesCounted()
        {
            Program.Log(LogType.Status, "Families Counted");
        }

        /// <summary>
        /// Fill Dynasties when they're created.  This is a new type of World Object I came up with since the data existed and it seems interesting.  See World.CreateDynasties() for details.
        /// </summary>
        void DynastiesCreated()
        {
            FillList(lstDynasty, World.Dynasties, tabDynasty);
            Program.Log(LogType.Status, "Dynasties Created");
            AddSummaryItem(@"    Dynasties: " + World.Dynasties.Count, "XML");
        }

        /// <summary>
        /// After all the sections have been processed (families might not have been counted yet, but that's okay)
        ///     We start Evaluating Event Collections - This gathers extra data by viewing Historical Events from their event collections, this lets us get new info like:
        ///         finding out where item's were stolen, what beast devoured a historical figure, and other things.  See World.EventCollectionEvaluation() for details.
        ///     and Positioning Historical figures - This pulls in all the data we have so far to try to place a historical figure in some location, it's incomplete but still interesting:
        ///         See World.HistoricalFiguresPositioning() for details.
        /// </summary>
        private void XMLProcessed()
        {
            Program.Log(LogType.Status, "XML Processing Done");

            FillAllLists();

            AddSummaryItemsLearnedFromProcessing();

            World.EventCollectionsEvaluated -= World_EventCollectionsEvaluated;
            World.HistoricalFiguresPositioned -= World_HistoricalFiguresPositioned;
            World.StatsGathered -= World_StatsGathered;

            World.EventCollectionsEvaluated += World_EventCollectionsEvaluated;
            World.HistoricalFiguresPositioned += World_HistoricalFiguresPositioned;
            World.StatsGathered += World_StatsGathered;

            World.EventCollectionEvaluation();
            World.HistoricalFiguresPositioning();
            World.StatsGathering();
        }

        private void World_EventCollectionsEvaluated()
        {
            Program.Log(LogType.Status, "Event Collections Evaluated");


            //TODO: Implement Visualization Code:
            //World.VisualizationsCreated -= World_VisualizationsCreated;

            //World.VisualizationCreation();
            this.InvokeEx(f => f.closeWorldToolStripMenuItem.Visible = true);
        }

        /// <summary>
        ///  After trying to position historical figures, note how many were succesfully positioned out of all those who are alive (dead people aren't positioned because they're dead).
        /// </summary>
        private void World_HistoricalFiguresPositioned()
        {
            var HFsPositioned = World.HistoricalFigures.Values.Count(x => x.Site != null || x.Region != null || x.Coords != Drawing.Point.Empty && !x.Dead);
            var HFsAlive = World.HistoricalFigures.Values.Count(x => x.Dead);

            Program.Log(LogType.Status, String.Format("Historical Figures Positioned (" + Math.Round(100.0f * HFsPositioned / HFsAlive, 0) + "% located)"));

        }

        private void World_StatsGathered()
        {
            Program.Log(LogType.Status, "World Stats Gathered");

            this.InvokeEx(f => f.statsToolStripMenuItem.Visible = true);
        }

        private void World_VisualizationsCreated()
        {
            Program.Log(LogType.Status, "Visualizations Created");

            this.InvokeEx(f => f.visualizationsToolStripMenuItem.Visible = true);
            this.InvokeEx(f => f.closeWorldToolStripMenuItem.Visible = true);
        }

        #endregion

        #region Entity Population Tab
        /// <summary>
        /// When an entity population is part of a war and we select that war we want to display that entity populations role in that war.
        /// </summary>
        private void lstEntityPopulationBattles_SelectedIndexChanged(object sender, EventArgs e)
        {
            var evtcol = (EC_Battle)lstEntityPopulationBattles.SelectedItem;
            var entpop = (EntityPopulation)lstEntityPopulation.SelectedItem;
            var thisSquad = evtcol.AttackingSquad.FirstOrDefault(squad => squad.EntityPopulation == entpop);
            if (thisSquad == null)
            {
                foreach (var squad in evtcol.DefendingSquad.Where(squad => squad.EntityPopulation == entpop))
                {
                    thisSquad = squad;
                    break;
                }
            }
            if (thisSquad == null)
            {
                lblEntityPopulationBattleDeaths.Text = "";
                lblEntityPopulationBattleNumber.Text = "";
                lblEntityPopulationBattleSite.Data = null;
                lblEntityPopulationBattleTime.Data = null;
                lblEntityPopulationBattleTime.Text = "";
                lblEntityPopulationBattleWar.Data = null;

            }
            else
            {
                lblEntityPopulationBattleDeaths.Text = thisSquad.Deaths.ToString();
                lblEntityPopulationBattleNumber.Text = thisSquad.Number.ToString();
                lblEntityPopulationBattleSite.Data = thisSquad.Site;
                lblEntityPopulationBattleTime.Data = evtcol;
                lblEntityPopulationBattleTime.Text = evtcol.StartTime.ToString();
                lblEntityPopulationBattleWar.Data = evtcol.WarEventCol;
            }
        }
        #endregion

        /// <summary>
        /// Because sites list the things that live there and the number of those things when that information is added to a listbox 
        ///     it needs to both be added as the race in question, but then displayed with addition information.  
        ///     These methods handle modifying how items are displayed in those three listboxes.
        /// </summary>
        #region Site Tab
        private void lstSitePopulation_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                var thisSite = (Site)lstSite.SelectedItem;
                var drawstring = thisSite.Population[(Race)lstSitePopulation.Items[e.Index]] +
                    " " + lstSitePopulation.Items[e.Index];
                e.Graphics.DrawString(drawstring,
                    e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);
            }
            e.DrawFocusRectangle();
        }

        private void lstSitePrisoners_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();


            if (e.Index != -1)
            {
                var thisSite = (Site)lstSite.SelectedItem;
                var drawstring = thisSite.Prisoners[(Race)lstSitePrisoners.Items[e.Index]] +
                    " " + lstSitePrisoners.Items[e.Index];
                e.Graphics.DrawString(drawstring,
                    e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);
            }
            e.DrawFocusRectangle();
        }

        private void lstSiteOutcasts_DrawItem(object sender, DrawItemEventArgs e)
        {

            e.DrawBackground();


            if (e.Index != -1)
            {
                var thisSite = (Site)lstSite.SelectedItem;
                var drawstring = thisSite.Outcasts[(Race)lstSiteOutcasts.Items[e.Index]] +
                    " " + lstSiteOutcasts.Items[e.Index];
                e.Graphics.DrawString(drawstring,
                    e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);
            }
            e.DrawFocusRectangle();

        }
        #endregion

        /// <summary>
        /// Since civilizations contain leaders, sites, gods, and have wars...
        ///     These methods handle modifying how items are displayed in those listboxes.
        /// </summary>
        #region Civilization Tab
        private void lstCivilizationSites_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                var thisSite = (Site)lstCivilizationSites.Items[e.Index];


                e.Graphics.DrawString(thisSite.Name,
                        e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);

                StringFormat lineAlignFormat = new StringFormat();
                lineAlignFormat.Alignment = StringAlignment.Center;
                lineAlignFormat.LineAlignment = StringAlignment.Near;

                e.Graphics.DrawString(WorldClasses.Site.Types[thisSite.Type],
                        e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);

                lineAlignFormat.Alignment = StringAlignment.Far;

                if (thisSite.Parent == null)
                    e.Graphics.DrawString(thisSite.Population.First().Value.ToString() + " " + thisSite.Population.First().Key.ToString(),
                        e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);
                else
                {
                    if (thisSite.Population.ContainsKey(thisSite.Parent.Race))
                        e.Graphics.DrawString(thisSite.Population[thisSite.Parent.Race] + " " + thisSite.Parent.Race.ToString(),
                            e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);
                    else if (thisSite.Population.Count > 0)
                        e.Graphics.DrawString(thisSite.Population.First().Value.ToString() + " " + thisSite.Population.First().Key.ToString(),
                            e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);
                }

            }
            e.DrawFocusRectangle();
        }

        private void lstCivilizationLeaders_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();
            if (e.Index != -1)
            {
                var thisLeader = (Leader)lstCivilizationLeaders.Items[e.Index];

                if (thisLeader.isCurrent)
                {
                    e.Graphics.DrawString(thisLeader.Name.Split(new string[2] {" the ", " The "},StringSplitOptions.RemoveEmptyEntries)[0],
                        new Drawing.Font(e.Font.FontFamily.ToString(), e.Font.Size, Drawing.FontStyle.Underline), Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);
                }
                else
                    e.Graphics.DrawString(thisLeader.Name.Split(new string[2] { " the ", " The " }, StringSplitOptions.RemoveEmptyEntries)[0],
                        e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);


                    
                e.Graphics.DrawString(Leader.LeaderTypes[thisLeader.LeaderType] + (thisLeader.ReignBegan.Year > -1 ? " from " + thisLeader.ReignBegan.Year : ""),
                        e.Font, Drawing.Brushes.Black, new PointF(e.Bounds.Width / 5 * 2, e.Bounds.Top), Drawing.StringFormat.GenericDefault);

                StringFormat lineAlignFormat = new StringFormat();
                lineAlignFormat.Alignment = StringAlignment.Far;
                lineAlignFormat.LineAlignment = StringAlignment.Near;

                e.Graphics.DrawString(thisLeader.Race != null ? thisLeader.Race.ToString() : (thisLeader.HF != null && thisLeader.HF.Race != null? thisLeader.HF.Race.ToString() : ""),
                    e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);


            }
            e.DrawFocusRectangle();
        }

        private void lstCivilizationGods_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                var thisGod = (God)lstCivilizationGods.Items[e.Index];

                e.Graphics.DrawString(thisGod.Name.Split(new string[2] { " the ", " The " }, StringSplitOptions.RemoveEmptyEntries)[0],
                        e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);

                StringFormat lineAlignFormat = new StringFormat();
                lineAlignFormat.Alignment = StringAlignment.Center;
                lineAlignFormat.LineAlignment = StringAlignment.Near;

                e.Graphics.DrawString(God.Types[thisGod.Type],
                        e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);

                lineAlignFormat.Alignment = StringAlignment.Far;
 
                e.Graphics.DrawString(thisGod.RaceName,
                    e.Font, Drawing.Brushes.Black, e.Bounds, lineAlignFormat);

            }
            e.DrawFocusRectangle();
        }


        private void lstCivilizationWars_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();
            if (e.Index != -1)
            {
                var thisWar = (EC_War)lstCivilizationWars.Items[e.Index];
                if (lstCivilization.SelectedItem == null || !(lstCivilization.SelectedItem is WorldObject))
                    return;
                var thisCiv = (Civilization)lstCivilization.SelectedItem;
                e.Graphics.DrawString(thisWar.ToString(),
                        e.Font, Drawing.Brushes.Black, e.Bounds, Drawing.StringFormat.GenericDefault);

                // Create a StringFormat object with the each line of text, and the block 
                // of text centered on the page.
                StringFormat rightAlignFormat = new StringFormat();
                rightAlignFormat.Alignment = StringAlignment.Far;
                rightAlignFormat.LineAlignment = StringAlignment.Near;

                string timeString = String.Format("({0} - {1})", thisWar.StartTime.ToString(),
                    thisWar.EndTime != WorldTime.Present ? thisWar.EndTime.ToString() : "");
                e.Graphics.DrawString(timeString,
                    e.Font, Drawing.Brushes.Black, e.Bounds, rightAlignFormat);



                e.Graphics.DrawString((thisWar.AggressorEnt == thisCiv.Entity ? "Defender: " + thisWar.DefenderEnt.ToString() : "Aggressor: " + thisWar.AggressorEnt.ToString()),
                    e.Font, Drawing.Brushes.Black, new Drawing.PointF(e.Bounds.Width / 8, e.Bounds.Top + e.Bounds.Height / 2), Drawing.StringFormat.GenericDefault);

                e.Graphics.DrawString((thisWar.EndTime == WorldTime.Present
                        ? "Ongoing"
                        : WorldTime.Duration(thisWar.EndTime, thisWar.StartTime)),
                    e.Font, Drawing.Brushes.Black, new Drawing.PointF(e.Bounds.Width, e.Bounds.Top + e.Bounds.Height / 2), rightAlignFormat);

            }
            e.DrawFocusRectangle();
        }
        #endregion

        #region Historical Event Collection Tab

        /// <summary>
        /// When a squad in a battle is selected, we want to display information on that squads role in the battle.
        /// </summary>
        private void lstBattleAttackingSquad_SelectedIndexChanged(object sender, EventArgs e)
        {
            var squad = (Squad)((ListBox)sender).SelectedItem;

            lblBattleAttackingSquadSite.Data = squad.Site;
            lblBattleAttackingSquadRace.Data = squad.Race;
            lblBattleAttackingSquadNumber.Text = squad.Number.ToString();
            lblBattleAttackingSquadEntPop.Data = squad.EntityPopulation;
            lblBattleAttackingSquadDeaths.Text = squad.Deaths.ToString();
        }

        private void lstBattleDefendingSquad_SelectedIndexChanged(object sender, EventArgs e)
        {
            var squad = (Squad)((ListBox)sender).SelectedItem;

            lblBattleDefendingSquadSite.Data = squad.Site;
            lblBattleDefendingSquadRace.Data = squad.Race;
            lblBattleDefendingSquadNumber.Text = squad.Number.ToString();
            lblBattleDefendingSquadEntPop.Data = squad.EntityPopulation;
            lblBattleDefendingSquadDeaths.Text = squad.Deaths.ToString();
        }

        /// <summary>
        /// HFs that fought in a battle are displayed in a color based on gender and listed bold if they died.
        /// </summary>
        private void lstBattleAttackingHF_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                var thisBattle = (EC_Battle)lstHistoricalEventCollection.SelectedItem;
                var drawstring = thisBattle.AttackingHF[e.Index].ToString();

                var mColor = Drawing.Color.Black;
                if (thisBattle.AttackingHF[e.Index].Caste.HasValue && HistoricalFigure.Castes[thisBattle.AttackingHF[e.Index].Caste.Value].ToLower().StartsWith("male"))
                    mColor = Drawing.Color.Blue;
                else if (thisBattle.AttackingHF[e.Index].Caste.HasValue && HistoricalFigure.Castes[thisBattle.AttackingHF[e.Index].Caste.Value].ToLower().StartsWith("female"))
                    mColor = Drawing.Color.Red; 
                  

                if (thisBattle.AttackingDiedHF != null && thisBattle.AttackingDiedHF.Contains(thisBattle.AttackingHF[e.Index]))
                    e.Graphics.DrawString(drawstring, new Drawing.Font(e.Font.FontFamily.ToString(), e.Font.Size, Drawing.FontStyle.Bold), new Drawing.SolidBrush(mColor), e.Bounds);
                else
                    e.Graphics.DrawString(drawstring, e.Font, new Drawing.SolidBrush(mColor), e.Bounds);

            }
            e.DrawFocusRectangle();
        }

        private void lstBattleDefendingHF_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                var thisBattle = (EC_Battle)lstHistoricalEventCollection.SelectedItem;
                var drawstring = thisBattle.DefendingHF[e.Index].ToString();

                var mColor = Drawing.Color.Black;
                if (thisBattle.DefendingHF[e.Index].Caste.HasValue && HistoricalFigure.Castes[thisBattle.DefendingHF[e.Index].Caste.Value].ToLower().StartsWith("male"))
                    mColor = Drawing.Color.Blue;
                else if (thisBattle.DefendingHF[e.Index].Caste.HasValue && HistoricalFigure.Castes[thisBattle.DefendingHF[e.Index].Caste.Value].ToLower().StartsWith("female"))
                    mColor = Drawing.Color.Red;
                
                if (thisBattle.DefendingDiedHF != null && thisBattle.DefendingDiedHF.Contains(thisBattle.DefendingHF[e.Index]))
                    e.Graphics.DrawString(drawstring, new Drawing.Font(e.Font.FontFamily.ToString(), e.Font.Size, Drawing.FontStyle.Bold), new Drawing.SolidBrush(mColor), e.Bounds);
                else
                    e.Graphics.DrawString(drawstring, e.Font, new Drawing.SolidBrush(mColor), e.Bounds);
            }
            e.DrawFocusRectangle();
        }

        /// <summary>
        /// On ANY tab if a listbox contains events selecting that listbox leads here, 
        ///     which dynamically generates controls as needed to write information on the event.
        /// </summary>
        private void EventCollection_EventsListClick(object sender, EventArgs e)
        {
            var listBox = (ListBox)sender;
            if (!(listBox.SelectedItem is HistoricalEvent)) 
                return;

            var evt = (HistoricalEvent)listBox.SelectedItem;
                
            evt.WriteDetailsOnParent(this, listBox.Parent, new Drawing.Point(listBox.Left, listBox.Bottom + 10));
        }

        #endregion 

        #region Historical Figure Tab
        /// <summary>
        /// If a HF is clicked in the HF treeview, display event details underneath the tree view
        /// </summary>
        private void trvHistoricalFigureHFLinks_AfterSelect(object sender, TreeViewEventArgs e)
        {
            
            var TreeView = (TreeView) sender;
            var selectedHFNode = e.Node;
            
            var thisHF = (HistoricalFigure) lstHistoricalFigure.SelectedItem;

            HistoricalEvent evt = null;
            if (selectedHFNode.Parent != null)
            {
                switch (selectedHFNode.Parent.Text.Split(' ')[0])
                {
                    case "Relationships":

                    case "Spouses":
                        if (thisHF.HFLinks != null)
                        {
                            foreach (var hfLinkList in thisHF.HFLinks)
                            {
                                foreach (var hfLink in hfLinkList.Value)
                                {
                                    if (hfLink.HF == selectedHFNode.Tag)
                                    {
                                        evt = hfLink.Event;
                                        break;
                                    }
                                }
                            }
                        }
                        break;
                    case "Kills":
                        if (thisHF.SlayingEvents != null)
                        {
                            foreach (HE_HFDied slaying_event in thisHF.SlayingEvents)
                            {
                                if (slaying_event.HF == selectedHFNode.Tag)
                                {
                                    evt = slaying_event;
                                    break;
                                }
                            }
                        }
                        break;
                    default:
                        break;
                }
            }



            if (evt != null)
            {
                evt.WriteDetailsOnParent(this, TreeView.Parent, new Drawing.Point(TreeView.Left, TreeView.Bottom + 10));
            }
        }
        #endregion

        /// <summary>
        /// Filtering is handled by clicking the filter button under a primary list box or typing into the textbox under that listbox, 
        ///     these methods handle those controls.
        /// </summary>
        #region Filter Methods


        /// <summary>
        /// Depending on which Fitler button we click we want to start filtering against a different type of object.
        /// </summary>
        private void FilterButton_Click(object sender, EventArgs e)
        {

            switch (((Button)sender).Name)
            {
                case "FilterRegion":
                    StartFilter(lstRegion, World.Regions, tabRegion);
                    break;
                case "FilterUndergroundRegion":
                    StartFilter(lstUndergroundRegion, World.UndergroundRegions, tabUndergroundRegion);
                    break;
                case "FilterEntity":
                    StartFilter(lstEntity, World.Entities, tabEntity);
                    break;
                case "FilterEntityPopulation":
                    StartFilter(lstEntityPopulation, World.EntityPopulations, tabEntityPopulation);
                    break;
                case "FilterSite":
                    StartFilter(lstSite, World.Sites, tabSite);
                    break;
                case "FilterWorldConstruction":
                    StartFilter(lstWorldConstruction, World.WorldConstructions, tabWorldConstruction);
                    break;
                case "FilterArtifact":
                    StartFilter(lstArtifact, World.Artifacts, tabArtifact);
                    break;
                case "FilterHistoricalFigure":
                    StartFilter(lstHistoricalFigure, World.HistoricalFigures, tabHistoricalFigure);
                    break;
                case "FilterHistoricalEvent":
                    StartFilter(lstHistoricalEvent, World.HistoricalEvents, tabHistoricalEvent);
                    break;
                case "FilterHistoricalEventCollection":
                    StartFilter(lstHistoricalEventCollection, World.HistoricalEventCollections, tabHistoricalEventCollection);
                    break;
                case "FilterHistoricalEra":
                    StartFilter(lstHistoricalEra, World.HistoricalEras, tabHistoricalEra);
                    break;
                case "FilterCivilization":
                    StartFilter(lstCivilization, World.Civilizations, tabCivilization);
                    break;
                case "FilterGod":
                    StartFilter(lstGod, World.Gods, tabGod);
                    break;
                case "FilterLeader":
                    StartFilter(lstLeader, World.Leaders, tabLeader);
                    break;
                case "FilterParameter":
                    StartFilter(lstParameter, World.Parameters, tabParameter);
                    break;
                case "FilterRace":
                    StartFilter(lstRace, World.Races, tabRace);
                    break;
                case "FilterDynasty":
                    StartFilter(lstDynasty, World.Dynasties, tabDynasty);
                    break;
                case "FilterStructure":
                    StartFilter(lstStructure, World.Structures, tabStructure);
                    break;
            }

        }


        /// <summary>
        /// This calls the filter form which handles the filtering of objects, 
        ///     after returning results we modify the acting filter and then reload the appropriate list with the new filter.
        /// </summary>
        /// <typeparam name="T">The type of object getting filtered</typeparam>
        /// <param name="listBox">The listbox to display into</param>
        /// <param name="list">The list we're filtering against</param>
        /// <param name="tabPage">The tabPage our listbox is on.</param>
        private void StartFilter<T>(ListBox listBox, List<T> list, TabPage tabPage) where T : WorldObject
        {
            var FilterForm = new FilterForm(World, typeof(T));
            var res = FilterForm.ShowDialog();
            if (res == DialogResult.OK)
            {
                World.Filters[typeof(T)] = FilterForm.outFilter;

                FillList(listBox, list, tabPage);
            }
            FilterForm.Dispose();
        }

        /// <summary>
        /// Same as StartFilter<T>() but with filtering dictionaries (usually XML data)
        /// </summary>
        /// <typeparam name="T">The type of object getting filtered</typeparam>
        /// <typeparam name="K">The type of the key of the dictionary getting filtered</typeparam>
        /// <param name="listBox">The listbox to display into</param>
        /// <param name="dict">The dictionary we're filtering against</param>
        /// <param name="tabPage">The tabPage our listbox is on.</param>
        private void StartFilter<T, K>(ListBox listBox, Dictionary<K, T> dict, TabPage tabPage) where T : WorldObject
        {
            var FilterForm = new FilterForm(World, typeof(T));
            var res = FilterForm.ShowDialog();
            if (res == DialogResult.OK)
            {
                World.Filters[typeof(T)] = FilterForm.outFilter;

                FillList(listBox, dict, tabPage);
            }
            FilterForm.Dispose();
        }


        /// <summary>
        /// Depending on which Fitler textbox we change we want to start filtering against a different type of object.
        /// </summary>
        private void TextFilter_Changed(object sender, EventArgs e)
        {
            var txt = ((TextBox)sender).Text;
            switch (((TextBox)sender).Name)
            {
                case "TextFilterRegion":
                    TextFilter(txt, lstRegion, World.Regions, tabRegion);
                    break;
                case "TextFilterUndergroundRegion":
                    TextFilter(txt, lstUndergroundRegion, World.UndergroundRegions, tabUndergroundRegion);
                    break;
                case "TextFilterEntity":
                    TextFilter(txt, lstEntity, World.Entities, tabEntity);
                    break;
                case "TextFilterEntityPopulation":
                    TextFilter(txt, lstEntityPopulation, World.EntityPopulations, tabEntityPopulation);
                    break;
                case "TextFilterSite":
                    TextFilter(txt, lstSite, World.Sites, tabSite);
                    break;
                case "TextFilterWorldConstruction":
                    TextFilter(txt, lstWorldConstruction, World.WorldConstructions, tabWorldConstruction);
                    break;
                case "TextFilterArtifact":
                    TextFilter(txt, lstArtifact, World.Artifacts, tabArtifact);
                    break;
                case "TextFilterHistoricalFigure":
                    TextFilter(txt, lstHistoricalFigure, World.HistoricalFigures, tabHistoricalFigure);
                    break;
                case "TextFilterHistoricalEvent":
                    TextFilter(txt, lstHistoricalEvent, World.HistoricalEvents, tabHistoricalEvent);
                    break;
                case "TextFilterHistoricalEventCollection":
                    TextFilter(txt, lstHistoricalEventCollection, World.HistoricalEventCollections, tabHistoricalEventCollection);
                    break;
                case "TextFilterHistoricalEra":
                    TextFilter(txt, lstHistoricalEra, World.HistoricalEras, tabHistoricalEra);
                    break;
                case "TextFilterCivilization":
                    TextFilter(txt, lstCivilization, World.Civilizations, tabCivilization);
                    break;
                case "TextFilterGod":
                    TextFilter(txt, lstGod, World.Gods, tabGod);
                    break;
                case "TextFilterLeader":
                    TextFilter(txt, lstLeader, World.Leaders, tabLeader);
                    break;
                case "TextFilterParameter":
                    TextFilter(txt, lstParameter, World.Parameters, tabParameter);
                    break;
                case "TextFilterRace":
                    TextFilter(txt, lstRace, World.Races, tabRace);
                    break;
                case "TextFilterDynasty":
                    TextFilter(txt, lstDynasty, World.Dynasties, tabDynasty);
                    break;
                case "TextFilterStructure":
                    TextFilter(txt, lstStructure, World.Structures, tabStructure);
                    break;

            }
        }

        /// <summary>
        /// Creates a temporary filter from the text typed into the textbox.
        /// Then we reload from that fitler, and remove the temporary filter.
        /// </summary>
        /// <typeparam name="T">The type of object getting filtered</typeparam>
        /// <param name="txt">The text to filter on</param>
        /// <param name="listBox">The listbox to display into</param>
        /// <param name="list">The list we're filtering against</param>
        /// <param name="tabPage">The tabPage our listbox is on.</param>
        private void TextFilter<T>(string txt, ListBox listBox, List<T> list, TabPage tabPage) where T : WorldObject
        {
            var tempFilter = "DispNameLower.Contains(\"" + txt.ToLower() + "\")";
            World.Filters[typeof(T)].Where.Add(tempFilter);

            FillList(listBox, list, tabPage);

            World.Filters[typeof(T)].Where.Remove(tempFilter);
        }

        /// <summary>
        /// Same as TextFilter<T>() but with a dictionary
        /// </summary>
        /// <typeparam name="T">The type of object getting filtered</typeparam>
        /// <typeparam name="K">The type of the key of the dictionary getting filtered</typeparam>
        /// <param name="txt">The text to filter on</param>
        /// <param name="listBox">The listbox to display into</param>
        /// <param name="dict">The dictionary we're filtering against</param>
        /// <param name="tabPage">The tabPage our listbox is on.</param>
        private void TextFilter<T, K>(string txt, ListBox listBox, Dictionary<K, T> dict, TabPage tabPage) where T: WorldObject
        {

            var tempFilter = "DispNameLower.Contains(\"" + txt.ToLower() + "\")";
            World.Filters[typeof(T)].Where.Add(tempFilter);

            FillList(listBox, dict, tabPage);

            World.Filters[typeof(T)].Where.Remove(tempFilter);

        }
        
        #endregion


        /// <summary>
        /// Handles the backward navigation through objects
        /// </summary>
        #region Navigation Methods

        /// <summary>
        /// When an object is selected it's added to the navigation, we only display the back button if we have a previous item to go back to now.
        /// </summary>
        /// <param name="item"></param>
        internal void AddToNav(WorldObject item)
        {
            if (NavBackObjects.Count > 0 && NavBackObjects.Peek() == item)
            {
                return;
            }
            if (!navigatingBack)
            {
                NavForwardObjects.Clear();
                ForwardtoolStripMenuItem.Enabled = false;
            }
            navigatingBack = false;
            NavBackObjects.Push(item);
            BacktoolStripMenuItem.Enabled = NavBackObjects.Count >= 2;
        }

        /// <summary>
        /// When a world is Closed, the Nav must be cleared
        /// </summary>
        /// <param name="item"></param>
        internal void ClearNav()
        {
            NavBackObjects.Clear();
            NavForwardObjects.Clear();

            BacktoolStripMenuItem.Enabled = false;
            ForwardtoolStripMenuItem.Enabled = false;
        }

        /// <summary>
        /// When we go backwards we first pop off the first item (the one we're on now) then pop the previous item to travel back to it.
        /// </summary>
        private void BacktoolStripMenuItem_Click(object sender, EventArgs e)
        {
            //Remove Top Object
            NavForwardObjects.Push(NavBackObjects.Pop());

            var selObject = NavBackObjects.Pop();

            navigatingBack = true;

            selObject.Select(this);

            BacktoolStripMenuItem.Enabled = NavBackObjects.Count >= 2;
            ForwardtoolStripMenuItem.Enabled = NavForwardObjects.Count >= 1;
        }

        /// <summary>
        /// When we go forwards we first pop off the first item in the Stack then pop the previous item to travel back to it.
        /// </summary>
        private void ForwardtoolStripMenuItem_Click(object sender, EventArgs e)
        {
            //Remove Top Object
            var selObject = NavForwardObjects.Pop();
            NavBackObjects.Push(selObject);
            selObject.Select(this);

            BacktoolStripMenuItem.Enabled = NavBackObjects.Count >= 1;
            ForwardtoolStripMenuItem.Enabled = NavForwardObjects.Count >= 1;
        }
        
        #endregion






    }
}
