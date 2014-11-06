using System.Drawing;

namespace DFWV.WorldClasses
{
    class Person : WorldObject
    {
        override public Point Location { get { return Point.Empty; } }

        internal override void Export(string table)
        {

        }
    }
}
