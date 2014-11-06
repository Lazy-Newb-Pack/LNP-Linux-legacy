using System;
using System.Drawing;
using System.Collections.Generic;
using System.Xml.Linq;
using System.Windows.Forms;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_ChangeHFBodyState : HistoricalEvent
    {
        
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? HFID { get; set; }
        public HistoricalFigure HF { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        private int? BuildingID { get; set; }
        private Structure Structure { get; set; }
        public string BodyState { get; set; }

        override public Point Location { get { return Coords; } }

        public HE_ChangeHFBodyState(XDocument xdoc, World world)
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
                    case "hfid":
                        HFID = valI;
                        break;
                    case "body_state":
                        BodyState = val;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "building_id":
                        BuildingID = valI;
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
            if (HFID.HasValue && World.HistoricalFigures.ContainsKey(HFID.Value))
                HF = World.HistoricalFigures[HFID.Value];
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
            
            if (BuildingID.HasValue && Site.Structures != null)
            {
                foreach (Structure structure in Site.Structures)
                {
                    if (structure.SiteID == BuildingID)
                    {
                        Structure = structure;
                        if (Structure.Events == null)
                            Structure.Events = new List<HistoricalEvent>();
                        Structure.Events.Add(this);
                        break;
                    }
                }
            }
        }


        internal override void Process()
        {
            base.Process();

            if (HF == null) return;
            if (HF.Events == null)
                HF.Events = new List<HistoricalEvent>();
            HF.Events.Add(this);
            if (BodyState == "entombed at site")
            {
                HF.EntombedEvent = this;
            }
        }


        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "State:", BodyState);
            EventLabel(frm, parent, ref location, "Site:", Site);
            if (Structure != null)
                EventLabel(frm, parent, ref location, "Structure:", Structure);
            else
                EventLabel(frm, parent, ref location, "Building ID:", BuildingID.ToString());
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
            EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} was entombed in {2} within {3}.",
                                    timestring, HF, Site.AltName, "BUILDING " + BuildingID);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} was entombed at {2}.",
                        timelinestring, HF, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            var vals = new List<object> { ID, HFID, BodyState, BuildingID, SiteID,  SubregionID, FeatureLayerID};
            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);

            Database.ExportWorldItem(table, vals);

        }

    }
}
