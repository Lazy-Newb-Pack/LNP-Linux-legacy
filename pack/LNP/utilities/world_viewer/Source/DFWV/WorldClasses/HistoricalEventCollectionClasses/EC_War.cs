using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using System.Globalization;

namespace DFWV.WorldClasses.HistoricalEventCollectionClasses
{
    struct WarData
    {
        public int AttackingHFs;
        public int AttackingSquads;
        public int AttackingNumber;
        public int AttackingDeaths;
        public int AttackingWins;
        public int AttackingHFDeaths;

        public int DefendingHFs;
        public int DefendingSquads;
        public int DefendingNumber;
        public int DefendingDeaths;
        public int DefendingWins;
        public int DefendingHFDeaths;

        public int NonCombatHFs;
    }


    class EC_War : HistoricalEventCollection
    {
        private List<int> EventCol_ { get; set; }
        public List<HistoricalEventCollection> EventCol { get; private set; }
        private int? AggressorEntID { get; set; }
        public Entity AggressorEnt { get; private set; }
        private int? DefenderEntID { get; set; }
        public Entity DefenderEnt { get; private set; }
        public WarData WarData;

        override public Point Location { get { return AggressorEnt.Location; } }

        public EC_War(XDocument xdoc, World world)
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
                    case "eventcol":
                        if (EventCol_ == null)
                            EventCol_ = new List<int>();
                        EventCol_.Add(valI);
                        break;
                    case "name":
                        Name = CultureInfo.CurrentCulture.TextInfo.ToTitleCase(val);
                        break;
                    case "aggressor_ent_id":
                        AggressorEntID = valI;
                        break;
                    case "defender_ent_id":
                        DefenderEntID = valI;
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
            if (AggressorEntID.HasValue && World.Entities.ContainsKey(AggressorEntID.Value))
                AggressorEnt = World.Entities[AggressorEntID.Value];
            if (DefenderEntID.HasValue && World.Entities.ContainsKey(DefenderEntID.Value))
                DefenderEnt = World.Entities[DefenderEntID.Value];

            if (EventCol_ != null)
                EventCol = new List<HistoricalEventCollection>();
            LinkFieldList(EventCol_,
                EventCol, World.HistoricalEventCollections);

        }

        public override void Select(MainForm frm)
        {
            base.Select(frm);

            foreach (var tabpage in frm.MainTabEventCollectionTypes.TabPages.Cast<TabPage>().Where(tabpage => tabpage != frm.tabEventCollectionWar))
            {
                frm.MainTabEventCollectionTypes.TabPages.Remove(tabpage);
            }
            if (!frm.MainTabEventCollectionTypes.TabPages.Contains(frm.tabEventCollectionWar))
                frm.MainTabEventCollectionTypes.TabPages.Add(frm.tabEventCollectionWar);

            frm.lblWarName.Text = ToString();
            if (StartTime != null || EndTime != null)
            {
                frm.lblWarTime.Text = string.Format("{0} - {1}", StartTime, (EndTime == WorldTime.Present ? "" : EndTime.ToString()));
                frm.lblWarDuration.Text = WorldTime.Duration(EndTime, StartTime);
            }
            else
            {
                frm.lblWarTime.Text = "";
                frm.lblWarDuration.Text = "";
            }

            frm.lblWarAggressor.Data = AggressorEnt;
            frm.lblWarDefender.Data = DefenderEnt;

            frm.lstWarEventCols.Items.Clear();
            if (EventCol != null)
                frm.lstWarEventCols.Items.AddRange(EventCol.ToArray());

            frm.grpWarEventCols.Visible = frm.lstWarEventCols.Items.Count > 0;

            frm.lstWarEvents.Items.Clear();
            if (Event != null)
                frm.lstWarEvents.Items.AddRange(Event.ToArray());

            frm.grpWarEvents.Visible = frm.lstWarEvents.Items.Count > 0;
            if (frm.lstWarEvents.Items.Count > 0)
                frm.lstWarEvents.SelectedIndex = 0;

            frm.lblWarAggressorCombatants.Text = WarData.AttackingNumber.ToString();
            if (WarData.AttackingHFs > 0)
                frm.lblWarAggressorCombatants.Text += string.Format(" + {0} HFs", WarData.AttackingHFs);
            frm.lblWarAggressorLosses.Text = WarData.AttackingDeaths.ToString();
            if (WarData.AttackingHFDeaths > 0)
                frm.lblWarAggressorLosses.Text += string.Format(" + {0} HFs", WarData.AttackingHFDeaths);

            frm.lblWarDefenderCombatants.Text = WarData.DefendingNumber.ToString();
            if (WarData.DefendingHFs > 0)
                frm.lblWarDefenderCombatants.Text += string.Format(" + {0} HFs", WarData.DefendingHFs);
            frm.lblWarDefenderLosses.Text = WarData.DefendingDeaths.ToString();
            if (WarData.DefendingHFDeaths > 0)
                frm.lblWarDefenderLosses.Text += string.Format(" + {0} HFs", WarData.DefendingHFDeaths);



            frm.lblWarAggressorSquads.Text = WarData.AttackingSquads.ToString();
            frm.lblWarAggressorWins.Text = WarData.AttackingWins.ToString();

            frm.lblWarDefenderSquads.Text = WarData.DefendingSquads.ToString();
            frm.lblWarDefenderWins.Text = WarData.DefendingWins.ToString();

            SelectTab(frm);
        }

