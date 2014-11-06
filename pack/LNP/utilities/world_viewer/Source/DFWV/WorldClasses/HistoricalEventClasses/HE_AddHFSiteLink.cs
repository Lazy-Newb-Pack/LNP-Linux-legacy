using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  No HF listed, no idea about type of link.
    class HE_AddHFSiteLink : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }

        public HistoricalFigure HF { get; set; }
        public Structure Structure { get; set; }
        public Entity Civ { get; set; }

        private string LinkType { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_AddHFSiteLink(XDocument xdoc, World world)
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
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Structure:", Structure);
            EventLabel(frm, parent, ref location, "Civ:", Civ);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Structure != null && Civ != null && HF != null)
                    return string.Format("{0} {1} ruled from {2} of {3} in {4}.",
                            timestring, HF,
                            "UNKNOWN", Civ, Site.AltName);

            return string.Format("{0} {1} became {2} of {3}.",
                            timestring, "UNKNOWN",
                            LinkType ?? "UNKNOWN", Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} Added Site Link to {1}.",
                timelinestring, Site.AltName);
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
