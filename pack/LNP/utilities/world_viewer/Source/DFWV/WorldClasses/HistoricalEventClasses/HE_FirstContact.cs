using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_FirstContact : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? ContactorEnID { get; set; }
        private Entity ContactorEn { get; set; }
        private int? ContactedEnID { get; set; }
        private Entity ContactedEn { get; set; }

        override public Point Location { get { return Site.Location; } }


        public HE_FirstContact(XDocument xdoc, World world)
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
                    case "contactor_enid":
                        ContactorEnID = valI;
                        break;
                    case "contacted_enid":
                        ContactedEnID = valI;
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
            if (ContactorEnID.HasValue && World.Entities.ContainsKey(ContactorEnID.Value))
                ContactorEn = World.Entities[ContactorEnID.Value];
            if (ContactedEnID.HasValue && World.Entities.ContainsKey(ContactedEnID.Value))
                ContactedEn = World.Entities[ContactedEnID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (ContactorEn != null)
            {
                if (ContactorEn.Events == null)
                    ContactorEn.Events = new List<HistoricalEvent>();
                ContactorEn.Events.Add(this);
            }

            if (ContactedEn == null) return;
            if (ContactedEn.Events == null)
                ContactedEn.Events = new List<HistoricalEvent>();
            ContactedEn.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Contactor:", ContactorEn);
            EventLabel(frm, parent, ref location, "Contacted:", ContactedEn);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} made contact with {2} at {3}.",
                                    timestring, ContactorEn, ContactedEn, Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} made contact with {2} at {3}.",
                                    timelinestring, ContactorEn, ContactedEn, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, SiteID, ContactorEnID, ContactedEnID };


            Database.ExportWorldItem(table, vals);

        }

    }
}
