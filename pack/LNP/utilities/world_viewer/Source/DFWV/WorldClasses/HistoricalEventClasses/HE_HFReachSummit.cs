using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFReachSummit : HistoricalEvent
    {

        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        private List<int> GroupHFID { get; set; }
        private List<HistoricalFigure> GroupHF { get; set; }

        override public Point Location { get { return Coords != Point.Empty ? Coords : Subregion.Location; } }

        public HE_HFReachSummit(XDocument xdoc, World world)
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
                        if (GroupHFID == null)
                            GroupHFID = new List<int>();
                        GroupHFID.Add(valI);
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

            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];

            if (GroupHFID != null)
            {
                GroupHF = new List<HistoricalFigure>();
                foreach (var group1hfid in GroupHFID.Where(group1hfid => World.HistoricalFigures.ContainsKey(group1hfid)))
                {
                    GroupHF.Add(World.HistoricalFigures[group1hfid]);
                }
            }


        }

        internal override void Process()
        {
            base.Process();
            if (GroupHF != null)
            {
                foreach (var hf in GroupHF)
                {
                    if (hf.Events == null)
                        hf.Events = new List<HistoricalEvent>();
                    hf.Events.Add(this);
                }
            }

        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            if (GroupHF!= null)
            {
                foreach (var hf in GroupHF)
                    EventLabel(frm, parent, ref location, "HF:", hf);
            }

            if (Subregion != null)
            {
                EventLabel(frm, parent, ref location, "Region:", Subregion);
            }
            if (Coords != Point.Empty)
            {
                EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
            }

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (GroupHF == null)
                return "";
            if (Subregion != null)
            {
                if (GroupHF.Count == 1)
                    return string.Format("{0} {1} was the first to reach the summit of {2}, which rises above {3}.",
                            timestring, GroupHF[0].Name, "UNKNOWN", Subregion.Name);
                return string.Format("{0} {1} and {2} were the first to reach the summit of {3}, which rises above {4}.",
                    timestring, GroupHF[0].Name, GroupHF[1].Name, "UNKNOWN", Subregion.Name);
            }
            if (GroupHF.Count == 1)
                return string.Format("{0} {1} was the first to reach the summit of {2}, which rises above {3}.",
                        timestring, GroupHF[0].Name, "UNKNOWN", "UNKNOWN");
            return string.Format("{0} {1} and {2} were the first to reach the summit of {3}, which rises above {4}.",
                timestring, GroupHF[0].Name, GroupHF[1].Name, "UNKNOWN", "UNKNOWN");
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (GroupHF == null)
                return "";
            if (Subregion != null)
            {
                if (GroupHF.Count == 1)
                    return string.Format("{0} {1} was the first to reach a summit, which rises above {2}.",
                            timelinestring, GroupHF[0].Name, Subregion.Name);
                return string.Format("{0} {1} and {2} were the first to reach a summit, which rises above {3}.",
                    timelinestring, GroupHF[0].Name, GroupHF[1].Name, Subregion.Name);
            }
            if (GroupHF.Count == 1)
                return string.Format("{0} {1} was the first to reach a summit.",
                        timelinestring, GroupHF[0].Name);
            return string.Format("{0} {1} and {2} were the first to reach a summit.",
                timelinestring, GroupHF[0].Name, GroupHF[1].Name);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            base.Export(table);


            table = GetType().Name;



            var vals = new List<object> { ID };


            if (GroupHFID != null && GroupHFID.Count == 2)
            {
                vals.Add(GroupHFID[0]);
                vals.Add(GroupHFID[1]);
            }
            else if (GroupHFID != null && GroupHFID.Count == 1)
            {
                vals.Add(GroupHFID[0]);
                vals.Add(DBNull.Value);
            }
            else
            {
                vals.Add(DBNull.Value);
                vals.Add(DBNull.Value);
            }


            vals.AddRange(new List<object> { SubregionID, FeatureLayerID});

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);

            Database.ExportWorldItem(table, vals);
        }

    }
}