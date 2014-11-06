using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFAttackedSite : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; private set; }
        private int? AttackerHFID { get; set; }
        public HistoricalFigure AttackerHF { get; private set; }
        private int? DefenderCivID { get; set; }
        public Entity DefenderCiv { get; private set; }
        private int? SiteCivID { get; set; }
        public Entity SiteCiv { get; private set; }

        override public Point Location { get { return Site.Location; } }


        public HE_HFAttackedSite(XDocument xdoc, World world)
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
                    case "attacker_hfid":
                        AttackerHFID = valI;
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
            if (AttackerHFID.HasValue && World.HistoricalFigures.ContainsKey(AttackerHFID.Value))
                AttackerHF = World.HistoricalFigures[AttackerHFID.Value];
            if (DefenderCivID.HasValue && World.Entities.ContainsKey(DefenderCivID.Value))
                DefenderCiv = World.Entities[DefenderCivID.Value];
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
            if (SiteCivID.HasValue && World.Entities.ContainsKey(SiteCivID.Value))
                SiteCiv = World.Entities[SiteCivID.Value];
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

            if (AttackerHF != null)
            {
                if (AttackerHF.Events == null)
                    AttackerHF.Events = new List<HistoricalEvent>();
                AttackerHF.Events.Add(this);
            }


            if (DefenderCiv != null)
            {
                if (DefenderCiv.Events == null)
                    DefenderCiv.Events = new List<HistoricalEvent>();
                DefenderCiv.Events.Add(this);
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Attacker:", AttackerHF);
            EventLabel(frm, parent, ref location, "Defender:", DefenderCiv);
            EventLabel(frm, parent, ref location, "Old Owner:", SiteCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} attacked {2} at {3}.",
                                    timestring, System.Globalization.CultureInfo.CurrentCulture.TextInfo.ToTitleCase(AttackerHF.FirstName), SiteCiv,
                                    Site.AltName);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} attacked {2} at {3}.",
                                    timelinestring, AttackerHF, DefenderCiv, Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;



            var vals = new List<object> { ID, SiteID, SiteCivID, DefenderCivID, AttackerHF };


            Database.ExportWorldItem(table, vals);

        }

    }
}
