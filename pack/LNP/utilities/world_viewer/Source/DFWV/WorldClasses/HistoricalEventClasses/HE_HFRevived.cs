using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFRevived : HistoricalEvent
    {
        private int? HFID { get; set; }
        private HistoricalFigure HF { get; set; }
        private string Ghost { get; set; }
        private bool RaisedBefore { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Subregion.Location; } }

        public HE_HFRevived(XDocument xdoc, World world)
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
                    case "hfid":
                        HFID = valI;
                        break;
                    case "ghost":
                        Ghost = val;
                        break;
                    case "raised_before":
                        RaisedBefore = true;
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
            EventLabel(frm, parent, ref location, "Ghost:", Ghost);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} came back from the dead as a {2} in {3}.",
                                    timestring, HF, Ghost, Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Site != null)
                return string.Format("{0} {1} came back from the dead as a {2} in {3}*",
                                        timelinestring, HF != null ? HF.ToString() : HFID.ToString(), Ghost, Site.AltName);
            return string.Format("{0} {1} came back from the dead as a {2}",
                timelinestring, HF != null ? HF.ToString() : HFID.ToString(), Ghost);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, HFID, Ghost, RaisedBefore, SiteID, SubregionID, FeatureLayerID};


            Database.ExportWorldItem(table, vals);

        }

    }
}
