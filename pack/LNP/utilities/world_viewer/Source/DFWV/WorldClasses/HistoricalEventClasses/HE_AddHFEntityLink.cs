using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_AddHFEntityLink : HistoricalEvent
    {
        private int? CivID { get; set; }
        public Entity Civ { get; set; }
        public HistoricalFigure HF { private get; set; }
        public string LinkType { private get; set; }

        override public Point Location { get { return Civ.Location; } }

        public EntityLink EntityLink { get; set; }

        public HE_AddHFEntityLink(XDocument xdoc, World world)
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
                    case "civ_id":
                        CivID = valI;
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
            if (CivID.HasValue && World.Entities.ContainsKey(CivID.Value))
                Civ = World.Entities[CivID.Value];
        }

        internal override void Process()
        {
            base.Process();

            if (Civ == null) return;
            if (Civ.Events == null)
                Civ.Events = new List<HistoricalEvent>();
            Civ.Events.Add(this);
        }


        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Entity:", Civ);
            EventLabel(frm, parent, ref location, "Link Type:", LinkType);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} became {2} of {3}.",
                            timestring, HF == null ? "UNKNOWN" : HF.ToString(),
                            LinkType ?? "UNKNOWN", Civ);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (HF != null && LinkType != null)
                return string.Format("{0} {1} became {2} of {3}.",
                            timelinestring, HF,
                                LinkType, Civ);
            return string.Format("{0} Added HF Link to {1}.",
                timelinestring, Civ);
        }


        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;
            var vals = new List<object> { ID, HF, CivID, LinkType};


            Database.ExportWorldItem(table, vals);

        }


    }
}
