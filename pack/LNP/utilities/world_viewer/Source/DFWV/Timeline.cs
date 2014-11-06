using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using DFWV.WorldClasses;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using System.Resources;

namespace DFWV
{
    public partial class TimelineForm : Form
    {
        readonly World World;
        int lastEvent;
        readonly List<XMLObject> WorldEvents = new List<XMLObject>();

        private readonly List<string> CriticalEventTypes = new List<string>
        { "created site", "entity created", "peace accepted", "created world construction", 
            "artifact created", "reclaim site", "destroyed site", "new site leader", "site taken over", "site abandoned"};

        private readonly List<string> MajorEventTypes = new List<string>
        {"hf died", "hf simple battle event", "created structure", "field battle", "attacked site", 
            "entity relocate", "plundered site", "peace rejected", "razed structure", "artifact lost", "diplomat lost", "hf revived", "agreement rejected", "first contact", 
            "agreement made", "first contact failed"};

        private readonly List<string> MinorEventTypes = new List<string>
        { "create entity position", "merchant", "item stolen", "masterpiece lost", "change hf state", 
            "add hf entity link", "add hf hf link", "add hf site link",  "change hf job", "hf travel", "hf new pet", 
            "hf wounded", "creature devoured", "hf profaned structure", "hf does interaction", "hf abducted", "changed creature type", 
            "assume identity", "remove hf entity link", "entity primary criminals", "hf reunion", "body abused", "hf gains secret goal", "hf learns secret", 
            "remove hf site link","artifact possessed", "hf confronted","artifact stored", 
            "entity law", "masterpiece item", "change hf body state",
            "masterpiece arch constructed", "masterpiece food", "masterpiece engraving", "masterpiece item improvement", "masterpiece dye", 
            "masterpiece arch design"};

/*
        public List<string> KnownEventTypes = new List<string>
        { "create entity position", "merchant", "item stolen", "masterpiece lost", "hf simple battle event", "change hf state", 
            "add hf entity link", "created site", "add hf hf link", "entity created", "add hf site link", "created structure", "change hf job", "hf travel", "hf new pet", "field battle", 
            "peace accepted", "hf died", "hf wounded", "creature devoured", "attacked site", "hf profaned structure", "hf does interaction", "hf abducted", "changed creature type", 
            "entity relocate", "assume identity", "remove hf entity link", "entity primary criminals", "hf reunion", "plundered site", "body abused", "hf gains secret goal", "hf learns secret", 
            "created world construction", "remove hf site link", "artifact created", "artifact possessed", "hf confronted", "peace rejected", "reclaim site", "razed structure", "artifact stored", 
            "entity law", "masterpiece item", "artifact lost", "diplomat lost", "hf revived", "agreement rejected", "first contact", "destroyed site", "change hf body state", "new site leader", 
            "site taken over", "site abandoned", "masterpiece arch constructed", "masterpiece food", "masterpiece engraving", "masterpiece item improvement", "agreement made", "masterpiece dye", 
            "first contact failed", "masterpiece arch design" };
*/

/*
        public List<string> UnknownEventTypes = new List<string>
        {"agreement void", "site tribute forced", "hf destroyed site", "site died", "replaced structure", "hf razed structure", 
            "hf reach summit", "remove hf hf link", "agreement concluded", "artifact hidden", "artifact found", "artifact recovered", "artifact dropped", "entity incorporated", "impersonate hf"};
*/

        private readonly List<string> CriticalEventCollectionTypes = new List<string> { "battle", "war", "site conquered" };

        private readonly List<string> MinorEventCollectionTypes = new List<string> { "abduction", "beast attack", "duel", "journey", "theft" };

        private Image stretchedMap;
        private Point PingLocation;
        private readonly Image marker;
        private SizeF siteSize;

        internal TimelineForm(World world)
        {
            InitializeComponent();
            World = world;
            var resources = new ResourceManager("DFWV.Properties.Resources", typeof(TimelineForm).Assembly);
            marker = resources.GetObject("Marker") as Bitmap;

            var sizeString = World.Parameters.First(x => x.Name == "DIM").Value;
            var sizeX = Convert.ToInt32(sizeString.Split(':')[0]);
            var sizeY = Convert.ToInt32(sizeString.Split(':')[1]);
            var mapSize = new Size(sizeX, sizeY);


            stretchedMap = new Bitmap(picMap.Width, picMap.Height);
            var g = Graphics.FromImage(stretchedMap);
            g.DrawImage(Image.FromFile(World.Maps["Main"]), picMap.DisplayRectangle);
            g.Dispose();

            picMap.Image = stretchedMap;
            
            siteSize = new SizeF(picMap.Width / (float)mapSize.Width,
                                picMap.Height / (float)mapSize.Height);
        }

        private void Start_Click(object sender, EventArgs e)
        {
            switch (Start.Text)
            {
                case "Start":
                    Restart.PerformClick();
                    break;
                case "Continue":
                    EventTimer.Enabled = true;
                    Start.Text = @"Pause";
                    break;
                default:
                    EventTimer.Enabled = false;
                    Start.Text = @"Continue";
                    break;
            }
        }

