using System;
using System.Collections.Generic;
using System.Xml.Linq;
using System.Drawing;
using System.Windows.Forms;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFConfronted : HistoricalEvent
    {
        private int? HFID { get; set; }
        private HistoricalFigure HF { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        private static readonly List<string> Situations = new List<string>();
        private int Situation { get; set; }
        private static readonly List<string> Reasons = new List<string>();
        private int Reason { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_HFConfronted(XDocument xdoc, World world)
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
                    case "hfid":
                        HFID = valI;
                        break;
                    case "situation":
                        if (!Situations.Contains(val))
                            Situations.Add(val);
                        Situation = Situations.IndexOf(val);
                        break;
                    case "reason":
                        if (!Reasons.Contains(val))
                            Reasons.Add(val);
                        Reason = Reasons.IndexOf(val);
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
        }


        internal override void Process()
        {
            base.Process();
            if (HF == null) return;
            if (HF.Events == null)
                HF.Events = new List<HistoricalEvent>();
            HF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Situation:", Situations[Situation]);
            EventLabel(frm, parent, ref location, "Reason:", Reasons[Reason]);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
            EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Reasons[Reason] == "murder" && Situations[Situation] == "general suspicion")
                return string.Format("{0} {1} aroused general suspicion in {2} after a murder.",
                    timestring, HF,
                    Site.AltName);
            if (Reasons[Reason] == "ageless" && Situations[Situation] == "general suspicion")
                return string.Format("{0} {1} aroused general suspicion in {2} after appearing not to age.",
                    timestring, HF,
                    Site.AltName);
            return timestring;
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Reasons[Reason] == "murder" && Situations[Situation] == "general suspicion")
                return string.Format("{0} {1} aroused general suspicion in {2} after a murder.",
                    timelinestring, HF,
                    Site.AltName);
            if (Reasons[Reason] == "ageless" && Situations[Situation] == "general suspicion")
                return string.Format("{0} {1} aroused general suspicion in {2} after appearing not to age.",
                    timelinestring, HF,
                    Site.AltName);
            return timelinestring;
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, HFID, Situations[Situation], Reasons[Reason], SiteID, SubregionID, FeatureLayerID };

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);

            Database.ExportWorldItem(table, vals);

        }

    }
}