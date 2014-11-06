
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_InsurrectionStarted : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; private set; }
        private int? TargetCivID { get; set; }
        public Entity TargetCiv { get; private set; }
        public string Outcome { get; set; }


        override public Point Location { get { return Site.Location; } }


        public HE_InsurrectionStarted(XDocument xdoc, World world)
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
                    case "target_civ_id":
                        TargetCivID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "outcome":
                        Outcome = val;
                        if (Outcome != "population gone" && Outcome != "leadership overthrown")
                            Program.Log(LogType.Warning, "Unexpected Insurrection outcome - " + Outcome);
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
            if (TargetCivID.HasValue && World.Entities.ContainsKey(TargetCivID.Value))
                TargetCiv = World.Entities[TargetCivID.Value];
        }

        internal override void Process()
        {
            base.Process();

            if (TargetCiv != null)
            {
                if (TargetCiv.Events == null)
                    TargetCiv.Events = new List<HistoricalEvent>();
                TargetCiv.Events.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Target Civ:", TargetCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Outcome:", Outcome);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Outcome == "population gone")
                return string.Format("{0} the insurrection in {1} against {2} ended with the disappearance of hte rebelling population.",
                                        timestring, Site.AltName, TargetCiv);
            else if (Outcome == "leadership overthrown")
                return string.Format("{0} the insurrection in {1} concluded with {2} overthrown.",
                                        timestring, Site.AltName, TargetCiv);
            else
                return string.Format("{0} the insurrection in {1} against {2} - {3}.",
                                        timestring, Site.AltName, TargetCiv, Outcome);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} insurrection in {1} against {2} - {3}.",
                                    timelinestring, Site.AltName, TargetCiv, Outcome);
        }

        internal override void Export(string table)
        {
            base.Export(table);

            table = GetType().Name;

            var vals = new List<object> { ID, SiteID, TargetCivID, Outcome };

            Database.ExportWorldItem(table, vals);
        }

    }
}
