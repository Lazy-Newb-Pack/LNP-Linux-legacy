using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFLearnsSecret : HistoricalEvent
    {
        private int? StudentHFID { get; set; }
        private HistoricalFigure StudentHF { get; set; }
        private int? TeacherHFID { get; set; }
        private HistoricalFigure TeacherHF { get; set; }
        private int? ArtifactID { get; set; }
        private Artifact Artifact { get; set; }
        private int Interaction { get; set; }

        override public Point Location { get { return Point.Empty; } }

        public HE_HFLearnsSecret(XDocument xdoc, World world)
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
                    case "student_hfid":
                        StudentHFID = valI;
                        break;
                    case "teacher_hfid":
                        if (valI != -1)
                            TeacherHFID = valI;
                        break;
                    case "artifact_id":
                        if (valI != -1)
                            ArtifactID = valI;
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
            if (StudentHFID.HasValue && World.HistoricalFigures.ContainsKey(StudentHFID.Value))
                StudentHF = World.HistoricalFigures[StudentHFID.Value];
            if (TeacherHFID.HasValue && World.HistoricalFigures.ContainsKey(TeacherHFID.Value))
                TeacherHF = World.HistoricalFigures[TeacherHFID.Value];
            if (ArtifactID.HasValue && World.Artifacts.ContainsKey(ArtifactID.Value))
                Artifact = World.Artifacts[ArtifactID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (StudentHF != null)
            {
                if (StudentHF.Events == null)
                    StudentHF.Events = new List<HistoricalEvent>();
                StudentHF.Events.Add(this);
            }
            if (TeacherHF == null) return;
            if (TeacherHF.Events == null)
                TeacherHF.Events = new List<HistoricalEvent>();
            TeacherHF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Student:", StudentHF);
            EventLabel(frm, parent, ref location, "Teacher:", TeacherHF);
            EventLabel(frm, parent, ref location, "Artifact:", Artifact);
            EventLabel(frm, parent, ref location, "Interaction:", HistoricalFigure.Interactions[Interaction]);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            if (TeacherHF == null && Artifact != null)
            {

                switch (HistoricalFigure.Interactions[Interaction])
                {
                    case "ANIMALS_SECRET":
                        return string.Format("{0} {1} learned the secrets of the wilds from {2}.",
                            timestring, StudentHF, Artifact);
                    case "SECRET_30":
                        return string.Format("{0} {1} learned the secrets of life and death from {2}.",
                            timestring, StudentHF, Artifact);
                    case "DISCIPLINE_SECRET":
                        return string.Format("{0} {1} learned the secrets of mental discipline from {2}.",
                            timestring, StudentHF, Artifact);
                    case "WISDOM_SECRET":
                        return string.Format("{0} {1} learned the secrets of wisdom from {2}.",
                            timestring, StudentHF, Artifact);
                    case "FOOD_SECRET":
                        return string.Format("{0} {1} learned the secrets of conjuring food from {2}.",
                            timestring, StudentHF, Artifact);
                    case "WAR_SECRET":
                        return string.Format("{0} {1} learned the secret of berserking from {2}.",
                            timestring, StudentHF, Artifact);
                    default:
                        return string.Format("{0} {1} learned {2} from {3}.",
                            timestring, StudentHF, HistoricalFigure.Interactions[Interaction], Artifact);
                }
            }
            switch (HistoricalFigure.Interactions[Interaction])
            {
                case "ANIMALS_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of the wilds.",
                        timestring, TeacherHF, StudentHF);
                case "SECRET_5":
                case "SECRET_6":
                case "SECRET_12":
                    return string.Format("{0} {1} taught {2} the secrets of life and death.",
                        timestring, TeacherHF, StudentHF);
                case "DISCIPLINE_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of mental discipline.",
                        timestring, TeacherHF, StudentHF);
                case "WAR_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of bezerking.",
                        timestring, TeacherHF, StudentHF);
                case "SUMMONER":
                    return string.Format("{0} {1} taught {2} the secrets of summoning.",
                        timestring, TeacherHF, StudentHF);
                case "SUICIDE_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of living death.",
                        timestring, TeacherHF, StudentHF);
                case "MERCY_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of mercy and prophecy.",
                        timestring, TeacherHF, StudentHF);
                case "NATURE_SECRET":
                    return string.Format("{0} {1} taught {2} the secrets of nature.",
                        timestring, TeacherHF, StudentHF);
                default:
                    return string.Format("{0} {1} taught {2} {3}.",
                        timestring, TeacherHF, StudentHF, HistoricalFigure.Interactions[Interaction]);
            }
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            if (TeacherHF == null && Artifact != null)
                return string.Format("{0} {1} learned secrets from {2}",
                            timelinestring, StudentHF, Artifact);
            return string.Format("{0} {1} taught secrets by {2}",
                timelinestring, StudentHF, TeacherHF);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, StudentHFID, TeacherHFID, ArtifactID, HistoricalFigure.Interactions[Interaction] };


            Database.ExportWorldItem(table, vals);

        }

    }
}