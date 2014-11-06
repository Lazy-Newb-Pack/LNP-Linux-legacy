using System;
using System.Collections.Generic;
using System.Globalization;
using System.Xml.Linq;
using System.Drawing;
using DFWV.Annotations;

namespace DFWV.WorldClasses
{
    class UndergroundRegion : XMLObject
    {
        private string Type { get; set; }
        [UsedImplicitly]
        public int Depth { get; set; }


        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        override public Point Location { get { return Point.Empty; } }

        public UndergroundRegion(XDocument xdoc, World world) 
            : base(xdoc, world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                switch (element.Name.LocalName)
                {
                    case "id":
                        break;
                    case "type":
                        Type = CultureInfo.CurrentCulture.TextInfo.ToTitleCase(val);
                        break;
                    case "depth":
                        Depth = Convert.ToInt32(val);
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public UndergroundRegion(NameValueCollection data, World world) 
        //    : base (world)
        //{
        //    Depth = Convert.ToInt32(data["Depth"]);
        //    Type = data["Type"].ToString();
        //}

        public override string ToString()
        {
            return Type;
        }

        public override void Select(MainForm frm)
        {
            frm.grpUndergroundRegion.Text = ToString();
            frm.grpUndergroundRegion.Show();

            frm.lblUndergroundRegionDepth.Text = Depth.ToString();
            frm.lblUndergroundRegionType.Text = Type;

            Program.MakeSelected(frm.tabUndergroundRegion, frm.lstUndergroundRegion, this);
        }

        internal override void Link()
        {

        }

        internal override void Process()
        {

        }

        internal override void Export(string table)
        {

            var vals = new List<object> {ID, Type, Depth};

            Database.ExportWorldItem(table, vals);
        }
    }
}

