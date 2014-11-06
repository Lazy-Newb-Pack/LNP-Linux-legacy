using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;
using System.Drawing;
using System.Windows.Forms;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  Pet details?

    class HE_HFNewPet : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        private int? GroupHFID { get; set; }
        private HistoricalFigure GroupHF { get; set; }

        override public Point Location { get { return Coords; } }

        public HE_HFNewPet(XDocument xdoc, World world)
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
                    case "group_hfid":
                        if (GroupHFID.HasValue)
                            DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        GroupHFID = valI;
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
            if (GroupHFID.HasValue && World.HistoricalFigures.ContainsKey(GroupHFID.Value))
                GroupHF = World.HistoricalFigures[GroupHFID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (GroupHF == null) return;
            if (GroupHF.Events == null)
                GroupHF.Events = new List<HistoricalEvent>();
            GroupHF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", GroupHF);
            if (Site != null)
                EventLabel(frm, parent, ref location, "Site:", Site);
            if (Subregion != null)
                EventLabel(frm, parent, ref location, "Region:", Subregion);
            if (FeatureLayerID != null && FeatureLayerID.Value != -1)
                EventLabel(frm, parent, ref location, "Feature Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
            if (Coords != Point.Empty) 
                EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} tamed the {2} of {3}.",
                                timestring, GroupHF, "UNKNOWN", 
                                Subregion == null ? "UNKNOWN" : Subregion.ToString());
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} got a new pet.",
                                timelinestring, GroupHF);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, GroupHFID, SiteID, SubregionID, FeatureLayerID };

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);


            Database.ExportWorldItem(table, vals);

        }

    }
}
