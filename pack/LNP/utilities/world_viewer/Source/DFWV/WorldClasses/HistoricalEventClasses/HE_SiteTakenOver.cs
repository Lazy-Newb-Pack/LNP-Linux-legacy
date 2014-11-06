
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_SiteTakenOver : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; private set; }
        private int? SiteCivID { get; set; }
        public Entity SiteCiv { get; private set; }
        private int? AttackerCivID { get; set; }
        public Entity AttackerCiv { get; private set; }
        private int? DefenderCivID { get; set; }
        public Entity DefenderCiv { get; private set; }
        private int? NewSiteCivID { get; set; }
        private Entity NewSiteCiv { get; set; }

        override public Point Location { get { return Site.Location; } }


        public HE_SiteTakenOver(XDocument xdoc, World world)
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
                    case "attacker_civ_id":
                        AttackerCivID = valI;
                        break;
                    case "new_site_civ_id":
                        NewSiteCivID = valI;
                        break;
                    case "defender_civ_id":
                        DefenderCivID = valI;
                        break;
                    case "site_civ_id":
                        SiteCivID = valI;
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
            if (SiteCivID.HasValue && World.Entities.ContainsKey(SiteCivID.Value))
                SiteCiv = World.Entities[SiteCivID.Value];
            if (AttackerCivID.HasValue && World.Entities.ContainsKey(AttackerCivID.Value))
                AttackerCiv = World.Entities[AttackerCivID.Value];
            if (DefenderCivID.HasValue && World.Entities.ContainsKey(DefenderCivID.Value))
                DefenderCiv = World.Entities[DefenderCivID.Value];
            if (NewSiteCivID.HasValue && World.Entities.ContainsKey(NewSiteCivID.Value))
                NewSiteCiv = World.Entities[NewSiteCivID.Value];
        }

        internal override void Process()
        {
            base.Process();

            if (SiteCiv != null)
            {
                if (SiteCiv.Events == null)
                    SiteCiv.Events = new List<HistoricalEvent>();
                SiteCiv.Events.Add(this);
            }

            if (AttackerCiv != null)
            {
                if (AttackerCiv.Events == null)
                    AttackerCiv.Events = new List<HistoricalEvent>();
                AttackerCiv.Events.Add(this);
            }


            if (DefenderCiv != null)
            {
                if (AttackerCiv.Events == null)
                    AttackerCiv.Events = new List<HistoricalEvent>();
                AttackerCiv.Events.Add(this);
            }

            if (NewSiteCiv == null) return;
            if (NewSiteCiv.Events == null)
                NewSiteCiv.Events = new List<HistoricalEvent>();
            NewSiteCiv.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Attacker:", AttackerCiv);
            EventLabel(frm, parent, ref location, "New Owner:", NewSiteCiv);
            EventLabel(frm, parent, ref location, "Defender:", DefenderCiv);
            EventLabel(frm, parent, ref location, "Old Owner:", SiteCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} defeated {2} and took over {3}. The new government was called {4}.",
                                    timestring, AttackerCiv, SiteCiv,
                                    Site.AltName, NewSiteCiv);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} captured {2} from {3}.",
                                    timelinestring, AttackerCiv, Site.AltName, DefenderCiv);
        }

        internal override void Export(string table)
        {
            base.Export(table);

            table = GetType().Name;

            var vals = new List<object> { ID, SiteID, SiteCivID, DefenderCivID, NewSiteCivID, AttackerCivID };

            Database.ExportWorldItem(table, vals);
        }

    }
}