        private void SortEvents()
        {
            WorldEvents.Clear();

            foreach (var he in World.HistoricalEvents.Values)
            {
                if (he.EventCollection != null)
                { 
                    if (he == he.EventCollection.Event.First())
                        WorldEvents.Add(he.EventCollection);
                    WorldEvents.Add(he);
                    if (he == he.EventCollection.Event.Last())
                        WorldEvents.Add(he.EventCollection);
                }
                else
                    WorldEvents.Add(he);
            }

        }

        private void EventTimer_Tick(object sender, EventArgs e)
        {
            var nextItem = GetNextItem();

            if (nextItem != null)
            {

                lstEvents.Items.Add(nextItem);
                ModifyMap(nextItem);
                lstEvents.SelectedIndex = lstEvents.Items.Count - 1;
            }
            else
            {
                EventTimer.Enabled = false;
                Start.Text = @"Start";
            }
        }

        private void ModifyMap(XMLObject nextItem)
        {
            if (nextItem is HE_CreatedSite || nextItem is HE_ReclaimSite || 
                nextItem is HE_NewSiteLeader || nextItem is HE_SiteTakenOver || 
                nextItem is HE_SiteAbandoned || nextItem is HE_DestroyedSite)
            {
                var evt = (HistoricalEvent)nextItem;
                
                Color penCol;
                if (nextItem is HE_CreatedSite)
                    penCol = (nextItem as HE_CreatedSite).Civ != null && (nextItem as HE_CreatedSite).Civ.Civilization != null ?
                        (nextItem as HE_CreatedSite).Civ.Civilization.Color :
                        Color.White;
                else if (nextItem is HE_ReclaimSite)
                    penCol = (nextItem as HE_ReclaimSite).Civ.Civilization.Color;
                else if (nextItem is HE_NewSiteLeader)
                    penCol = (nextItem as HE_NewSiteLeader).AttackerCiv.Civilization.Color;
                else if (nextItem is HE_SiteTakenOver)
                    penCol = (nextItem as HE_SiteTakenOver).AttackerCiv.Civilization.Color;
                else if (nextItem is HE_SiteAbandoned)
                    penCol = Color.White;
                else // if (nextItem is HE_DestroyedSite)
                    penCol = Color.White;

                
                var g = Graphics.FromImage(stretchedMap);
                var loc = new Point();
                var markerSize = new SizeF(7.0f,7.0f);
                if (siteSize.Width > 7)
                    markerSize.Width = (int)siteSize.Width;
                if (siteSize.Height > 7)
                    markerSize.Height = (int)siteSize.Height;

                loc.X = (int)(evt.Location.X * siteSize.Width + siteSize.Width / 2 - markerSize.Width / 2);
                loc.Y = (int)(evt.Location.Y * siteSize.Height + siteSize.Height / 2 - markerSize.Height / 2);

                using (var p = new Pen(penCol))
                {
                    p.Width = 2;
                    g.DrawEllipse(p, loc.X, loc.Y, markerSize.Width, markerSize.Height);
                }
                g.Dispose();
            }
            else
            {
                var worldConstruction = nextItem as HE_CreatedWorldConstruction;
                if (worldConstruction == null) 
                    return;
                var evt = worldConstruction;
                var g = Graphics.FromImage(stretchedMap);


                var from = new Point();
                var to = new Point();

                @from.X = (int)(evt.Site1.Location.X * siteSize.Width + siteSize.Width / 2);
                @from.Y = (int)(evt.Site1.Location.Y * siteSize.Height + siteSize.Height / 2);

                to.X = (int)(evt.Site2.Location.X * siteSize.Width + siteSize.Width / 2);
                to.Y = (int)(evt.Site2.Location.Y * siteSize.Height + siteSize.Height / 2);

                var lineColor = Color.White;
                if (evt.Civ != null && evt.Civ.Civilization != null)
                    lineColor = evt.Civ.Civilization.Color;

                using (var p = new Pen(lineColor))
                {
                    p.Width = 2;
                    g.DrawLine(p, @from, to);
                }


                g.Dispose();
            }
        }

        private XMLObject GetNextItem()
        {


            do
                lastEvent++;
            while (SkipEvent());


            return lastEvent == WorldEvents.Count ? null : WorldEvents[lastEvent];
        }

