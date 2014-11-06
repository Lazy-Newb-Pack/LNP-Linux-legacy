using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFDoesInteraction : HistoricalEvent
    {
        private int? TargetHFID { get; set; }
        private HistoricalFigure TargetHF { get; set; }
        private int? DoerHFID { get; set; }
        private HistoricalFigure DoerHF { get; set; }
        private int Interaction { get; set; }

        override public Point Location { get { return Point.Empty; } }

        public HE_HFDoesInteraction(XDocument xdoc, World world)
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
                    case "doer_hfid":
                        DoerHFID = valI;
                        break;
                    case "target_hfid":
                        TargetHFID = valI;
                        break;
                    case "interaction":
                        if (!HistoricalFigure.Interactions.Contains(val))
                            HistoricalFigure.Interactions.Add(val);
                        Interaction = HistoricalFigure.Interactions.IndexOf(val);
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
            if (TargetHFID.HasValue && World.HistoricalFigures.ContainsKey(TargetHFID.Value))
                TargetHF = World.HistoricalFigures[TargetHFID.Value];
            if (DoerHFID.HasValue && World.HistoricalFigures.ContainsKey(DoerHFID.Value))
                DoerHF = World.HistoricalFigures[DoerHFID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (TargetHF != null)
            {
                if (TargetHF.Events == null)
                    TargetHF.Events = new List<HistoricalEvent>();
                TargetHF.Events.Add(this);
            }
            if (DoerHF == null) return;
            if (DoerHF.Events == null)
                DoerHF.Events = new List<HistoricalEvent>();
            DoerHF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", DoerHF);
            EventLabel(frm, parent, ref location, "Target:", TargetHF);
            EventLabel(frm, parent, ref location, "Interaction:", HistoricalFigure.Interactions[Interaction]);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("curse_vampire") || HistoricalFigure.Interactions[Interaction].ToLower().Contains("master_vampire_curse"))
                return string.Format("{0} {1} cursed {2} to prowl the night in search of blood in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("curse_werebeast"))
                return string.Format("{0} {1} cursed {2} to assume the form of a {3}-like monster every full moon in {4}.",
                    timestring, DoerHF, TargetHF,
                    "UNKNOWN", "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("werelizard_curse"))
                return string.Format("{0} {1} cursed {2} to assume the form of a lizard-like monster every full moon in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("werewolf_curse"))
                return string.Format("{0} {1} cursed {2} to assume the form of a wolf-like monster every full moon in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("werebear_curse"))
                return string.Format("{0} {1} cursed {2} to assume the form of a bear-like monster every full moon in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("lesser_vampire_curse"))
                return string.Format("{0} {1} cursed {2} to slither through the shadows in search of blood in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("minor_vampire_curse"))
                return string.Format("{0} {1} cursed {2} to endlessly lust for blood in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("curse"))
                return string.Format("{0} {1} cursed {2} to {3} in {4}.",
                    timestring, DoerHF, TargetHF,
                    Interaction, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("infected_bite"))
                return string.Format("{0} {1} bit the infected {2}, infecting in {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("murder_roar"))
                return string.Format("{0} {1} cursed {2} to kill for enjoyment in {3}.",
                    timestring, DoerHF, TargetHF,
                    "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("chosen_one"))
                return string.Format("{0} {1} chose {2} to seek out and destroy the powers of evil in {3}.",
                    timestring, DoerHF, TargetHF,
                    "UNKNOWN");
            if (HistoricalFigure.Interactions[Interaction].ToLower().Contains("dwarf_to_spawn"))
                return string.Format("{0} {1} bit {2}, mutating them into a twisted mockery of dwarvenkind {3}.",
                    timestring, DoerHF, TargetHF, "UNKNOWN");
            return timestring;
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} cursed {2}",
                        timelinestring, DoerHF != null ? DoerHF.ToString() : DoerHFID.ToString(), 
                                TargetHF != null ? TargetHF.ToString() : TargetHFID.ToString());
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, TargetHFID, DoerHFID, HistoricalFigure.Interactions[Interaction] };


            Database.ExportWorldItem(table, vals);

        }

    }
}

