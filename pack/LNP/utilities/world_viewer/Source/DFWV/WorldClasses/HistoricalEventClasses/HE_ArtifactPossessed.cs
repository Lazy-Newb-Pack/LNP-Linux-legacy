using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  UnitID does not associate with anything, "NameOnly" events aren't shown in legends
    class HE_ArtifactPossessed : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? HistFigureID { get; set; }
        private HistoricalFigure HistFigure { get; set; }
        private int? UnitID { get; set; }
        private HistoricalFigure Unit { get; set; }
        private int? ArtifactID { get; set; }
        private Artifact Artifact { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_ArtifactPossessed(XDocument xdoc, World world)
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
                        UnitID = valI;
                        break;
                    case "hist_figure_id":
                        HistFigureID = valI;
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
            if (HistFigureID.HasValue && World.HistoricalFigures.ContainsKey(HistFigureID.Value))
                HistFigure = World.HistoricalFigures[HistFigureID.Value];
            if (ArtifactID.HasValue && World.Artifacts.ContainsKey(ArtifactID.Value))
                Artifact = World.Artifacts[ArtifactID.Value];
            if (UnitID.HasValue && World.HistoricalFigures.ContainsKey(UnitID.Value))
                Unit = World.HistoricalFigures[UnitID.Value];
        }


        internal override void Process()
        {
            base.Process();
            if (HistFigure == null) return;
            if (HistFigure.Events == null)
                HistFigure.Events = new List<HistoricalEvent>();
            HistFigure.Events.Add(this);


            if (Artifact != null)
            {
                if (Artifact.PossessedEvents == null)
                    Artifact.PossessedEvents = new List<HE_ArtifactPossessed>();
                Artifact.PossessedEvents.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Artifact:", Artifact);
            if (UnitID != null) 
                EventLabel(frm, parent, ref location, "Unit ID:", UnitID.Value.ToString());
            EventLabel(frm, parent, ref location, "Possessor:", HistFigure);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} the {1} {2} learned the secrets of UNKNOWN from {3}.",
                                timestring, HistFigure.Race, HistFigure,
                                Artifact);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} the {1} learned secrets from {2}.",
                        timelinestring, HistFigure,
                                Artifact);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, ArtifactID, UnitID, SiteID, HistFigureID};


            Database.ExportWorldItem(table, vals);

        }

    }
}