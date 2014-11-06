using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_RazedStructure : HistoricalEvent
    {
        private int? CivID { get; set; }
        public Entity Civ { get; set; }
        private int? SiteID { get; set; }
        public Site Site { get; set; }
        private int? StructureID { get; set; }
        private Structure Structure { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_RazedStructure(XDocument xdoc, World world)
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
                    case "civ_id":
                        CivID = valI;
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
            if (CivID.HasValue && World.Entities.ContainsKey(CivID.Value))
                Civ = World.Entities[CivID.Value];

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
            if (Civ == null) return;
            if (Civ.Events == null)
                Civ.Events = new List<HistoricalEvent>();
            Civ.Events.Add(this);
            if (Structure != null)
            {
                if (Structure.Events == null)
                    Structure.Events = new List<HistoricalEvent>();
                Structure.Events.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Civ:", Civ);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Structure:", Structure);   
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} razed {2} in {3}.",
                            timestring, Civ, "Structure " + StructureID,
                            Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} razed a structure in {2}.",
                            timelinestring, Civ, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, CivID, SiteID, StructureID };


            Database.ExportWorldItem(table, vals);

        }

    }
}