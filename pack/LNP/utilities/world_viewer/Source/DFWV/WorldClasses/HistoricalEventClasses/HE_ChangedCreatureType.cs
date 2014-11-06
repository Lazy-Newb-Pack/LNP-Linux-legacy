using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_ChangedCreatureType : HistoricalEvent
    {
        private int? ChangeeHFID { get; set; }
        private HistoricalFigure ChangeeHF { get; set; }
        private int? ChangerHFID { get; set; }
        private HistoricalFigure ChangerHF { get; set; }
        private string OldRace_ { get; set; }
        private Race OldRace { get; set; }
        private int OldCaste { get; set; }
        private string NewRace_ { get; set; }
        private Race NewRace { get; set; }
        private int NewCaste { get; set; }

        override public Point Location { get { return Point.Empty ; } }

        public HE_ChangedCreatureType(XDocument xdoc, World world)
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
                    case "changee_hfid":
                        ChangeeHFID = valI;
                        break;
                    case "changer_hfid":
                        ChangerHFID = valI;
                        break;
                    case "old_race":
                        OldRace_ = val;
                        break;
                    case "old_caste":
                        if (!HistoricalFigure.Castes.Contains(val))
                            HistoricalFigure.Castes.Add(val);
                        OldCaste = HistoricalFigure.Castes.IndexOf(val);
                        break;
                    case "new_race":
                        NewRace_ = val;
                        break;
                    case "new_caste":
                        if (!HistoricalFigure.Castes.Contains(val))
                            HistoricalFigure.Castes.Add(val);
                        NewCaste = HistoricalFigure.Castes.IndexOf(val);
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
            if (ChangeeHFID.HasValue && World.HistoricalFigures.ContainsKey(ChangeeHFID.Value))
                ChangeeHF = World.HistoricalFigures[ChangeeHFID.Value];
            if (ChangerHFID.HasValue && World.HistoricalFigures.ContainsKey(ChangerHFID.Value))
                ChangerHF = World.HistoricalFigures[ChangerHFID.Value];
            if (OldRace_ != null)
            {
                OldRace = World.GetAddRace(OldRace_);
                OldRace_ = null;
            }
            if (NewRace_ == null) return;
            NewRace = World.GetAddRace(NewRace_);
            NewRace_ = null;
        }

        internal override void Process()
        {
            base.Process();
            if (ChangeeHF != null)
            {
                if (ChangeeHF.Events == null)
                    ChangeeHF.Events = new List<HistoricalEvent>();
                ChangeeHF.Events.Add(this);
            }
            if (ChangerHF == null) return;
            if (ChangerHF.Events == null)
                ChangerHF.Events = new List<HistoricalEvent>();
            ChangerHF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Changer:", ChangerHF);
            EventLabel(frm, parent, ref location, "Changee:", ChangeeHF);
            EventLabel(frm, parent, ref location, "Old Race:", OldRace);
            EventLabel(frm, parent, ref location, "Old Caste:", HistoricalFigure.Castes[OldCaste]);
            EventLabel(frm, parent, ref location, "New Race:", NewRace);
            EventLabel(frm, parent, ref location, "New Caste:", HistoricalFigure.Castes[NewCaste]);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} {2} changed the {3} {4} from {5} into {6}.",
                                    timestring, ChangerHF.Race, ChangerHF,
                                    ChangeeHF.Race, ChangeeHF, OldRace,
                                    NewRace);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} transformed {2}.",
                        timelinestring, ChangerHF,
                                    ChangeeHF);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, ChangeeHFID, ChangerHFID, OldRace.ToString(), HistoricalFigure.Castes[OldCaste], NewRace.ToString(), HistoricalFigure.Castes[NewCaste] };


            Database.ExportWorldItem(table, vals);

        }

    }
}


