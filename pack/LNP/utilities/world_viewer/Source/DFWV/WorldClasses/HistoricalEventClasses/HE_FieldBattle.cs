using System;
using System.Collections.Generic;
using System.Xml.Linq;
using System.Drawing;
using System.Windows.Forms;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_FieldBattle : HistoricalEvent
    {
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private Point Coords { get; set; }
        private int? DefenderCivID { get; set; }
        private Entity DefenderCiv { get; set; }
        private int? AttackerCivID { get; set; }
        private Entity AttackerCiv { get; set; }
        private int? AttackerGeneralHFID { get; set; }
        private HistoricalFigure AttackerGeneralHF { get; set; }
        private int? DefenderGeneralHFID { get; set; }
        private HistoricalFigure DefenderGeneralHF { get; set; }

        override public Point Location { get { return Coords; } }

        public HE_FieldBattle(XDocument xdoc, World world)
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
                    case "subregion_id":
                        if (valI != -1)
                            SubregionID = valI;
                        break;
                    case "feature_layer_id":
                        if (valI != -1)
                            FeatureLayerID = valI;
                        break;
                    case "coords":
                        if (val != "-1,-1")
                            Coords = new Point(Convert.ToInt32(val.Split(',')[0]), Convert.ToInt32(val.Split(',')[1]));
                        break;
                    case "attacker_civ_id":
                        AttackerCivID = valI;
                        break;
                    case "defender_civ_id":
                        DefenderCivID = valI;
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
            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
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
            if (Subregion.FieldBattleEvents == null)
                Subregion.FieldBattleEvents = new List<HE_FieldBattle>();
            Subregion.FieldBattleEvents.Add(this);
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

            if (AttackerCiv != null)
            {
                if (AttackerCiv.Events == null)
                    AttackerCiv.Events = new List<HistoricalEvent>();
                AttackerCiv.Events.Add(this);
            }


            if (DefenderCiv == null) return;
            if (AttackerCiv.Events == null)
                AttackerCiv.Events = new List<HistoricalEvent>();
            AttackerCiv.Events.Add(this);
        }


        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Attacker:", AttackerCiv);
            EventLabel(frm, parent, ref location, "--General:", AttackerGeneralHF);
            EventLabel(frm, parent, ref location, "Defender:", DefenderCiv);
            EventLabel(frm, parent, ref location, "--General:", DefenderGeneralHF);
            EventLabel(frm, parent, ref location, "Region:", Subregion);
            EventLabel(frm, parent, ref location, "Coords:", new Coordinate(Coords));
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} attacked {2} in {3}. \nThe {4} {5} led the attack, \nand the defenders were led by the {6} {7}.",
                            timestring, AttackerCiv, DefenderCiv,
                            Subregion, AttackerGeneralHF.Race, AttackerGeneralHF,
                            DefenderGeneralHF.Race, DefenderGeneralHF);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} attacked {2} in {3}.",
                        timelinestring, AttackerCiv, DefenderCiv,
                            Subregion);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, SubregionID, FeatureLayerID, AttackerCivID, AttackerGeneralHFID, DefenderCivID, DefenderGeneralHFID };

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);
            

            Database.ExportWorldItem(table, vals);

        }

    }
}
