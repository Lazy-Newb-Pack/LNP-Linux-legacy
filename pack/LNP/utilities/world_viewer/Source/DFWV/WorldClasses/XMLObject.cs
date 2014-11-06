
namespace DFWV.WorldClasses
{
    using System;
    using System.Xml.Linq;


    abstract class XMLObject : WorldObject
    {
        public int ID { get; protected set; }


        protected XMLObject(XDocument xdoc, World world) 
            : base(world)
        {
            ID = Convert.ToInt32(xdoc.Root.Element("id").Value);
            World = world;
        }

        protected XMLObject(World world) : base(world)
        {
            World = world;
        }

        //public XMLObject(NameValueCollection data, World world)
        //    : base (world)
        //{
        //    ID = Convert.ToInt32(data["ID"]);
        //    World = world;
        //}


        internal abstract void Link();

        internal abstract void Process();

        public override string ToString()
        {
            return base.ToString() != "" ? base.ToString() : ID.ToString();
        }
    }
}
