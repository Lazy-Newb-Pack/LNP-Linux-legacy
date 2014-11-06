namespace DFWV.WorldClasses
{
    using System.Drawing;
    using System.Globalization;

    public abstract class WorldObject
    {
        public string Name { get; protected set; }
        internal World World { get; set; }


// ReSharper disable UnusedMemberInSuper.Global
        abstract public Point Location { get; }
// ReSharper restore UnusedMemberInSuper.Global

        protected WorldObject()
        {

        }

        internal WorldObject(World world)
        {
            World = world;
        }

        public override string ToString()
        {
            if (Name == null)
                return "";
            var ti = CultureInfo.CurrentCulture.TextInfo;
            return ti.ToTitleCase(Name);
        }

        public virtual void Select(MainForm frm)
        {
    
        }

        internal abstract void Export(string table);

    }
}
