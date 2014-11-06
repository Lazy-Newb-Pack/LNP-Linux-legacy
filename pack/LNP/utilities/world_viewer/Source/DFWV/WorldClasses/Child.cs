using System;

namespace DFWV.WorldClasses
{
    internal class Child : Person
    {
        public Child(string data, Leader leader)
        {
            Parent = leader;
            if (data.Contains("d."))
                Death = new WorldTime(Convert.ToInt32(data.Replace("(d.", "").Replace(")", "")));
            else
                AgeAtParentDeath = Convert.ToInt32(data);
        }

        private Leader Parent { get; set; }

        private WorldTime Death { get; set; }
        private int? AgeAtParentDeath { get; set; }
    }
}