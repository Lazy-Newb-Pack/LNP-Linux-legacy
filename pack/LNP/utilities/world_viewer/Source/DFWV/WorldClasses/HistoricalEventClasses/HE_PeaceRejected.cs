using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_PeaceRejected : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Point.Empty; } }


        public HE_PeaceRejected(XDocument xdoc, World world)
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
                    case "year":
                    case "seconds72":
                    case "type":
                        break;
                    case "site_id":
                        if (valI != -1)
                            SiteID = valI;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        internal override void Link()
        {
            base.Link();
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (EventCollection == null) return timestring;
            var war = (EC_War)EventCollection;
            return string.Format("{0} {1} rejected an offer of peace from {2}.",
                timestring, war.AggressorEnt, war.DefenderEnt);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (EventCollection == null) return timelinestring;
            var war = (EC_War)EventCollection;
            return string.Format("{0} {1} rejected peace from {2}.",
                timelinestring, war.AggressorEnt,
                war.DefenderEnt);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;



            var vals = new List<object> { ID, SiteID };


            Database.ExportWorldItem(table, vals);

        }

    }
}