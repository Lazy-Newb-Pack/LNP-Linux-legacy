using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using System.ComponentModel;
using DFWV.Properties;
using DFWV.WorldClasses;
using System.Drawing;
using System.Globalization;
using System.IO;
using System.Collections;
using SevenZip;


//TODO: Group by multiple items
//TODO: Better display grouping

//TODO: Properly Export Insurrection started/ended and event collections

//TODO: Add notes on event types currently On Change HF Body State
//TODO: Handle "Died Event" at site level
//TODO: Entity SiteTakenOver event not used

//TODO: HE_ArtifactCreated - Unit
//TODO: HF - CreatedArtifacts
//TODO: Site - NewLeaderEVents

//TODO: Fix Leader Race in filter conditions

//TODO: Check if new IndexOf static Lists items export properly

namespace DFWV
{
    public enum LogType
    {
        Status,
        Warning,
        Error
    }

    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        /// 
        static public MainForm mainForm;
        static public MapForm mapForm;
        static public TimelineForm timelineForm;
        static public StatsForm statsForm;
        //static public VisualizationForm visualizationForm;

        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            mainForm = new MainForm();
            
            Application.Run(mainForm);

        }

        /// <summary>
        /// This function is called at the end of most WorldObject's Select() call.  
        /// It 
        ///  * Selects the appropriate tab, 
        ///  * Adds the item to the listbox if it isn't there (in the case of long worlds the events listbox is limited by default for example)
        ///  * Selects that item
        ///  * Adds that item to the navigation system, used to scroll backward through items you've viewed
        /// </summary>
        public static void MakeSelected(TabPage tabPage, ListBox listBox, WorldObject item)
        {
            mainForm.MainTab.SelectedTab = tabPage;
            if (!listBox.Items.Contains(item))
                listBox.Items.Add(item);
            listBox.SelectedItem = item;
            mainForm.AddToNav(item);
        }


        /// <summary>
        /// This region is used to return a series of colors which are visually distinct from 
        /// one another for use in assigning colors to civilizations for mapping purposes
        /// </summary>
        #region DistinctColors
        private static int curDistinctColor;
        public static List<string> ColorNames = new List<string>
        {"#00FF00", "#0000FF", "#FF0000", "#01FFFE", "#FFA6FE", "#FFDB66", "#006401", "#010067", 
                    "#95003A", "#007DB5", "#FF00F6", "#FFEEE8", "#774D00", "#90FB92", "#0076FF", "#D5FF00", 
                    "#FF937E", "#6A826C", "#FF029D", "#FE8900", "#7A4782", "#7E2DD2", "#85A900", "#FF0056", 
                    "#A42400", "#00AE7E", "#683D3B", "#BDC6FF", "#263400", "#BDD393", "#00B917", "#9E008E", 
                    "#001544", "#C28C9F", "#FF74A3", "#01D0FF", "#004754", "#E56FFE", "#788231", "#0E4CA1", 
                    "#91D0CB", "#BE9970", "#968AE8", "#BB8800", "#43002C", "#DEFF74", "#00FFC6", "#FFE502", 
                    "#620E00", "#008F9C", "#98FF52", "#7544B1", "#B500FF", "#00FF78", "#FF6E41", "#005F39", 
                    "#6B6882", "#5FAD4E", "#A75740", "#A5FFD2", "#FFB167", "#009BFF", "#E85EBE"};
        public static Color NextDistinctColor()
        {
            Color thisColor;

            if (curDistinctColor < ColorNames.Count)
            {
                var rgb = Int32.Parse(ColorNames[curDistinctColor].Replace("#", ""), NumberStyles.HexNumber);
                thisColor = Color.FromArgb(255,Color.FromArgb(rgb));
                curDistinctColor++;
            }
            else
            {
                return Color.White;

            }

            return thisColor;
        }

        #endregion

        /// <summary>
        /// Returns a string with all the special unicode characters replaced with corresponding characters.
        /// Some weird characters come up when using popular mods, and they are replaced as well.
        /// If a new weird character is found a note is thrown up about it.  
        /// These strings are cleaned so that the XML and the Site/History files can be compared, the latter uses names with special characters.
        /// In most cases even if a new character is found a follow up method which does a fuzzier match will still make the connection, so just a single character warning is fine.
        /// </summary>
        internal static string CleanString(string str)
        {
            str = str.Replace('æ', 'a');
            str = str.Replace('â', 'a');
            str = str.Replace('á', 'a');
            str = str.Replace('å', 'a');
            str = str.Replace('à', 'a');
            str = str.Replace('ä', 'a');
            str = str.Replace('à', 'a');
            str = str.Replace('ê', 'e');
            str = str.Replace('ë', 'e');
            str = str.Replace('è', 'e');
            str = str.Replace('é', 'e');
            str = str.Replace('í', 'i');
            str = str.Replace('ì', 'i');
            str = str.Replace('î', 'i');
            str = str.Replace('ï', 'i');
            str = str.Replace('ñ', 'n');
            str = str.Replace('ô', 'o');
            str = str.Replace('ò', 'o');
            str = str.Replace('ö', 'o');
            str = str.Replace('ó', 'o');
            str = str.Replace('ú', 'u');
            str = str.Replace('û', 'u');
            str = str.Replace('ù', 'u');
            str = str.Replace('ü', 'u');
            str = str.Replace('ÿ', 'y');

            //Modded games only it appears
            str = str.Replace('ω', 'ê');
            str = str.Replace('ε', 'î');
            str = str.Replace('⌠', 'ô');
            str = str.Replace('ß', 'á');
            str = str.Replace('φ', 'í');
            str = str.Replace('≤', 'ó');
            str = str.Replace('₧', (char)158);
            str = str.Replace('²', 'ı');
            str = str.Replace('∩', 'ï');
            str = str.Replace('┐', '¿');
            str = str.Replace('╜', '½');

            
            foreach (var c in str.Where(c => !((c >= 'a' && c <= 'z') ||
                                               (c >= 'A' && c <= 'Z') ||
                                               (c == '-') ||
                                               (c == ' ') || c == 'ê' || c == 'î' || c == 'ô' || c == 'á' || c == 'í' || c == 'ó' || c == (char)158 || c == 'ı' ||
                                               c == 'ï' || c == '¿' || c == '½')))
            {
                Log(LogType.Warning, "Unexpected character - " + c);
            }
            return str;
        }

        /// <summary>
        /// Handles all logging from world generation
        /// </summary>
        private static Object thisLock = new Object();

        public static void Log(LogType type, string txt)
        {
            lock (thisLock)
            {
                var curText = (string) mainForm.StatusBox.Invoke(new Func<string>(() => mainForm.StatusBox.Text));

                switch (type)
                {
                    case LogType.Status:
                        if (txt.EndsWith("..."))
                            mainForm.InvokeEx(x => x.StatusBox.AppendText(txt));
                        else if (txt == " Done") //ensure that sections that are finished are put in the right place
                        {

                            if (curText.EndsWith("\n"))
                                //Another section finished while this section was in progress
                            {

                                var elipsisPos =
                                    (int)
                                        mainForm.StatusBox.Invoke(
                                            new Func<int>(() => mainForm.StatusBox.Text.LastIndexOf("...",
                                                StringComparison.Ordinal)));

                                mainForm.InvokeEx(x => x.StatusBox.Text = x.StatusBox.Text.Insert(elipsisPos + 3, txt));
                            }
                            else
                                mainForm.InvokeEx(x => x.StatusBox.AppendText(txt + Environment.NewLine));
                        }
                        else
                        {
                            if (curText.EndsWith("\n") ||
                                curText == string.Empty)
                                mainForm.InvokeEx(x => x.StatusBox.AppendText(txt + Environment.NewLine));
                            else //Section finished while another section is in progress
                                mainForm.InvokeEx(
                                    x => x.StatusBox.AppendText(Environment.NewLine + txt + Environment.NewLine));
                        }
                        Console.WriteLine(@"Status: {0}", txt);
                        break;
                    case LogType.Warning:
                        mainForm.InvokeEx(x =>
                        {
                            x.IssuesBox.Select(x.IssuesBox.TextLength, 0);
                            x.IssuesBox.SelectionColor = Color.Orange;
                            x.IssuesBox.AppendText(txt + Environment.NewLine);
                        });

                        Console.WriteLine(@"Warning: {0}", txt);
                        break;
                    case LogType.Error:
                        mainForm.InvokeEx(x =>
                        {
                            x.IssuesBox.Select(x.IssuesBox.TextLength, 0);
                            x.IssuesBox.SelectionColor = Color.Red;
                            x.IssuesBox.AppendText(txt + Environment.NewLine);
                        });
                        Console.WriteLine(@"ERROR: {0}", txt);
                        break;
                }
            }
        }

        /// <summary>
        /// Handles the access to the default path, which makes it more convenient to load details from worlds.
        /// </summary>
        public static string GetDefaultPath()
        {
            var workingFolder = Application.StartupPath;
            var defaultfolder = Settings.Default.DefaultFolder;
            defaultfolder = defaultfolder.Trim('"');
            defaultfolder = defaultfolder.TrimEnd('\\');

            if (defaultfolder.StartsWith(@"..\"))
            {
                while (defaultfolder.StartsWith(@"..\"))
                {
                    workingFolder = Directory.GetParent(workingFolder).FullName;
                    defaultfolder = defaultfolder.Length > 3 ? defaultfolder.Substring(3) : "";
                }
            }

            if (Directory.Exists(defaultfolder))
            {
                workingFolder = defaultfolder;
            }
            else if (Directory.Exists(workingFolder + "\\" + defaultfolder))
            {
                workingFolder = workingFolder + "\\" + defaultfolder;
            }

            return workingFolder;
        }

        /// <summary>
        /// Returns all controls within a control of a specific type.
        /// This is used to pull back all listboxes and link their events, or all linklabels and link their events.
        /// </summary>
        public static IEnumerable<T> GetControlsOfType<T>(Control ctrMain) where T : class
        {
            foreach (Control c in ctrMain.Controls)
            {

                // If a match is found then yield this item back directly    
                if (c is T) yield return (c as T);

                // If the control hosts other controls then recursively call this function again.
                if (c.Controls.Count <= 0) continue;
                foreach (var t in GetControlsOfType<T>(c))
                    yield return t;
            }
        }

        /// <summary>
        /// 
        /// </summary>
        public static void ExtractArchive(string path)
        {
            Console.WriteLine(Directory.GetCurrentDirectory());
            
            if (IntPtr.Size == 8)
                SevenZipExtractor.SetLibraryPath(Path.Combine(Directory.GetCurrentDirectory(), @"7z64.dll"));
            else
                SevenZipExtractor.SetLibraryPath(Path.Combine(Directory.GetCurrentDirectory(), @"7z.dll"));

            var directory = Path.GetDirectoryName(path);
            var filename = Path.GetFileNameWithoutExtension(path);

            var newDirectory = Path.Combine(directory, filename);
            if (Directory.Exists(newDirectory))
                Directory.Delete(newDirectory,true);
            Directory.CreateDirectory(newDirectory);

            using (var tmp = new SevenZipExtractor(path))
            {
                for (int i = 0; i < tmp.ArchiveFileData.Count; i++)
                    tmp.ExtractFiles(newDirectory, tmp.ArchiveFileData[i].Index);
            }
        }


    }


    /// <summary>
    /// This code calls an invoke against an object if it's needed to complete some action, otherwise it just calls that action.
    ///    This is used to update the UI from other threads.
    /// </summary>
    public static class ISynchronizeInvokeExtensions
    {
      public static void InvokeEx<T>(this T @this, Action<T> action) where T : ISynchronizeInvoke
      {
        if (@this.InvokeRequired)
        {
          @this.Invoke(action, new object[] { @this });
        }
        else
        {
          action(@this);
        }
      }
    }

    /// <summary>
    /// These methods are used with the World Summary TreeView (on the World tab on the main form) to allow it to properly sort and insert data as required.
    /// </summary>
    #region WorldSummaryTree Helper Functions
    public static class SOExtension
    {
        public static IEnumerable<TreeNode> FlattenTree(this TreeView tv)
        {
            return FlattenTree(tv.Nodes);
        }

        public static IEnumerable<TreeNode> FlattenTree(this TreeNodeCollection coll)
        {
            return coll.Cast<TreeNode>()
                        .Concat(coll.Cast<TreeNode>()
                                    .SelectMany(x => FlattenTree(x.Nodes)));
        }
    }

    // Create a node sorter that implements the IComparer interface. 
    public class WorldSummaryNodeSorter : IComparer
    {
        // Compare the length of the strings, or the strings 
        // themselves, if they are the same length. 
        public int Compare(object x, object y)
        {
            var tx = x as TreeNode;
            var ty = y as TreeNode;

            if (ty != null && (tx != null && (!tx.Text.Contains(":") || tx.Nodes.Count > 0 || ty.Nodes.Count > 0)))
                return -1;
            if (!ty.Text.Contains(":"))
                return 1;
            return Convert.ToInt32(ty.Text.Split(':')[1]) - Convert.ToInt32(tx.Text.Split(':')[1]);
        }
    }

#endregion
    
}
