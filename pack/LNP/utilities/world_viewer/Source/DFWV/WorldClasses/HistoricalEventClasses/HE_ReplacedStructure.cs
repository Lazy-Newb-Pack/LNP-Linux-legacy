using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_ReplacedStructure : HistoricalEvent
    {
        private int? SiteID { get; set; }
        public Site Site { get; set; }
        private int? OldStructureID { get; set; }
        private Structure OldStructure { get; set; }
        private int? NewStructureID { get; set; }
        private Structure NewStructure { get; set; }
        private int? SiteCivID { get; set; }
        public Entity SiteCiv { get; set; }
        private int? CivID { get; set; }
        public Entity Civ { get; set; }

        override public Point Location { get { return Site.Location; } }

        public HE_ReplacedStructure(XDocument xdoc, World world)
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
                    case "civ_id":
                        CivID = valI;
                        break;
                    case "site_civ_id":
                        SiteCivID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "old_ab_id":
                        OldStructureID = valI;
                        break;
                    case "new_ab_id":
                        NewStructureID = valI;
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
            if (CivID.HasValue && World.Entities.ContainsKey(CivID.Value))
                Civ = World.Entities[CivID.Value];
            if (SiteCivID.HasValue && World.Entities.ContainsKey(SiteCivID.Value))
                SiteCiv = World.Entities[SiteCivID.Value];

            if (OldStructureID.HasValue && OldStructureID.Value != -1 && Site != null)
            {
                OldStructure = Site.GetStructure(OldStructureID.Value);
                if (OldStructure == null)
                {
                    OldStructure = new Structure(Site, OldStructureID.Value, World);
                    Site.AddStructure(OldStructure);
                }
            }

            if (NewStructureID.HasValue && NewStructureID.Value != -1 && Site != null)
            {
                NewStructure = Site.GetStructure(NewStructureID.Value);
                if (NewStructure == null)
                {
                    NewStructure = new Structure(Site, NewStructureID.Value, World);
                    Site.AddStructure(NewStructure);
                }
            }
        }

        internal override void Process()
        {
            base.Process();
            if (OldStructure != null)
            {
                if (OldStructure.Events == null)
                    OldStructure.Events = new List<HistoricalEvent>();
                OldStructure.Events.Add(this);
            }

            if (NewStructure != null)
            {
                if (NewStructure.Events == null)
                    NewStructure.Events = new List<HistoricalEvent>();
                NewStructure.Events.Add(this);
            }

            if (SiteCiv != null)
            {
                if (SiteCiv.Events == null)
                    SiteCiv.Events = new List<HistoricalEvent>();
                SiteCiv.Events.Add(this);
            }

            if (Civ != null)
            {
                if (Civ.Events == null)
                    Civ.Events = new List<HistoricalEvent>();
                Civ.Events.Add(this);
            }

        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            if (Civ != null)
                EventLabel(frm, parent, ref location, "Civ:", Civ);
            if (SiteCiv != null)
                EventLabel(frm, parent, ref location, "Owner:", SiteCiv);

            EventLabel(frm, parent, ref location, "Site:", Site);
            EventLabel(frm, parent, ref location, "Old Structure:", OldStructure);
            EventLabel(frm, parent, ref location, "New Structure:", NewStructure);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();


            

            if (SiteCiv == null)
                return string.Format("{0} {1} replaced {2} in {3} with {4}.",
                                timestring, Civ, "UNKNOWN",
                                Site.AltName, "UNKNOWN");

            return string.Format("{0} {1} of {2} replaced {3} in {4} with {5}.",
                timestring, SiteCiv, Civ, "UNKNOWN",
                Site.AltName, "UNKNOWN");
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} replaced a structure in {2}.",
                        timelinestring, Civ,
                                Site.AltName);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;



            var vals = new List<object> { ID, SiteID, SiteCivID, CivID, OldStructureID, NewStructureID};


            Database.ExportWorldItem(table, vals);

        }

    }
}