        internal override void Process()
        {
            base.Process();
            if (AggressorEnt.WarEventCollections == null)
                AggressorEnt.WarEventCollections = new List<EC_War>();
            AggressorEnt.WarEventCollections.Add(this);
            if (DefenderEnt.WarEventCollections == null)
                DefenderEnt.WarEventCollections = new List<EC_War>();
            DefenderEnt.WarEventCollections.Add(this);
            if (EventCol != null)
                TotalWar();

        }

        internal override void Evaluate()
        {
            base.Evaluate();

            // Total up deaths/fighters in a war from the battle
            foreach (var battle in EventCol.Where(x => x is EC_Battle).Cast<EC_Battle>())
                battle.battleTotaled = false;
            TotalWar();

        }

        public void TotalWar()
        {
            foreach (var evtcol in EventCol.Where(x => Types[x.Type] == "battle"))
            {
                var battle = (EC_Battle)evtcol;
                if (!battle.battleTotaled)
                    battle.TotalBattle();

                WarData.AttackingDeaths += battle.BattleData.AttackingDeaths;
                WarData.AttackingNumber += battle.BattleData.AttackingNumber;
                WarData.AttackingSquads += battle.BattleData.AttackingSquads;
                WarData.AttackingHFs += battle.BattleData.AttackingHFs;
                WarData.AttackingHFDeaths += battle.BattleData.AttackingHFDeaths;

                WarData.DefendingDeaths += battle.BattleData.DefendingDeaths;
                WarData.DefendingNumber += battle.BattleData.DefendingNumber;
                WarData.DefendingSquads += battle.BattleData.DefendingSquads;
                WarData.DefendingHFs += battle.BattleData.DefendingHFs;
                WarData.DefendingHFDeaths += battle.BattleData.DefendingHFDeaths;

                WarData.NonCombatHFs += battle.BattleData.NonCombatHFs;

                if (battle.Outcome == "attacker won")
                    WarData.AttackingWins++;
                else if (battle.Outcome == "defender won")
                    WarData.DefendingWins++;
                else
                    break;

            }
        }


        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;

            var vals = new List<object> { ID, AggressorEntID, DefenderEntID };

            Database.ExportWorldItem(table, vals);

            if (EventCol == null)
                return;
            table = "EC_EventCols";
            foreach (var evtcol in EventCol)
            {
                vals = new List<object> { ID, evtcol.ID };
                Database.ExportWorldItem(table, vals);

            }
        }

    }
}
