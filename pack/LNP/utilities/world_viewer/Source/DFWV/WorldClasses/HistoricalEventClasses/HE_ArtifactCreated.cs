using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  UnitID does not associate with anything, "NameOnly" events aren't shown in legends
    class HE_ArtifactCreated : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; set; }
        private int? HistFigureID { get; set; }
        public HistoricalFigure HistFigure { get; private set; }
        private int? UnitID { get; set; }
        private HistoricalFigure Unit { get; set; }
        private int? ArtifactID { get; set; }
        public Artifact Artifact { get; set; }
        private bool NameOnly { get; set; }

        override public Point Location { get { return Site != null ? Site.Location : Point.Empty; } }

        public HE_ArtifactCreated(XDocument xdoc, World world)
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
                    case "unit_id":
                        if (valI != -1)
                        UnitID = valI;
                        break;
                    case "hist_figure_id":
                        HistFigureID = valI;
                        break;
                    case "site_id":
                        if (valI != -1)
                        SiteID = valI;
                        break;
                    case "name_only":
                        NameOnly = true;
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
            if (HistFigureID.HasValue && World.HistoricalFigures.ContainsKey(HistFigureID.Value))
                HistFigure = World.HistoricalFigures[HistFigureID.Value];
            if (ArtifactID.HasValue && World.Artifacts.ContainsKey(ArtifactID.Value))
                Artifact = World.Artifacts[ArtifactID.Value];
            //if (UnitID.HasValue && World.HistoricalFigures.ContainsKey(UnitID.Value))
            //    Unit = World.HistoricalFigures[UnitID.Value];
        }


        internal override void Process()
        {
            base.Process();
            if (Artifact != null)
            {
                Artifact.CreatedEvent = this;
            }

            if (Site != null)
            {
                if (Site.CreatedArtifacts == null)
                    Site.CreatedArtifacts = new List<Artifact>();
                Site.CreatedArtifacts.Add(Artifact);
            }


            if (HistFigure == null) return;
            if (HistFigure.Events == null)
                HistFigure.Events = new List<HistoricalEvent>();
            HistFigure.Events.Add(this);

            if (HistFigure.CreatedArtifacts == null)
                HistFigure.CreatedArtifacts = new List<Artifact>();
            HistFigure.CreatedArtifacts.Add(Artifact);

        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Artifact:", Artifact);
            if (UnitID != null)
                EventLabel(frm, parent, ref location, "Unit ID:", UnitID.Value.ToString());
            EventLabel(frm, parent, ref location, "Made by:", HistFigure);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Site == null)
                return string.Format("{0} {1} was created by {2}.",
                    timestring, Artifact,
                    HistFigure);
            return string.Format("{0} {1} was created in {2} by {3}.",
                timestring, Artifact, Site.AltName,
                HistFigure);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Site == null)
                return string.Format("{0} {1} was created by {2}.",
                    timelinestring, Artifact,
                    HistFigure);
            return string.Format("{0} {1} was created in {2} by {3}.",
                timelinestring, Artifact, Site.AltName,
                HistFigure);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, ArtifactID, UnitID, SiteID, HistFigureID, NameOnly };


            Database.ExportWorldItem(table, vals);

        }

    }
}