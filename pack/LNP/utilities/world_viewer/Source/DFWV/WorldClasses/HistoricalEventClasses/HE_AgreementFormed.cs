using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    //TODO: Verify new event
    class HE_AgreementFormed : HistoricalEvent
    {
        public int AgreementID { get; set; }
        public God God { get; set; }
        public HistoricalFigure HF { get; set; }
        public Site Site { get; set; }
        public Artifact Artifact { get; set; }

        public int? ConcluderHFID { get; set; }
        public HistoricalFigure ConcluderHF { get; set; }
        public int? AgreementSubjectID { get; set; }
        public string Reason { get; set; }

        public HE_AgreementFormed(XDocument xdoc, World world)
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
                    case "agreement_id":
                        AgreementID = valI;
                        break;
                    case "concluder_hfid":
                        ConcluderHFID = valI;
                        break;
                    case "agreement_subject_id":
                        AgreementSubjectID = valI;
                        break;
                    case "reason":
                        Reason = val;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Agreement ID:", AgreementID.ToString());
            EventLabel(frm, parent, ref location, "God", God);
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Artifact:", Artifact);
            EventLabel(frm, parent, ref location, "Concluder HF:", ConcluderHF);
            EventLabel(frm, parent, ref location, "Agreement Subject ID:", AgreementSubjectID.ToString());
            EventLabel(frm, parent, ref location, "Reason:", Reason);

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (!ConcluderHFID.HasValue)
                return string.Format("{0} {1} aided the {2} {3} in becoming a permanent part of the living world that great fortresses might be raised and tested in siege. " +
                            "The ritual took place in {4} using {5}",
                            timestring,
                            God != null ? God.ToString() : "UNKNOWN",
                            HF != null ? HF.Race.ToString() : "UNKNOWN",
                            HF != null ? HF.ToString() : "UNKNOWN",
                            Site != null ? Site.ToString() : "UNKNOWN",
                            Artifact != null ? Artifact.ToString() : "UNKNOWN"
                            );
            else
                return string.Format("{0} Agreement formed" ,
                            timestring
                            );
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (!ConcluderHFID.HasValue)
                return string.Format("{0} {1} performed ritual at {2} with {3}.",
                    timelinestring,
                    HF != null ? HF.ToString() : "UNKNOWN",
                    Site != null ? Site.ToString() : "UNKNOWN",
                    Artifact != null ? Artifact.ToString() : "UNKNOWN");
            else
                return string.Format("{0} Agreement formed" ,
                            timelinestring
                            );
        }

        internal override void Export(string table)
        {
            base.Export(table);

            table = GetType().Name;

            var vals = new List<object> { ID, AgreementID, 
                HF != null ? HF.ID : -1, 
                Site != null ? Site.ID : -1, 
                Artifact != null ? Artifact.ID : -1,
                ConcluderHFID.HasValue ? ConcluderHFID.Value : -1,
                AgreementSubjectID.HasValue ? AgreementSubjectID.Value : -1,
                Reason            
            };

            Database.ExportWorldItem(table, vals);

        }

    }
}