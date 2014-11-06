using System.Drawing;

namespace DFWV.WorldClasses
{
    class Coordinate : WorldObject
    {
        readonly int X;
        readonly int Y;

        override public Point Location { get { return new Point(X,Y); } }

        public Coordinate(Point coord)
        {
            X = coord.X;
            Y = coord.Y;
            World = Program.mainForm.World;
        }

        public override string ToString()
        {
            return "(" + X + ", " + Y + ")";
        }

        public override void Select(MainForm frm)
        {
            base.Select(frm);
            if (Program.mapForm == null || Program.mapForm.IsDisposed)
                Program.mapForm = new MapForm(World);
            if (!Program.mapForm.Visible)
                Program.mapForm.Location = Location;
            Program.mapForm.Show();

            Program.mapForm.Select(new Point(X,Y));
        }

        internal override void Export(string table)
        {

        }
    }
}
