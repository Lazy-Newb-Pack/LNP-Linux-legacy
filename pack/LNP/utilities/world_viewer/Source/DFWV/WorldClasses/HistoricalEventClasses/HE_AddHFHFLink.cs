using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_AddHFHFLink : HistoricalEvent
    {
        private int? HFID { get; set; }
        private HistoricalFigure HF { get; set; }
        private int? HFIDTarget { get; set; }
        private HistoricalFigure HFTarget { get; set; }

        override public Point Location { get { return Point.Empty; } }

        public HFLink HFLink { get; set; }

        public HE_AddHFHFLink(XDocument xdoc, World world)
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
                    case "hfid_target":
                        HFIDTarget = valI;
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
            if (HFIDTarget.HasValue && World.HistoricalFigures.ContainsKey(HFIDTarget.Value))
                HFTarget = World.HistoricalFigures[HFIDTarget.Value];
        }

        internal override void Process()
        {
            base.Process();
            var matched = false;

            if (HF != null && HF.HFLinks != null)
            {
                foreach (var hfLinkList in HF.HFLinks)
                {
                    foreach (var hflink in hfLinkList.Value.Where(hflink => hflink.HF == HFTarget))
                    {
                        hflink.Event = this;
                        HFLink = hflink;
                        matched = true;
                        break;
                    }
                    if (matched)
                        break;
                }
            }
            matched = false;
            if (HFTarget != null && HFTarget.HFLinks != null)
            {
                foreach (var hfLinkList in HFTarget.HFLinks)
                {
                    foreach (var hflink in hfLinkList.Value.Where(hflink => hflink.HF == HF))
                    {
                        hflink.Event = this;
                        HFLink = hflink;
                        matched = true;
                        break;
                    }
                    if (matched)
                        break;
                }
            }

            if (HF != null)
            {
                if (HF.Events == null)
                    HF.Events = new List<HistoricalEvent>();
                HF.Events.Add(this);
            }


            if (HFTarget == null) return;
            if (HFTarget.Events == null)
                HFTarget.Events = new List<HistoricalEvent>();
            HFTarget.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Target:", HFTarget);
            EventLabel(frm, parent, ref location, "Type:", HFLink != null ? HFLink.LinkTypes[HFLink.LinkType] : "UNKNOWN");
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} {2} {3}.",
                                    timestring, HF, HFLink != null ? HFLink.LinkTypes[HFLink.LinkType] : "UNKNOWN", HFTarget);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} {2} {3}.",
                timelinestring, HF != null ? HF.ToString() : HFID.ToString(), " linked to ", HFTarget != null ? HFTarget.ToString() : HFIDTarget.ToString());
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, HFID, HFIDTarget };


            Database.ExportWorldItem(table, vals);

        }

    }
}
