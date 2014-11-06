using DFWV.Annotations;

namespace DFWV.WorldClasses
{
    using System.Collections.Generic;
    using System.Drawing;

    public class Parameter : WorldObject
    {
        public string Value { get; private set; }

        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        override public Point Location { get { return Point.Empty; } }


        internal Parameter(string data, World world) : base(world)
        {
            data = data.Substring(1, data.Length - 2);
            Name = data.Substring(0,data.IndexOf(':'));
            Value = data.Substring(data.IndexOf(':') + 1);
        }

        //public Parameter(NameValueCollection data, World world) 
        //    : base (world)
        //{
        //    Name = data["Name"].ToString();
        //    Value = data["Value"].ToString();
        //}

        public override string ToString()
        {
            return Name + ":" + Value;
        }

        public override void Select(MainForm frm)
        {
            frm.grpParameter.Text = Name;
            frm.grpParameter.Show();

            frm.lblParameterName.Text = Name;
            frm.lblParameterData.Text = Value;

            Program.MakeSelected(frm.tabParameter, frm.lstParameter, this);
        }

        internal override void Export(string table)
        {

            var vals = new List<object> {Name, Value};


            Database.ExportWorldItem(table, vals);
        }
    }
}
