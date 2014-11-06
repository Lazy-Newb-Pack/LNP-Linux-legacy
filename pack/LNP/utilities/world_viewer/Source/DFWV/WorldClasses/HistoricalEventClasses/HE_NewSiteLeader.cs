using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_NewSiteLeader : HistoricalEvent
    {
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SiteCivID { get; set; }
        private Entity SiteCiv { get; set; }
        private int? AttackerCivID { get; set; }
        public Entity AttackerCiv { get; private set; }
        private int? DefenderCivID { get; set; }
        private Entity DefenderCiv { get; set; }
        private int? NewSiteCivID { get; set; }
        private Entity NewSiteCiv { get; set; }
        private int? NewLeaderHFID { get; set; }
        private HistoricalFigure NewLeaderHF { get; set; }

        override public Point Location { get { return Site.Location; } }



        public HE_NewSiteLeader(XDocument xdoc, World world)
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
                    case "new_leader_hfid":
                        NewLeaderHFID = valI;
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
            if (NewLeaderHFID.HasValue && World.HistoricalFigures.ContainsKey(NewLeaderHFID.Value))
                NewLeaderHF = World.HistoricalFigures[NewLeaderHFID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (NewLeaderHF != null)
            {
                if (NewLeaderHF.Events == null)
                    NewLeaderHF.Events = new List<HistoricalEvent>();
                NewLeaderHF.Events.Add(this);
            }
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
            EventLabel(frm, parent, ref location, "New Leader:", NewLeaderHF);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} defeated {2} and placed the {3} {4} in charge of {5}. The new government was called {6}.",
                                    timestring, AttackerCiv, SiteCiv, NewLeaderHF.Race, NewLeaderHF,
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



            var vals = new List<object> { ID, SiteID, SiteCivID, DefenderCivID, NewSiteCivID, AttackerCivID, NewLeaderHFID };


            Database.ExportWorldItem(table, vals);

        }

    }
}
