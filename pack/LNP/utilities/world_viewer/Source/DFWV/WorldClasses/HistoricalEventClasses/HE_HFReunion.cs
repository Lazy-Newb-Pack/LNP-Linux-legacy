using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFReunion : HistoricalEvent
    {
        private List<int> Group1HFID { get; set; }
        private List<HistoricalFigure> Group1HF { get; set; }
        private List<int> Group2HFID { get; set; }
        private List<HistoricalFigure> Group2HF { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_HFReunion(XDocument xdoc, World world)
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
                    case "group_1_hfid":
                        if (Group1HFID == null)
                            Group1HFID = new List<int>();
                        Group1HFID.Add(valI);
                        break;
                    case "group_2_hfid":
                        if (Group2HFID == null)
                            Group2HFID = new List<int>();
                        Group2HFID.Add(valI);
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
            if (Group1HFID != null)
            {
                Group1HF = new List<HistoricalFigure>();
                foreach (var group1hfid in Group1HFID.Where(group1hfid => World.HistoricalFigures.ContainsKey(group1hfid)))
                {
                    Group1HF.Add(World.HistoricalFigures[group1hfid]);
                }
            }

            if (Group2HFID == null) return;
            Group2HF = new List<HistoricalFigure>();
            foreach (var group2hfid in Group2HFID.Where(group2hfid => World.HistoricalFigures.ContainsKey(group2hfid)))
            {
                Group2HF.Add(World.HistoricalFigures[group2hfid]);
            }
        }


        internal override void Process()
        {
            base.Process();
            if (Group1HF != null)
            {
                foreach (var hf in Group1HF)
                {
                    if (hf.Events == null)
                        hf.Events = new List<HistoricalEvent>();
                    hf.Events.Add(this);
                }
            }
            if (Group2HF == null) return;
            foreach (var hf in Group2HF)
            {
                if (hf.Events == null)
                    hf.Events = new List<HistoricalEvent>();
                hf.Events.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            foreach (var hf in Group1HF)
                EventLabel(frm, parent, ref location, "Group 1:", hf);
            foreach (var hf in Group2HF)
                EventLabel(frm, parent, ref location, "Group 2:", hf);

            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Layer:", FeatureLayerID == -1 ? "" : FeatureLayerID.ToString());
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} was reunited with {2}{3} in {4}.",
                           timestring, Group1HF[0], Group2HF.Count == 2 ? " and " + Group2HF[1] : "",
                           Group2HF[0], Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Group2HF.Count == Group2HFID.Count && Group1HF.Count == Group1HFID.Count)
                return string.Format("{0} {1} was reunited with {2}{3} in {4}.",
                               timelinestring, Group1HF[0], Group2HF.Count == 2 ? " and " + Group2HF[1] : "",
                               Group2HF[0], Site.AltName);
            return string.Format("{0} {1} was reunited with {2}{3} in {4}.",
                timelinestring, Group1HFID[0], Group2HF.Count == 2 ? " and " + Group2HFID[1] : "",
                Group2HFID[0], Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID };

            if (Group1HFID != null && Group1HFID.Count == 2)
            {
                vals.Add(Group1HFID[0]);
                vals.Add(Group1HFID[1]);
            }
            else if (Group1HFID != null && Group1HFID.Count == 1)
            {
                vals.Add(Group1HFID[0]);
                vals.Add(DBNull.Value);
            }
            else
            {
                vals.Add(DBNull.Value);
                vals.Add(DBNull.Value);
            }
            if (Group2HFID != null && Group2HFID.Count == 2)
            {
                vals.Add(Group2HFID[0]);
                vals.Add(Group2HFID[1]);
            }
            else if (Group2HFID != null && Group2HFID.Count == 1)
            {
                vals.Add(Group2HFID[0]);
                vals.Add(DBNull.Value);
            }
            else
            {
                vals.Add(DBNull.Value);
                vals.Add(DBNull.Value);
            }





            vals.AddRange(new List<object> { SiteID, SubregionID, FeatureLayerID });


            Database.ExportWorldItem(table, vals);

        }

    }
}