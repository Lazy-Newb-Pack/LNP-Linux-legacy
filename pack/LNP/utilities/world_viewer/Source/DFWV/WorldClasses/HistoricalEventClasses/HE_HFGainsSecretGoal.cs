using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFGainsSecretGoal : HistoricalEvent
    {
        private int? HFID { get; set; }
        private HistoricalFigure HF { get; set; }
        private int SecretGoal { get; set; }


        override public Point Location { get { return Point.Empty; } }

        public HE_HFGainsSecretGoal(XDocument xdoc, World world)
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
                    case "secret_goal":
                        if (!HistoricalFigure.Goals.Contains(val))
                            HistoricalFigure.Goals.Add(val);
                        SecretGoal = HistoricalFigure.Goals.IndexOf(val);
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
            EventLabel(frm, parent, ref location, "Goal:", HistoricalFigure.Goals[SecretGoal]);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} became obsessed with {2} own mortality and sought to extend {2} life by any means.",
                                    timestring, HF,
                                    HF.Caste.HasValue ? (HistoricalFigure.Castes[HF.Caste.Value].ToLower() == "female" ? "her" : "his") : "his");
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} got immortality goal.",
                        timelinestring, HF);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, HFID, HistoricalFigure.Goals[SecretGoal] };


            Database.ExportWorldItem(table, vals);

        }

    }
}