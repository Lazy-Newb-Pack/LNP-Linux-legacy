using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;
using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalFigureClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using System.Drawing;

namespace DFWV.WorldClasses
{
    class EntityPopulation : XMLObject
    {

        public List<EC_Battle> BattleEventCollections { get; set; }
        public List<HistoricalFigure> Members { get; set; }
        public Race Race { private get; set; }
        [UsedImplicitly]
        public string RaceName { get { return Race != null ? Race.Name : ""; } }

        [UsedImplicitly]
        public int MemberCount { get { return Members == null ? 0 : Members.Count; } }
        [UsedImplicitly]
        public int Battles { get { return BattleEventCollections == null ? 0 : BattleEventCollections.Count; } }


        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        override public Point Location { get { return Point.Empty; } }


        public EntityPopulation(XDocument xdoc, World world)
            : base(xdoc, world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                // string val = element.Value;
                switch (element.Name.LocalName)
                {
                    case "id":
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public EntityPopulation(NameValueCollection data, World world) 
        //    : base (data, world)
        //{
            
        //}

        public override string ToString()
        {
            return ID.ToString();
        }

        public override void Select(MainForm frm)
        {
            frm.grpEntityPopulation.Text = ToString();
            frm.grpEntityPopulation.Show();

            frm.lblEntityPopulationRace.Data = Race;

            frm.grpEntityPopulationBattles.Visible = BattleEventCollections != null;
            if (BattleEventCollections != null)
            {
                frm.lstEntityPopulationBattles.Items.Clear();
                foreach (var evtcol in BattleEventCollections)
                {
                    frm.lstEntityPopulationBattles.Items.Add(evtcol);
                }
                frm.lstEntityPopulationBattles.SelectedIndex = 0;
            }
            frm.grpEntityPopulationMembers.Visible = Members != null;
            if (Members != null)
            {
                frm.lstEntityPopulationMembers.BeginUpdate();
                frm.lstEntityPopulationMembers.Items.Clear();
                foreach (var hf in Members.Take(50000))
                {
                    frm.lstEntityPopulationMembers.Items.Add(hf);
                }
                frm.lstEntityPopulationMembers.EndUpdate();
            }
            frm.grpEntityPopulationMembers.Text = string.Format("Members ({0}{1})", 
                frm.lstEntityPopulationMembers.Items.Count, 
                (Members != null && Members.Count > 50000 ? "+" : ""));
            Program.MakeSelected(frm.tabEntityPopulation, frm.lstEntityPopulation, this);
        }

        internal override void Link()
        {

        }

        internal override void Process()
        {

        }

        internal override void Export(string table)
        {

            var vals = new List<object> {ID};

            if (Name == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Name.Replace("'", "''"));

            Database.ExportWorldItem(table, vals);
        }

    }
}
