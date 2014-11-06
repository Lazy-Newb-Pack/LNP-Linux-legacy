using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventCollectionClasses
{
    class EC_Duel : HistoricalEventCollection
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
        private List<int> AttackingHFID { get; set; }
        private List<HistoricalFigure> AttackingHF;
        private List<int> DefendingHFID { get; set; }
        private List<HistoricalFigure> DefendingHF;

        override public Point Location { get { return Site != null ? Site.Coords : Coords; } }

        public EC_Duel(XDocument xdoc, World world)
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
                        SubregionID = valI;
                        break;
                    case "feature_layer_id":
                        FeatureLayerID = valI;
                        break;
                    case "site_id":
                        SiteID = valI;
                        break;
                    case "coords":
                        Coords = new Point(Convert.ToInt32(val.Split(',')[0]), Convert.ToInt32(val.Split(',')[1]));
                        break;
                    case "attacking_hfid":
                        if (AttackingHFID == null)
                            AttackingHFID = new List<int>();
                        AttackingHFID.Add(valI);
                        break;
                    case "defending_hfid":
                        if (DefendingHFID == null)
                            DefendingHFID = new List<int>();
                        DefendingHFID.Add(valI);
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
            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
            if (AttackingHFID != null)
                AttackingHF = new List<HistoricalFigure>();
            LinkFieldList(AttackingHFID,
                AttackingHF, World.HistoricalFigures);
            if (DefendingHFID != null)
                DefendingHF = new List<HistoricalFigure>();
            LinkFieldList(DefendingHFID,
                DefendingHF, World.HistoricalFigures);

        }

        public override void Select(MainForm frm)
        {
            base.Select(frm);

            foreach (var tabpage in frm.MainTabEventCollectionTypes.TabPages.Cast<TabPage>().Where(tabpage => tabpage != frm.tabEventCollectionDuel))
            {
                frm.MainTabEventCollectionTypes.TabPages.Remove(tabpage);
            }
            if (!frm.MainTabEventCollectionTypes.TabPages.Contains(frm.tabEventCollectionDuel))
                frm.MainTabEventCollectionTypes.TabPages.Add(frm.tabEventCollectionDuel);

            frm.lblDuelRegion.Data = Subregion;
            frm.lblDuelSite.Data = Site;
            frm.lblDuelCoords.Data = new Coordinate(Coords);
            frm.lblDuelAttacker.Data = AttackingHF != null ? AttackingHF[0] : null;
            frm.lblDuelDefender.Data = DefendingHF != null ? DefendingHF[0] : null;
            frm.lblDuelParent.Data = ParentEventCol;
            if (StartTime != null || EndTime != null)
            {
                frm.lblDuelTime.Text = string.Format("{0} - {1}", StartTime, EndTime);
                frm.lblDuelDuration.Text = WorldTime.Duration(EndTime, StartTime);
            }
            else
            {
                frm.lblDuelTime.Text = "";
                frm.lblDuelDuration.Text = "";
            }
            frm.lblDuelOrdinal.Text = Ordinal.ToString();

            frm.lstDuelEvents.Items.Clear();
            if (Event != null)
                frm.lstDuelEvents.Items.AddRange(Event.ToArray());

            frm.grpDuelEvents.Visible = frm.lstDuelEvents.Items.Count > 0;

            if (frm.lstDuelEvents.Items.Count > 0)
                frm.lstDuelEvents.SelectedIndex = 0;

            SelectTab(frm);
        }

        internal override void Process()
        {
            base.Process();
            if (Subregion != null)
            {
                if (Subregion.DuelEventCollections == null)
                    Subregion.DuelEventCollections = new List<EC_Duel>();
                Subregion.DuelEventCollections.Add(this);
            }
            if (Site != null)
            {
                if (Site.DuelEventCollections == null)
                    Site.DuelEventCollections = new List<EC_Duel>();
                Site.DuelEventCollections.Add(this);
            }
            if (AttackingHF != null && AttackingHF.Count != 0)
            {
                if (AttackingHF[0].DuelEventCollections == null)
                    AttackingHF[0].DuelEventCollections = new List<EC_Duel>();
                AttackingHF[0].DuelEventCollections.Add(this);
            }
            if (DefendingHF == null || DefendingHF.Count == 0) return;
            if (DefendingHF[0].DuelEventCollections == null)
                DefendingHF[0].DuelEventCollections = new List<EC_Duel>();
            DefendingHF[0].DuelEventCollections.Add(this);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID };


            Database.ExportWorldItem(table, vals);

            if (AttackingHF != null)
            {
                foreach (var hf in AttackingHF)
                {
                    vals = new List<object> { ID, hf.ID };
                    Database.ExportWorldItem("EC_Duel_Attacking_HF", vals);
                }
            }
            if (DefendingHF == null) return;
            foreach (var hf in DefendingHF)
            {
                vals = new List<object> { ID, hf.ID };
                Database.ExportWorldItem("EC_Duel_Defending_HF", vals);
            }
        }

    }
}
