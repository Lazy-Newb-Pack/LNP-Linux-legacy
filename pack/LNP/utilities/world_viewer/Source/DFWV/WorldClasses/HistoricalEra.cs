using System;
using System.Collections.Generic;
using System.Xml.Linq;
using System.Drawing;
using DFWV.Annotations;

namespace DFWV.WorldClasses
{
    class HistoricalEra : XMLObject
    {
        [UsedImplicitly]
        public int StartYear { get; set; }
        private WorldTime Start { get; set; }
        private WorldTime End { get; set; }


        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        override public Point Location { get { return Point.Empty; } }

        public HistoricalEra(XDocument xdoc, World world) 
            : base(world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                switch (element.Name.LocalName)
                {
                    case "name":
                        Name = val;
                        break;
                    case "start_year":
                        ID = Convert.ToInt32(val);
                        StartYear = ID;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public HistoricalEra(NameValueCollection data, World world) 
        //    : base (data, world)
        //{
        //    Name = data["Name"].ToString();
        //    StartYear = Convert.ToInt32(data["StartYear"]);
        //}


        public override void Select(MainForm frm)
        {
            frm.grpHistoricalEra.Text = ToString();
            frm.grpHistoricalEra.Show();

            frm.lblHistoricalEraName.Text = ToString();
            frm.lblHistoricalEraStartYear.Text = string.Format("{0} - {1}", (Start.Year == -1 ? 0 : Start.Year ), (End == WorldTime.Present ? "" : End.ToString()));
            Program.MakeSelected(frm.tabHistoricalEra, frm.lstHistoricalEra, this);
        }

        internal override void Link()
        {
            Start = new WorldTime(StartYear);
            var getNext = false;
            foreach (var era in World.HistoricalEras)
            {
                if (era.Key == StartYear)
                    getNext = true;
                else if (getNext)
                {
                    End = new WorldTime(era.Value.StartYear - 1);
                    break;
                }
            }
            if (End == null)
            {
                End = WorldTime.Present;
            }
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
