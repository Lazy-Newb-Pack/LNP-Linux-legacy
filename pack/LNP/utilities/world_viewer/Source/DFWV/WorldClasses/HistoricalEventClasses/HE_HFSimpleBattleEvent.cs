using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFSimpleBattleEvent : HistoricalEvent
    {
        private List<int> Group1HFID { get; set; }
        public List<HistoricalFigure> Group1HF { get; private set; }
        private List<int> Group2HFID { get; set; }
        private List<HistoricalFigure> Group2HF { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private int Subtype { get; set; }
        public static List<string> Subtypes = new List<string>();

        override public Point Location { get { return Site != null ? Site.Location : (Subregion != null ? Subregion.Location : Point.Empty); } }

        public HE_HFSimpleBattleEvent(XDocument xdoc, World world)
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
                    case "subtype":
                        if (!Subtypes.Contains(val))
                            Subtypes.Add(val);
                        Subtype = Subtypes.IndexOf(val);
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
            EventLabel(frm, parent, ref location, "Subtype:", Subtypes[Subtype]);
            foreach (var hf in Group1HF)
                EventLabel(frm, parent, ref location, "Side 1:", hf);
            foreach (var hf in Group2HF)
                EventLabel(frm, parent, ref location, "Side 2:", hf);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Region:", Subregion);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            switch (Subtypes[Subtype])
            {
                case "attacked":
                case "ambushed":
                case "surprised":
                    return string.Format("{0} the {1} {2} {3} the {4} {5}.",
                        timestring, Group1HF[0].Race, Group1HF[0],
                        Subtype, Group2HF[0].Race, Group2HF[0]);
                case "corner":
                case "confront":
                    return string.Format("{0} the {1} {2} {3}ed the {4} {5}.",
                        timestring, Group1HF[0].Race, Group1HF[0],
                        Subtype, Group2HF[0].Race, Group2HF[0]);
                case "scuffle":
                    return string.Format("{0} the {1} {2} fought with the {3} {4}.",
                        timestring, Group1HF[0].Race, Group1HF[0], Group2HF[0].Race, Group2HF[0]);
                case "2 lost after receiving wounds":
                    return string.Format("{0} the {1} {2} managed to escape from the {3} {4}'s onslaught.",
                        timestring, Group2HF[0].Race, Group2HF[0], Group1HF[0].Race, Group1HF[0]);
                case "2 lost after giving wounds":
                    return string.Format("{0} the {1} {2} was forced to retreat from {3} {4} despite the latter's wounds.",
                        timestring, Group2HF[0].Race, Group2HF[0], Group1HF[0].Race, Group1HF[0]);
                case "happen upon":
                    return string.Format("{0} the {1} {2} happened upon the {3} {4}.",
                        timestring, Group1HF[0].Race, Group1HF[0], Group2HF[0].Race, Group2HF[0]);
                case "2 lost after mutual wounds":
                    return string.Format("{0} the {1} {2} eventually prevailled and the {3} {4} was forced to make a hasty escape.",
                        timestring, Group2HF[0].Race, Group2HF[0], Group1HF[0].Race, Group1HF[0]);
            }

            return timestring;
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Group1HF.Count == Group1HFID.Count && Group2HF.Count == Group2HFID.Count)
                return string.Format("{0} {1} fought {2}.",
                    timelinestring, Group1HF[0], Group2HF[0]);
            return string.Format("{0} {1} fought {2}.",
                timelinestring, Group1HFID[0], Group2HFID[0]);
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





            vals.AddRange(new List<object> { Subtypes[Subtype], SiteID, SubregionID, FeatureLayerID });

            Database.ExportWorldItem(table, vals);

        }

    }
}
