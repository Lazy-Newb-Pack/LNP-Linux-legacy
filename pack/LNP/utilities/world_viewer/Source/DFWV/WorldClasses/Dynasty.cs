using System;
using System.Collections.Generic;
using System.Linq;
using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalFigureClasses;
using System.Drawing;

namespace DFWV.WorldClasses
{
    class Dynasty : WorldObject
    {
        public List<HistoricalFigure> Members { get; private set; }
        private string Type { get; set; }
        private Civilization Civilization { get; set; }

        override public Point Location { get { return Members.Last().Location; } }

        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        [UsedImplicitly]
        public int Duration
        {
            get
            {
                return (int)((Members.Last().Leader.Death != null ? Members.Last().Leader.Death.ToSeconds() : WorldTime.Present.ToSeconds()) - 
                    Members[0].Leader.ReignBegan.ToSeconds());
            }
        }

        [UsedImplicitly]
        public int MemberCount { get { return Members.Count; } }


        public Dynasty(World world, HistoricalFigure hf, string type, Civilization civ) : base(world)
        {
            Members = new List<HistoricalFigure> {hf};
            Type = type;
            Civilization = civ;
        }

        public override string ToString()
        {
            return Members[0].ToString();
        }

        public override void Select(MainForm frm)
        {
            frm.grpDynasty.Text = ToString();
            frm.grpDynasty.Show();

            frm.lblDynastyFounder.Data = Members[0];
            frm.lblDynastyCivilization.Data = Civilization;
            frm.lblDynastyType.Text = Type;
            frm.lblDynastyLength.Text = WorldTime.Duration(Members.Last().Leader.Death ?? WorldTime.Present, Members[0].Leader.ReignBegan);
            if (Members.Last().Leader.Death == WorldTime.Present)
                frm.lblDynastyLength.Text += @"+";

            frm.lstDynastyMembers.Items.Clear();
            frm.lstDynastyMembers.Items.AddRange(Members.ToArray());

            Program.MakeSelected(frm.tabDynasty, frm.lstDynasty, this);
        }

        internal override void Export(string table)
        {

            var vals = new List<object> {Members[0].ID};

            if (Members[0].Name == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Members[0].Name.Replace("'", "''"));

            Database.ExportWorldItem(table, vals);
        }
    }
}
