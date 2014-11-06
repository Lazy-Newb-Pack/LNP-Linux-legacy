using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_ItemStolen : HistoricalEvent
    {
        private int? AttackerCivID { get; set; }
        public Entity AttackerCiv { private get; set; }
        private int? DefenderCivID { get; set; }
        public Entity DefenderCiv { private get; set; }
        private int? SiteID { get; set; }
        public Site Site { private get; set; }
        public Point Coords { private get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Coords; } }


        public HE_ItemStolen(XDocument xdoc, World world)
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
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        internal override void Process()
        {
            base.Process();
            if (AttackerCiv != null)
            {
                if (AttackerCiv.Events == null)
                    AttackerCiv.Events = new List<HistoricalEvent>();
                AttackerCiv.Events.Add(this);
            }


            if (DefenderCiv == null) return;
            if (AttackerCiv.Events == null)
                AttackerCiv.Events = new List<HistoricalEvent>();
            AttackerCiv.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Victim:", DefenderCiv);
            EventLabel(frm, parent, ref location, "Theif:", AttackerCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} was stolen from {2} in {3} by the {4} {5} and brought to {6}",
                    timestring, "UNKNOWN", "UNKNOWN", 
                    Site == null ? "UNKNOWN" : Site.ToString(), "UNKNOWN", "UNKNOWN", "UNKNOWN");

        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();
            
            if (Site == null)
                return string.Format("{0} Item stolen.",
                        timelinestring);
            return string.Format("{0} Item stolen from {1}",
                timelinestring, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, AttackerCivID, DefenderCivID, SiteID };

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);

            Database.ExportWorldItem(table, vals);

        }

    }
}

