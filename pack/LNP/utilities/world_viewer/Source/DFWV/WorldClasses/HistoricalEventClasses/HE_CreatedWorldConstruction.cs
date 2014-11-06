using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_CreatedWorldConstruction : HistoricalEvent
    {
        private int? WCID { get; set; }
        private WorldConstruction WC { get; set; }
        private int? SiteCivID { get; set; }
        public Entity SiteCiv { get; private set; }
        private int? CivID { get; set; }
        public Entity Civ { get; private set; }
        private int? MasterWCID { get; set; }
        public WorldConstruction MasterWC { get; private set; }
        private int? SiteID1 { get; set; }
        public Site Site1 { get; private set; }
        private int? SiteID2 { get; set; }
        public Site Site2 { get; private set; }

        override public Point Location { get { return Site1.Location; } }

        public HE_CreatedWorldConstruction(XDocument xdoc, World world)
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
                    case "site_id1":
                        SiteID1 = valI;
                        break;
                    case "site_id2":
                        SiteID2 = valI;
                        break;
                    case "wcid":
                        WCID = valI;
                        break;
                    case "master_wcid":
                        if (valI != -1)
                            MasterWCID = valI;
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
            if (CivID.HasValue && World.Entities.ContainsKey(CivID.Value))
                Civ = World.Entities[CivID.Value];
            if (SiteCivID.HasValue && World.Entities.ContainsKey(SiteCivID.Value))
                SiteCiv = World.Entities[SiteCivID.Value];
            if (WCID.HasValue)
            {
                if (World.WorldConstructions.ContainsKey(WCID.Value))
                    WC = World.WorldConstructions[WCID.Value];
                else
                {
                    WC = new WorldConstruction(WCID.Value, World);
                    World.WorldConstructions.Add(WCID.Value, WC);
                }
                if (MasterWCID.HasValue && MasterWCID != -1)
                {
                    if (World.WorldConstructions.ContainsKey(MasterWCID.Value))
                        MasterWC = World.WorldConstructions[MasterWCID.Value];
                    else
                    {
                        MasterWC = new WorldConstruction(MasterWCID.Value, World);
                        World.WorldConstructions.Add(MasterWCID.Value, MasterWC);
                    }
                }
            }
            if (SiteID1.HasValue && World.Sites.ContainsKey(SiteID1.Value))
                Site1 = World.Sites[SiteID1.Value];
            if (SiteID2.HasValue && World.Sites.ContainsKey(SiteID2.Value))
                Site2 = World.Sites[SiteID2.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (MasterWC != null)
            {
                if (MasterWC.Subconstructions == null)
                    MasterWC.Subconstructions = new List<WorldConstruction>();
                MasterWC.Subconstructions.Add(WC);

                WC.MasterWC = MasterWC;
            }
            WC.CreatedEvent = this;

            if (Site1 != null)
                WC.From = Site1;
            if (Site2 != null)
                WC.To = Site2;


            if (Site1 != null && Site1.ConstructionLinks == null)
                Site1.ConstructionLinks = new List<WorldConstruction>();
            Site1.ConstructionLinks.Add(WC);
            if (Site2 != null && Site2.ConstructionLinks == null)
                Site2.ConstructionLinks = new List<WorldConstruction>();
            Site2.ConstructionLinks.Add(WC);

            if (Civ != null && Civ.ConstructionsBuilt == null)
                Civ.ConstructionsBuilt = new List<WorldConstruction>();
            Civ.ConstructionsBuilt.Add(WC);
            if (SiteCiv != null && SiteCiv.ConstructionsBuilt == null)
                SiteCiv.ConstructionsBuilt = new List<WorldConstruction>();
            SiteCiv.ConstructionsBuilt.Add(WC);

            if (SiteCiv != null)
            {
                if (SiteCiv.Events == null)
                    SiteCiv.Events = new List<HistoricalEvent>();
                SiteCiv.Events.Add(this);
            }

            if (Civ == null) return;
            if (Civ.Events == null)
                Civ.Events = new List<HistoricalEvent>();
            Civ.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "Civ:", Civ);
            EventLabel(frm, parent, ref location, "Owner:", SiteCiv);
            EventLabel(frm, parent, ref location, "Construction:", WC);
            EventLabel(frm, parent, ref location, "Master:", MasterWC);
            EventLabel(frm, parent, ref location, "From:", Site1);
            EventLabel(frm, parent, ref location, "To:", Site2);
        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            return string.Format("{0} {1} of {2} finished contruction of {3} connecting {4} and {5}.",
                            timestring, SiteCiv, Civ, "CONSTRUCTION " + WC,
                            Site1, Site2);
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();

            return string.Format("{0} {1} built road from {2} to {3}.",
                        timelinestring, Civ,
                            Site1, Site2);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, WCID, MasterWCID, SiteCivID, CivID, SiteID1, SiteID2  };


            Database.ExportWorldItem(table, vals);

        }

    }
}