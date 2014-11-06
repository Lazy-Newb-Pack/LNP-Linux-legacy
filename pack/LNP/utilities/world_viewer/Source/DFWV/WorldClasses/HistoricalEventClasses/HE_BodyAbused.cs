using System;
using System.Collections.Generic;
using System.Xml.Linq;
using System.Drawing;
using System.Windows.Forms;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  AbuserEn not given, although inferable from Event Collection sometimes.
    class HE_BodyAbused : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        public Entity AbuserEn { private get; set; }

        override public Point Location { get { return Coords != Point.Empty ? Coords : (Site != null ? Site.Location : Subregion.Location); } }

        public HE_BodyAbused(XDocument xdoc, World world)
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
                    case "coords":
                        if (val != "-1,-1")
                            Coords = new Point(Convert.ToInt32(val.Split(',')[0]), Convert.ToInt32(val.Split(',')[1]));
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

        internal override void Process()
        {
            base.Process();
            if (AbuserEn == null) return;
            if (AbuserEn.Events == null)
                AbuserEn.Events = new List<HistoricalEvent>();
            AbuserEn.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Abuser:", AbuserEn);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
            EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} the bodies of {1} were added to a grisly mound by {2} in {3}.",
                            timestring, "UNKNOWN", AbuserEn == null ? "UNKNOWN" : AbuserEn.ToString(),
                            Site == null ? "UNKNOWN" : Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Site == null && AbuserEn == null)
                return string.Format("{0} Bodies abused.",
                                timelinestring);
            if (Site == null)
                return string.Format("{0} Bodies abused by {1}.",
                    timelinestring, AbuserEn);
            if (AbuserEn == null)
                return string.Format("{0} Bodies abused at {1}.",
                    timelinestring, Site.AltName);
            return string.Format("{0} Bodies abused at {1} by {2}.",
                timelinestring, Site.AltName, AbuserEn);
        }

        internal override void Export(string table)
        {
            base.Export(table);

            table = GetType().Name;


            var vals = new List<object> { ID, SiteID, SubregionID, FeatureLayerID};
            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);
            if (AbuserEn == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(AbuserEn.ID);


            Database.ExportWorldItem(table, vals);


        }

    }
}