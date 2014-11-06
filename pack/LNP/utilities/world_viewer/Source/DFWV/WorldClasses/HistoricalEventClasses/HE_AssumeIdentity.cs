using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Missing Details:  IdentityID doesn't associate with anything
    class HE_AssumeIdentity : HistoricalEvent
    {
        private int? TricksterHFID { get; set; }
        private HistoricalFigure TricksterHF { get; set; }
        private int? TargetEnID { get; set; }
        private Entity TargetEn { get; set; }
        private int? IdentityID { get; set; }

        public HistoricalFigure Identity { get; set; }

        override public Point Location { get { return TargetEn.Location; } }

        public HE_AssumeIdentity(XDocument xdoc, World world)
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
                    case "trickster_hfid":
                        TricksterHFID = valI;
                        break;
                    case "identity_id":
                        IdentityID = valI;
                        break;
                    case "target_enid":
                        TargetEnID = valI;
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
            if (TricksterHFID.HasValue && World.HistoricalFigures.ContainsKey(TricksterHFID.Value))
                TricksterHF = World.HistoricalFigures[TricksterHFID.Value];
            if (TargetEnID.HasValue && World.Entities.ContainsKey(TargetEnID.Value))
                TargetEn = World.Entities[TargetEnID.Value];
            //if (IdentityID.HasValue && World.HistoricalFigures.ContainsKey(IdentityID.Value))
            //    Identity = World.HistoricalFigures[IdentityID.Value];
        }


        internal override void Process()
        {
            base.Process();
            if (TricksterHF != null)
            {
                if (TricksterHF.Events == null)
                    TricksterHF.Events = new List<HistoricalEvent>();
                TricksterHF.Events.Add(this);
            }

            if (TargetEn == null) return;
            if (TargetEn.Events == null)
                TargetEn.Events = new List<HistoricalEvent>();
            TargetEn.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Trickster:", TricksterHF);
            EventLabel(frm, parent, ref location, "Identity ID:", IdentityID.ToString());
            EventLabel(frm, parent, ref location, "Target Ent:", TargetEn);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} {2} fooled {3} into believing it was {4}.",
                            timestring, TricksterHF.Race, TricksterHF,
                            TargetEn, Identity == null ? "Identity ID: " + IdentityID : Identity.ToString());
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} assumed an identity to {2}",
                        timelinestring, TricksterHF,
                            TargetEn);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, TricksterHFID, TargetEnID, IdentityID };


            Database.ExportWorldItem(table, vals);

        }

    }
}


