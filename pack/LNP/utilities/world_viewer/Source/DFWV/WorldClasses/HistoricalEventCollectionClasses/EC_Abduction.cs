using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventCollectionClasses
{
    class EC_Abduction : HistoricalEventCollection
    {
        private int? SubregionID { get; set; }
        private Region Subregion { get; set; }
        private int? FeatureLayerID { get; set; }
        private int? SiteID { get; set; }
        private Site Site { get; set; }
        private Point Coords { get; set; }
        private int? ParentEventCol_ { get; set; }
        private HistoricalEventCollection ParentEventCol { get; set; }
        private int Ordinal { get; set; }
        private int? DefendingEnid { get; set; }
        private Entity DefendingEn { get; set; }
        private int? AttackingEnid { get; set; }
        private Entity AttackingEn { get; set; }
        private List<int> EventCol_ { get; set; }
        private List<HistoricalEventCollection> EventCol { get; set; }

        override public Point Location { get { return Site.Coords; } }

        public EC_Abduction(XDocument xdoc, World world)
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
                    case "start_year":
                    case "start_seconds72":
                    case "end_year":
                    case "end_seconds72":
                    case "event":
                    case "type":
                        break;

                    case "ordinal":
                        Ordinal = valI;
                        break;
                    case "parent_eventcol":
                        ParentEventCol_ = valI;
                        break;
                    case "subregion_id":
                        if (valI != -1)
                            SubregionID = valI;
                        break;
                    case "feature_layer_id":
                        if (valI != -1)
                            FeatureLayerID = valI;
                        break;
                    case "eventcol":
                        if (EventCol_ == null)
                            EventCol_ = new List<int>();
                        EventCol_.Add(valI);
                        break;
                    case "site_id":
                        if (valI != -1)
                            SiteID = valI;
                        break;
                    case "coords":
                        Coords = new Point(Convert.ToInt32(val.Split(',')[0]), Convert.ToInt32(val.Split(',')[1]));
                        break;
                    case "defending_enid":
                        DefendingEnid = valI;
                        break;
                    case "attacking_enid":
                        AttackingEnid = valI;
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
            if (ParentEventCol_.HasValue && World.HistoricalEventCollections.ContainsKey(ParentEventCol_.Value))
                ParentEventCol = World.HistoricalEventCollections[ParentEventCol_.Value];
            if (EventCol_ != null)
                EventCol = new List<HistoricalEventCollection>();
            LinkFieldList(EventCol_,
                EventCol, World.HistoricalEventCollections);

            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
            if (DefendingEnid.HasValue && World.Entities.ContainsKey(DefendingEnid.Value))
                DefendingEn = World.Entities[DefendingEnid.Value];
            if (AttackingEnid.HasValue && World.Entities.ContainsKey(AttackingEnid.Value))
                AttackingEn = World.Entities[AttackingEnid.Value];

        }

        public override void Select(MainForm frm)
        {

            base.Select(frm);

            foreach (var tabpage in frm.MainTabEventCollectionTypes.TabPages.Cast<TabPage>().Where(tabpage => tabpage != frm.tabEventCollectionAbduction))
            {
                frm.MainTabEventCollectionTypes.TabPages.Remove(tabpage);
            }
            if (!frm.MainTabEventCollectionTypes.TabPages.Contains(frm.tabEventCollectionAbduction))
                frm.MainTabEventCollectionTypes.TabPages.Add(frm.tabEventCollectionAbduction);

            frm.lblAbductionRegion.Data = Subregion;
            frm.lblAbductionSite.Data = Site;
            frm.lblAbductionCoords.Data = new Coordinate(Coords);
            frm.lblAbductionAttacker.Data = AttackingEn;
            frm.lblAbductionDefender.Data = DefendingEn;
            frm.lblAbductionParent.Data = ParentEventCol;
            if (StartTime != null || EndTime != null)
            {
                frm.lblAbductionTime.Text = string.Format("{0} - {1}", StartTime, EndTime);
                frm.lblAbductionDuration.Text = WorldTime.Duration(EndTime, StartTime);
            }
            else
            {
                frm.lblAbductionTime.Text = "";
                frm.lblAbductionDuration.Text = "";
            }
            frm.lblAbductionOrdinal.Text = Ordinal.ToString();

            frm.lstAbductionEvents.Items.Clear();
            if (Event != null)
                frm.lstAbductionEvents.Items.AddRange(Event.ToArray());

            frm.grpAbductionEvents.Visible = frm.lstAbductionEvents.Items.Count > 0;

            if (frm.lstAbductionEvents.Items.Count > 0)
                frm.lstAbductionEvents.SelectedIndex = 0;

            frm.lstAbductionEventCols.Items.Clear();
            if (EventCol != null)
                frm.lstAbductionEventCols.Items.AddRange(EventCol.ToArray());

            frm.grpAbductionEventCols.Visible = frm.lstAbductionEventCols.Items.Count > 0;

            SelectTab(frm);
        }

        internal override void Process()
        {
            base.Process();
            if (Subregion != null)
            {
                if (Subregion.AbductionEventCollections == null)
                    Subregion.AbductionEventCollections = new List<EC_Abduction>();
                Subregion.AbductionEventCollections.Add(this);
            }
            if (Site != null)
            {
                if (Site.AbductionEventCollections == null)
                    Site.AbductionEventCollections = new List<EC_Abduction>();
                Site.AbductionEventCollections.Add(this);
            }
            if (AttackingEn.AbductionEventCollections == null)
                AttackingEn.AbductionEventCollections = new List<EC_Abduction>();
            AttackingEn.AbductionEventCollections.Add(this);
            if (DefendingEn.AbductionEventCollections == null)
                DefendingEn.AbductionEventCollections = new List<EC_Abduction>();
            DefendingEn.AbductionEventCollections.Add(this);

        }

        internal override void Evaluate()
        {
            base.Evaluate();

            // For abduction event collections, if we have a new HF entity link following an hf abducted link, 
            //      then we can say that the hf entity link is of type "prisoner" or "former prisoner", and the HF in 
            //       Add HF Entity link is the one that was abducted in our abduction event.
            for (var i = 1; i < Event.Count; i++)
            {
                if (HistoricalEvent.Types[Event[i].Type] != "add hf entity link" ||
                    HistoricalEvent.Types[Event[i - 1].Type] != "hf abducted")
                    continue;
                var abductedHF = ((HE_HFAbducted)Event[i - 1]).TargetHF;
                var AddLinkEvent = ((HE_AddHFEntityLink)Event[i]);
                AddLinkEvent.HF = abductedHF;

                if (abductedHF.EntityLinks.ContainsKey("prisoner"))
                {
                    foreach (var entityLink in abductedHF.EntityLinks["prisoner"].Where(entityLink => entityLink.Entity == AddLinkEvent.Civ))
                    {
                        AddLinkEvent.EntityLink = entityLink;
                        break;
                    }
                }
                if (AddLinkEvent.EntityLink.HF == null &&
                    abductedHF.EntityLinks.ContainsKey("former prisoner"))
                {
                    foreach (var entityLink in abductedHF.EntityLinks["former prisoner"].Where(entityLink => entityLink.Entity == AddLinkEvent.Civ))
                    {
                        AddLinkEvent.EntityLink = entityLink;
                        break;
                    }
                }

            }
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, ParentEventCol, Ordinal, AttackingEnid, DefendingEnid, SiteID, SubregionID, FeatureLayerID };

            if (Coords.IsEmpty)
                vals.Add(DBNull.Value);
            else
                vals.Add(Coords.X + "," + Coords.Y);

            Database.ExportWorldItem(table, vals);

        }

    }
}
