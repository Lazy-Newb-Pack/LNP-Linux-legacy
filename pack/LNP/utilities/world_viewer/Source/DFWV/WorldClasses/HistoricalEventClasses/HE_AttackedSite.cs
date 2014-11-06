using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_AttackedSite : HistoricalEvent
    {

        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private int? SiteCivID { get; set; }
        private Entity SiteCiv { get; set; }

        private int? AttackerCivID { get; set; }
        private Entity AttackerCiv { get; set; }
        private int? DefenderCivID { get; set; }
        private Entity DefenderCiv { get; set; }
        private int? AttackerGeneralHFID { get; set; }
        private HistoricalFigure AttackerGeneralHF { get; set; }
        private int? DefenderGeneralHFID { get; set; }
        private HistoricalFigure DefenderGeneralHF { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_AttackedSite(XDocument xdoc, World world)
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
                    case "defender_civ_id":
                        DefenderCivID = valI;
                        break;
                    case "attacker_civ_id":
                        AttackerCivID = valI;
                        break;
                    case "site_civ_id":
                        SiteCivID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "attacker_general_hfid":
                        AttackerGeneralHFID = valI;
                        break;
                    case "defender_general_hfid":
                        DefenderGeneralHFID = valI;
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
            if (AttackerGeneralHFID.HasValue && World.HistoricalFigures.ContainsKey(AttackerGeneralHFID.Value))
                AttackerGeneralHF = World.HistoricalFigures[AttackerGeneralHFID.Value];
            if (DefenderGeneralHFID.HasValue && World.HistoricalFigures.ContainsKey(DefenderGeneralHFID.Value))
                DefenderGeneralHF = World.HistoricalFigures[DefenderGeneralHFID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (Site.AttackedEvents == null)
                Site.AttackedEvents = new List<HE_AttackedSite>();
            Site.AttackedEvents.Add(this);
            if (AttackerGeneralHF != null)
            {
                if (AttackerGeneralHF.Events == null)
                    AttackerGeneralHF.Events = new List<HistoricalEvent>();
                AttackerGeneralHF.Events.Add(this);
            }
            if (DefenderGeneralHF != null)
            {
                if (DefenderGeneralHF.Events == null)
                    DefenderGeneralHF.Events = new List<HistoricalEvent>();
                DefenderGeneralHF.Events.Add(this);
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
            if (DefenderCiv == null) return;
            if (DefenderCiv.Events == null)
                DefenderCiv.Events = new List<HistoricalEvent>();
            DefenderCiv.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Attacker:", AttackerCiv);
            EventLabel(frm, parent, ref location, "--General:", AttackerGeneralHF);
            EventLabel(frm, parent, ref location, "Defender:", DefenderCiv);
            EventLabel(frm, parent, ref location, "--General:", DefenderGeneralHF);
            EventLabel(frm, parent, ref location, "Owners:", SiteCiv);
            EventLabel(frm, parent, ref location, "Site:", Site);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (DefenderGeneralHF == null)
                return string.Format("{0} {1} attacked {2} of {3} at {4}. \n" +
                                "The {5} {6} led the attack.",
                                timestring, AttackerCiv, SiteCiv, DefenderCiv,
                                Site.AltName, AttackerGeneralHF.Race, AttackerGeneralHF);
            return string.Format("{0} {1} attacked {2} of {3} at {4}. \n" +
                                 "The {5} {6} led the attack, \nand the defenders were led by the {7} {8}.",
                timestring, AttackerCiv, SiteCiv, DefenderCiv,
                Site.AltName, AttackerGeneralHF.Race, AttackerGeneralHF,
                DefenderGeneralHF.Race, DefenderGeneralHF);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} attacked {2} at {3}",
                        timelinestring, AttackerCiv, DefenderCiv,
                                Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            var vals = new List<object> { ID, SiteID, SiteCivID, AttackerCivID, DefenderCivID, AttackerGeneralHFID, DefenderGeneralHFID };


            Database.ExportWorldItem(table, vals);

        }

    }
}

