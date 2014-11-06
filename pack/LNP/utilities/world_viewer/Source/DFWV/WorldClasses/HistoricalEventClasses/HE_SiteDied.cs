using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_SiteDied : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SiteCivID { get; set; }
        public Entity SiteCiv { get; private set; }
        private int? CivID { get; set; }
        public Entity Civ { get; private set; }
        public bool Abandoned { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_SiteDied(XDocument xdoc, World world)
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
                    case "site_civ_id":
                        if (valI != -1)
                            SiteCivID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "abandoned":
                        Abandoned = true;
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
            if (SiteCivID.HasValue && World.Entities.ContainsKey(SiteCivID.Value))
                SiteCiv = World.Entities[SiteCivID.Value];

        }

        internal override void Process()
        {
            base.Process();
            Site.DiedEvent = this;

            if (SiteCiv == null) return;
            if (SiteCiv.Events == null)
                SiteCiv.Events = new List<HistoricalEvent>();
            SiteCiv.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Civ:", Civ);
            EventLabel(frm, parent, ref location, "Owner:", SiteCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Abandoned:", Abandoned ? "Yes": "No" );
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (Abandoned)
                return string.Format("{0} {1} abandoned the settlement of {2}.",
                            timestring, SiteCiv, Site.AltName);
            else
                //TODO: Update this
                return string.Format("{0} {1} died.",
                            timestring, Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (Abandoned)
                return string.Format("{0} {1} abandoned the settlement of {2}.",
                            timelinestring, SiteCiv, Site.AltName);
            else
                //TODO: Update this
                return string.Format("{0} {1} died.",
                            timelinestring, Site.AltName);

        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, CivID, SiteCivID, SiteID };


            Database.ExportWorldItem(table, vals);

        }

    }
}