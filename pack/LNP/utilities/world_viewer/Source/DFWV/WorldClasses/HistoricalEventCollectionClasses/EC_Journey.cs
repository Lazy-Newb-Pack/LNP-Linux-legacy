using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalEventClasses;

namespace DFWV.WorldClasses.HistoricalEventCollectionClasses
{
    class EC_Journey : HistoricalEventCollection
    {
        private int Ordinal { get; set; }

        override public Point Location 
        { 
            get
            {
                HE_HFTravel evt;
                var hfTravel = Event[0] as HE_HFTravel;
                if (hfTravel != null)
                {
                    evt = hfTravel;
                    if (evt.Site != null)
                        return evt.Site.Location;
                }
                if (!(Event.Last() is HE_HFTravel)) return 
                    Point.Empty;
                evt = (HE_HFTravel) Event.Last();
                if (evt.Return && evt.Site != null)
                    return evt.Site.Location;
                return Point.Empty;
            } 
        }


        public EC_Journey(XDocument xdoc, World world)
            : base(xdoc, world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                int valI;
                Int32.TryParse(val, out valI);

                switch (element.Name.LocalName)
                {
                    case "id":
                    case "start_year":
                    case "start_seconds72":
                    case "end_year":
                    case "end_seconds72":
                    case "event":
                    case "type":
                        break;
                    case "ordinal":
                        Ordinal = valI;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        break;
                }
            }

        }

        public override void Select(MainForm frm)
        {
            base.Select(frm);

            foreach (var tabpage in frm.MainTabEventCollectionTypes.TabPages.Cast<TabPage>().Where(tabpage => tabpage != frm.tabEventCollectionJourney))
            {
                frm.MainTabEventCollectionTypes.TabPages.Remove(tabpage);
            }
            if (!frm.MainTabEventCollectionTypes.TabPages.Contains(frm.tabEventCollectionJourney))
                frm.MainTabEventCollectionTypes.TabPages.Add(frm.tabEventCollectionJourney);

            if (StartTime != null || EndTime != null)
            {
                frm.lblJourneyTime.Text = string.Format("{0} - {1}", StartTime, EndTime);
                frm.lblJourneyDuration.Text = WorldTime.Duration(EndTime, StartTime);
            }
            else
            {
                frm.lblJourneyTime.Text = "";
                frm.lblJourneyDuration.Text = "";
            }
            frm.lblJourneyOrdinal.Text = Ordinal.ToString();

            frm.lstJourneyEvents.Items.Clear();
            if (Event != null)
                frm.lstJourneyEvents.Items.AddRange(Event.ToArray());

            frm.grpJourneyEvents.Visible = frm.lstJourneyEvents.Items.Count > 0;

            if (frm.lstJourneyEvents.Items.Count > 0)
                frm.lstJourneyEvents.SelectedIndex = 0;

            SelectTab(frm);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, Ordinal };


            Database.ExportWorldItem(table, vals);

        }

    }
}
