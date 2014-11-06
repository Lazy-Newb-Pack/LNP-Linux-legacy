using System.Data;
using System.Diagnostics;
using System.Linq;
using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalEventClasses;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Globalization;
using System.Xml.Linq;


namespace DFWV.WorldClasses.HistoricalEventCollectionClasses
{

    class HistoricalEventCollection : XMLObject
    {
        [UsedImplicitly]
        public int StartYear { get; set; }
        private int StartSeconds { get; set; }
        private int EndYear { get; set; }
        private int EndSeconds { get; set; }
        private List<int> Event_ { get; set; }
        public List<HistoricalEvent> Event { get; private set; }
        public static List<string> Types = new List<string>();
        public int Type { get; private set; }

        public WorldTime StartTime { get { return new WorldTime(StartYear, StartSeconds); } }
        public WorldTime EndTime { get { return (EndYear == 0 && EndSeconds == 0) ? WorldTime.Present : new WorldTime(EndYear, EndSeconds); } }

        [UsedImplicitly]
        public string EventCollectionType { get { return Types[Type]; } }

        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        override public Point Location { get { return Point.Empty; } }

        [UsedImplicitly]
        public int Combatants 
        {
            get
            {
                if (Types[Type] == "war")
                {
                    var war = (EC_War)this;
                    return war.WarData.AttackingHFs + war.WarData.AttackingNumber + war.WarData.DefendingHFs + war.WarData.DefendingSquads;
                }
                if (Types[Type] != "battle") return 0;
                var battle = (EC_Battle)this;
                return battle.BattleData.AttackingHFs + battle.BattleData.AttackingNumber + battle.BattleData.DefendingHFs + battle.BattleData.DefendingSquads;
            }
        }
        
        [UsedImplicitly]
        public int Casualties
        {
            get
            {
                if (Types[Type] == "war")
                {
                    var war = (EC_War)this;
                    return war.WarData.AttackingDeaths + war.WarData.DefendingDeaths;
                }
                if (Types[Type] != "battle") return 0;
                var battle = (EC_Battle)this;
                return battle.BattleData.AttackingDeaths + battle.BattleData.DefendingDeaths;
            }
        }

        [UsedImplicitly]
        public int Battles
        {
            get
            {
                if (Types[Type] != "war") return 0;
                var war = (EC_War)this;
                return war.EventCol == null ? 0 : war.EventCol.Count(x => Types[x.Type] == "battle");
            }
        }

        public static HistoricalEventCollection Create(XDocument xdoc, World world)
        {
            switch (xdoc.Root.Element("type").Value)
            {
                case "abduction":
                    return new EC_Abduction(xdoc, world);
                case "battle":
                    return new EC_Battle(xdoc, world);
                case "beast attack":
                    return new EC_BeastAttack(xdoc, world);
                case "duel":
                    return new EC_Duel(xdoc, world);
                case "journey":
                    return new EC_Journey(xdoc, world);
                case "site conquered":
                    return new EC_SiteConquered(xdoc, world);
                case "theft":
                    return new EC_Theft(xdoc, world);
                case "war":
                    return new EC_War(xdoc, world);
                case "insurrection":
                    return new EC_Insurrection(xdoc, world);
                default:
                    var logtext = "Unassessed Event Collection Type: " + (xdoc.Root.Element("type").Value);// + raw.Replace("<", "//<") + "\n\t\t\tbreak;");
                    logtext = ("\t\t" + xdoc.Root.ToString().Replace("<", "//<")).Split('\n').Where(
                        ln => !ln.Contains("<historical_event_collection>") && 
                            !ln.Contains("<id>") && 
                            !ln.Contains("<start_year>") && 
                            !ln.Contains("<start_seconds72>") && 
                            !ln.Contains("<end_year>") && 
                            !ln.Contains("<end_seconds72>") && 
                            !ln.Contains("<type>") && 
                            !ln.Contains("</historical_event_collection>")
                            ).Aggregate(logtext, (current, ln) => current + ln);
                    logtext += "\t\t\treturn new HistoricalEvent(xdoc, world);";

                    Program.Log(LogType.Warning, logtext);
                    return new EC_UnassessedEventCollection(xdoc, world);
            }
        }

        public HistoricalEventCollection(XDocument xdoc, World world)
            : base(xdoc, world)
        {

            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                int valI;
                Int32.TryParse(val, out valI);
                switch (element.Name.LocalName)
                {
                    case "id":
                        break;
                    case "start_year":
                        if (valI != -1)
                            StartYear = valI;
                        break;
                    case "start_seconds72":
                        if (valI != -1)
                            StartSeconds = valI;
                        break;
                    case "end_year":
                        if (valI != -1)
                            EndYear = valI;
                        break;
                    case "end_seconds72":
                        if (valI != -1)
                            EndSeconds = valI;
                        break;
                    case "event":
                        if (Event_ == null)
                            Event_ = new List<int>();
                        Event_.Add(valI);
                        break;
                    case "type":
                        if (!Types.Contains(val))
                            Types.Add(val);
                        Type = Types.IndexOf(val);
                        break;
                }
            }
        }
        

        public HistoricalEvent GetPreviousEvent(HistoricalEvent referenceEvt)
        {
            for (var i = 1; i < Event.Count; i++)
            {
                if (Event[i] == referenceEvt)
                    return Event[i - 1];
            }
            return null;
        }

        public HistoricalEvent GetNextEvent(HistoricalEvent referenceEvt)
        {
            for (var i = 0; i < Event.Count - 1; i++)
            {
                if (Event[i] == referenceEvt)
                    return Event[i + 1];
            }
            return null;
        }

        public override string ToString()
        {
            if (Name == null)
                return StartYear + " - " + CultureInfo.CurrentCulture.TextInfo.ToTitleCase(Types[Type]);
            return Name;
        }

        internal string ToTimelineString()
        {
            return ToString();
        }

        public override void Select(MainForm frm)
        {
            frm.ClearEventDetails();

            frm.grpHistoricalEventCollection.Text = ToString();
            frm.grpHistoricalEventCollection.Show();
        }

        protected void SelectTab(MainForm frm)
        {
        
            frm.lstHistoricalEventCollection.Focus();
            Program.MakeSelected(frm.tabHistoricalEventCollection, frm.lstHistoricalEventCollection, this);

        }

        internal static void LinkFieldList<T>(IEnumerable<int> IDs, List<T> list, 
                                      Dictionary<int, T> fromList)
        {
            if (IDs == null)
                return;
            list.AddRange(from t in IDs where fromList.ContainsKey(t) select fromList[t]);
        }

        internal override void Link()
        {
            //StartTime = new WorldTime(StartYear, StartSeconds);
            //EndTime = EndYear == -1 ? WorldTime.Present : new WorldTime(EndYear, EndSeconds);
            if (Event_ == null) return;
            Event = new List<HistoricalEvent>();
            LinkFieldList(Event_,
                Event, World.HistoricalEvents);
            foreach (var evt in Event)
                evt.EventCollection = this;
        }
        

        internal override void Process()
        {
            
        }

        internal virtual void Evaluate()
        {


        }


        internal override void Export(string table)
        {
            var vals = new List<object> { ID, StartYear, StartSeconds, EndYear, EndSeconds, Types[Type] };


            Database.ExportWorldItem(table, vals);


            if (Event == null)
                return;
            table = "EC_Events";
            foreach (var evt in Event)
	        {
                vals = new List<object> {ID,evt.ID };
                Database.ExportWorldItem(table, vals);

	        }
        }

    }

}
