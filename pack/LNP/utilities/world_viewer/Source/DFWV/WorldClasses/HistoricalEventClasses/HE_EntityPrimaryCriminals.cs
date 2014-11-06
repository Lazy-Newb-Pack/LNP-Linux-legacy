using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_EntityPrimaryCriminals : HistoricalEvent
    {
        private int? EntityID { get; set; }
        private Entity Entity { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? StructureID { get; set; }
        private Structure Structure { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_EntityPrimaryCriminals(XDocument xdoc, World world)
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
                    case "entity_id":
                        EntityID = valI;
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
            if (EntityID.HasValue && World.Entities.ContainsKey(EntityID.Value))
                Entity = World.Entities[EntityID.Value];
            if (!StructureID.HasValue || StructureID.Value == -1 || Site == null) return;

            if (World.Structures.ContainsKey(StructureID.Value))
                Structure = World.Structures[StructureID.Value];
            else
            {
                Structure = new Structure(Site, StructureID.Value, World);
                Site.AddStructure(Structure);
            }
        }

        internal override void Process()
        {
            base.Process();
            if (Entity == null) return;
            if (Entity.Events == null)
                Entity.Events = new List<HistoricalEvent>();
            Entity.Events.Add(this);

            if (Structure != null)
            {
                if (Structure.Events == null)
                    Structure.Events = new List<HistoricalEvent>();
                Structure.Events.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Entity:", Entity);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Structure:", Structure);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} became the primary criminal organization in {2}.",
                            timestring, Entity, Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} became the primary criminal organization in {2}.",
                        timelinestring, Entity, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, EntityID, SiteID, StructureID };


            Database.ExportWorldItem(table, vals);

        }

    }
}


