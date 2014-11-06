using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  Devourer (inferable from beast attack event collection), Devoured
    class HE_CreatureDevoured : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        public HistoricalFigure Devourer { private get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Subregion.Location; } }

        public HE_CreatureDevoured(XDocument xdoc, World world)
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
                    case "subregion_id":
                        if (valI != -1)
                            SubregionID = valI;
                        break;
                    case "feature_layer_id":
                        if (valI != -1)
                            FeatureLayerID = valI;
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
            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Devourer:", Devourer);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            var location = "in ";
            if (Subregion != null)
                location += Subregion.ToString();
            else
                location += Site.AltName;

            if (Devourer != null)
                return string.Format("{0} the {1} {2} devoured the {3} {4} {5}.",
                    timestring, Devourer.Race, Devourer, "UNKNOWN", "UNKNOWN",
                    location);
            return string.Format("{0} the {1} {2} devoured the {3} {4} {5}.",
                timestring, "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN",
                location);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            var location = "in ";
            if (Subregion != null)
                location += Subregion.ToString();
            else
                location += Site.AltName;

            if (Devourer != null)
                return string.Format("{0} {1} devoured someone {2}.",
                    timelinestring, Devourer, location);
            return string.Format("{0} Creature devoured {1}.",
                timelinestring, location);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, SiteID, SubregionID, FeatureLayerID };

            if (Devourer == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Devourer.ID);


            Database.ExportWorldItem(table, vals);

        }

    }
}
