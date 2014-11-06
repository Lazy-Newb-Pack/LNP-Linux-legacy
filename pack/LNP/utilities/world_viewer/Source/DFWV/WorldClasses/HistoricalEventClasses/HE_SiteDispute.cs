using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Verify new event
    class HE_SiteDispute : HistoricalEvent
    {
        public string Dispute { get; set; }
        public int? EntityID1 { get; set; }
        public Entity Entity1 { get; set; }
        public int? EntityID2 { get; set; }
        public Entity Entity2 { get; set; }
        public int? SiteID1 { get; set; }
        public Site Site1 { get; set; }
        public int? SiteID2 { get; set; }
        public Site Site2 { get; set; }

        public HE_SiteDispute(XDocument xdoc, World world)
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

                    case "dispute":
                        Dispute = val;
                        break;
                    case "entity_id_1":
                        EntityID1 = valI;
                        break;
                    case "entity_id_2":
                        EntityID2 = valI;
                        break;
                    case "site_id_1":
                        SiteID1 = valI;
                        break;
                    case "site_id_2":
                        SiteID2 = valI;
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

            if (SiteID1.HasValue && World.Sites.ContainsKey(SiteID1.Value))
                Site1 = World.Sites[SiteID1.Value];
            if (SiteID2.HasValue && World.Sites.ContainsKey(SiteID2.Value))
                Site2 = World.Sites[SiteID2.Value];

            if (EntityID1.HasValue && World.Entities.ContainsKey(EntityID1.Value))
                Entity1 = World.Entities[EntityID1.Value];
            if (EntityID2.HasValue && World.Entities.ContainsKey(EntityID2.Value))
                Entity2 = World.Entities[EntityID2.Value];
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Dispute:", Dispute);
            EventLabel(frm, parent, ref location, "Entity 1:", Entity1);
            EventLabel(frm, parent, ref location, "Entity 2:", Entity2);
            EventLabel(frm, parent, ref location, "Site 1:", Site1);
            EventLabel(frm, parent, ref location, "Site 2:", Site2);
        }
        

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} of {2} and {3} of {4} became embroiled in a dispute over {5}.",
                        timestring, Entity1, Site1.AltName, Entity2, Site2.AltName, Dispute);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} and {2} dispute {3}.",
                        timelinestring, Entity1, Entity2, Dispute);
        }

        internal override void Export(string table)
        {
            base.Export(table);

            table = GetType().Name;

            var vals = new List<object> { ID, EntityID1, EntityID2, SiteID1, SiteID2, Dispute };

            Database.ExportWorldItem(table, vals);

        }

    }
}