        private bool SkipEvent()
        {
            if (lastEvent >= WorldEvents.Count || !(WorldEvents[lastEvent] is HE_CreatedWorldConstruction))
                return lastEvent < WorldEvents.Count &&
                       !(
                           WorldEvents[lastEvent] is HistoricalEventCollection &&
                           (
                               chkEventCollectionCritical.Checked &&
                               CriticalEventCollectionTypes.Contains(
                                   HistoricalEventCollection.Types[
                                       ((HistoricalEventCollection) WorldEvents[lastEvent]).Type])
                               ||
                               chkEventCollectionMinor.Checked &&
                               MinorEventCollectionTypes.Contains(
                                   HistoricalEventCollection.Types[
                                       ((HistoricalEventCollection) WorldEvents[lastEvent]).Type])
                               )
                           ||
                           WorldEvents[lastEvent] is HistoricalEvent &&
                           (
                               chkEventCritical.Checked &&
                               CriticalEventTypes.Contains(
                                   HistoricalEvent.Types[((HistoricalEvent) WorldEvents[lastEvent]).Type])
                               ||
                               chkEventMajor.Checked &&
                               MajorEventTypes.Contains(
                                   HistoricalEvent.Types[((HistoricalEvent) WorldEvents[lastEvent]).Type])
                               ||
                               chkEventMinor.Checked &&
                               MinorEventTypes.Contains(
                                   HistoricalEvent.Types[((HistoricalEvent) WorldEvents[lastEvent]).Type])
                               )
                           );

            var evt = (HE_CreatedWorldConstruction)WorldEvents[lastEvent];

            return !((chkEventCritical.Checked && evt.MasterWC == null) ||
                     (chkEventMajor.Checked && evt.MasterWC != null));
        }

        private void lstEvents_DrawItem(object sender, DrawItemEventArgs e)
        {
            e.DrawBackground();

            if (e.Index != -1)
            {
                string drawstring;
                Color mColor;

                var evt = lstEvents.Items[e.Index] as HistoricalEvent;
                if (evt != null)
                {
                    var loc = evt.Location;
                    if (loc == Point.Empty)
                        drawstring = evt.ToTimelineString();
                    else
                        drawstring = evt.ToTimelineString() + " - (" + loc.X + "," + loc.Y + ")";
                    mColor = Color.Blue;
                }
                else
                {
                    var hec = (HistoricalEventCollection)lstEvents.Items[e.Index];

                    var isHECending = lstEvents.Items.IndexOf(hec) != e.Index;

                    var loc = hec.Location;
                    if (loc == Point.Empty)
                        drawstring = hec.ToTimelineString() + (isHECending ? " Ended " : "");
                    else
                        drawstring = hec.ToTimelineString() + (isHECending ? " Ended " : "") + " - (" + loc.X + "," + loc.Y + ")";


                    mColor = Color.Red;
                }
                
                e.Graphics.DrawString(drawstring, new Font(e.Font.FontFamily.ToString(), e.Font.Size, FontStyle.Regular), new SolidBrush(mColor), e.Bounds);

            }
            e.DrawFocusRectangle();
        }

        private void Restart_Click(object sender, EventArgs e)
        {
            lstEvents.Items.Clear();
            SortEvents();
            lastEvent = -1;

            stretchedMap = new Bitmap(picMap.Width, picMap.Height);
            var g = Graphics.FromImage(stretchedMap);
            g.DrawImage(Image.FromFile(World.Maps["Main"]), picMap.DisplayRectangle);
            g.Dispose(); 

            EventTimer.Enabled = true;
            Start.Text = @"Pause";
        }

        private void lstEvents_DoubleClick(object sender, EventArgs e)
        {
            var listBox = (ListBox)sender;
            var selectedItem = (WorldObject)listBox.SelectedItem;
            if (selectedItem != null)
                selectedItem.Select(Program.mainForm);
        }

        private void Clear_Click(object sender, EventArgs e)
        {
            lstEvents.Items.Clear();
        }

        private void ShowMap_Click(object sender, EventArgs e)
        {
            if (ShowMap.Text == @"Show Map")
                DisplayMap();
            else
                HideMap();
        }

        private void HideMap()
        {
            ShowMap.Text = @"Show Map";
            Height = lstEvents.Bottom + 44;
        }

        private void DisplayMap()
        {
            ShowMap.Text = @"Hide Map";
            picMap.Image = stretchedMap;
            Height = picMap.Bottom + 50;
        }

        private void lstEvents_SelectedIndexChanged(object sender, EventArgs e)
        {
            var lstbox = (ListBox)sender;
            var evt = lstbox.SelectedItem as HistoricalEvent;
            if (evt != null)
                Ping(evt);
            else
                Ping((HistoricalEventCollection)lstbox.SelectedItem);
        }

        private void Ping(WorldObject evt)
        {
            PingLocation = evt.Location == Point.Empty ? Point.Empty : evt.Location;
            picMap.Refresh();
        }

        private void picMap_Paint(object sender, PaintEventArgs e)
        {

            e.Graphics.DrawImage(stretchedMap, new Point(0,0));
            if (PingLocation == Point.Empty)
                return;
            var loc = new Point
            {
                X = (int) (PingLocation.X*siteSize.Width + siteSize.Width/2 - marker.Width / 2f),
                Y = (int) (PingLocation.Y*siteSize.Height + siteSize.Height/2 - marker.Height / 2f)
            };

            e.Graphics.DrawImage(marker, loc);
        }

        private void trackSpeed_Scroll(object sender, EventArgs e)
        {
            var Values = new List<int> {10, 50, 100, 200, 500, 1000, 1500, 2000, 3000, 4000};
            EventTimer.Interval = Values[10 - trackSpeed.Value];
        }


    }
}
