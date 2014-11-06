using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_ArtifactLost : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; private set; }
        private int? ArtifactID { get; set; }
        private Artifact Artifact { get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Point.Empty; } }

        public HE_ArtifactLost(XDocument xdoc, World world)
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
                    case "artifact_id":
                        ArtifactID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
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
            if (ArtifactID.HasValue && World.Artifacts.ContainsKey(ArtifactID.Value))
                Artifact = World.Artifacts[ArtifactID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (Artifact != null)
            {
                Artifact.LostEvent = this;
            }

        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Artifact:", Artifact);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Site == null)
                return string.Format("{0} {1} was lost in an unknown site.",
                        timestring, Artifact);
            return string.Format("{0} {1} was lost in {2}.",
                timestring, Artifact, Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Site == null)
                return string.Format("{0} {1} was lost.",
                        timelinestring, Artifact);
            return string.Format("{0} {1} was lost in {2}.",
                timelinestring, Artifact, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            var vals = new List<object> { ID, ArtifactID, SiteID};


            Database.ExportWorldItem(table, vals);

        }

    }
}