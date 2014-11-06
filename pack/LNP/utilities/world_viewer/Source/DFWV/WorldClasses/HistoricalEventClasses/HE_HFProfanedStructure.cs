using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFProfanedStructure : HistoricalEvent
    {
        private int? HistFigID { get; set; }
        private HistoricalFigure HistFig { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? StructureID { get; set; }
        private Structure Structure { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_HFProfanedStructure(XDocument xdoc, World world)
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
                    case "hist_fig_id":
                        HistFigID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "structure_id":
                        if (valI != -1)
                        StructureID = valI;
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
            if (HistFigID.HasValue && World.HistoricalFigures.ContainsKey(HistFigID.Value))
                HistFig = World.HistoricalFigures[HistFigID.Value];

            if (!StructureID.HasValue || StructureID.Value == -1 || Site == null) return;

            Structure = Site.GetStructure(StructureID.Value);
            if (Structure == null)
            {
                Structure = new Structure(Site, StructureID.Value, World);
                Site.AddStructure(Structure);
            }
        }

        internal override void Process()
        {
            base.Process();
            if (Structure != null)
            {
                if (Structure.Events == null)
                    Structure.Events = new List<HistoricalEvent>();
                Structure.Events.Add(this);
            }
            if (HistFig == null) return;
            if (HistFig.Events == null)
                HistFig.Events = new List<HistoricalEvent>();
            HistFig.Events.Add(this);
        }


        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Hist Fig:", HistFig);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Structure:", Structure);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} {2} profaned the {3} in {4}.",
                            timestring, HistFig.Race, HistFig,
                            "UNKNOWN", Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} profaned a structure in {2}.",
                            timelinestring, HistFig, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, HistFigID, SiteID, StructureID };


            Database.ExportWorldItem(table, vals);

        }

    }
}

