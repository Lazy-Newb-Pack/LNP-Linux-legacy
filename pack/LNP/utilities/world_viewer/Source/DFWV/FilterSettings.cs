using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Dynamic;
using System.Windows.Forms;
using DFWV.WorldClasses;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV
{
    /// <summary>
    /// This class, a property of World, stores settings for how objects are currently being filtered.
    /// It also stores details on what sort of fields should be filterable/sortable.
    /// </summary>
    class FilterSettings
    {
        readonly Dictionary<Type, Filter> Filters = new Dictionary<Type, Filter>();
        public readonly Dictionary<Type, Dictionary<string, Type>> Fields = new Dictionary<Type, Dictionary<string, Type>>();
        public readonly Dictionary<Type, Dictionary<string, IEnumerable<string>>> Options = new Dictionary<Type, Dictionary<string, IEnumerable<string>>>();
        private readonly World World;

        public FilterSettings(World world)
        {
            World = world;
            LoadFields();
            LoadOptions();
            SetDefaultFilters();
        }

        /// <summary>
        /// Loads the set of all fields that can be filtered on/sorted on, based on World Object Type.
        /// They're stored as Dictionary<string, Type> because when displaying the options on the FilterForm different options 
        ///     should be possible for bools then strings (for example, no Contains() for bool)
        /// The string in the Dictionary is a string that is the same as a Property of the Type it's being added to.
        /// This is used with the Dynamic Query function to let you filter out all Artifacts that have a Name that Contains "dwarf" for example.
        /// </summary>
        private void LoadFields()
        {
            Fields[typeof(Artifact)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, 
                    { "Lost", typeof(bool) } };
            Fields[typeof(Civilization)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) },
                    };
            Fields[typeof(Entity)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, { "isPlayerControlled", typeof(bool) },
                    { "MemberCount", typeof(int) }};
            Fields[typeof(EntityPopulation)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) },
                    { "MemberCount", typeof(int) }, { "Battles", typeof(int) }};
            Fields[typeof(God)] = new Dictionary<string, Type>
            { { "Name", typeof(string)}, 
                    { "CivilizationCount", typeof(int) }, { "SphereCount", typeof(int) }, { "LeaderCount", typeof(int) }};
            Fields[typeof(HistoricalEra)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, 
                    { "StartYear", typeof(int) } };
            Fields[typeof(HistoricalEvent)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) },
                    { "Year", typeof(int) }, { "InCollection", typeof(bool) } };
            Fields[typeof(HistoricalEventCollection)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) },
                    { "StartYear", typeof(int) }, { "Combatants", typeof(int) },
                    { "Casualties", typeof(int) }, { "Battles", typeof(int) } };
            Fields[typeof(HistoricalFigure)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, 
                    { "BirthYear", typeof(int) }, { "PlayerControlled", typeof(bool) }, 
                    { "EntPopID", typeof(int) }, { "Deity", typeof(bool) }, { "Force", typeof(bool) }, { "Ghost", typeof(bool) },
                    { "Dead", typeof(bool) }, { "Animated", typeof(bool) }, 
                    { "inEntPop", typeof(bool) },  { "isLeader", typeof(bool) },  { "isGod", typeof(bool) }, 
                    { "CreatedArtifactCount", typeof(int) }, { "CreatedMasterpieceCount", typeof(int) }, { "ChildrenCount", typeof(int) }, 
                    { "Kills", typeof(int) }, { "Battles", typeof(int) }, { "DescendentCount", typeof(int) }, { "AncestorCount", typeof(int) }, 
                    { "DescendentGenerations", typeof(int) } };

            Fields[typeof(Leader)] = new Dictionary<string, Type>
            { { "Name", typeof(string) }, 
                    { "Inherited", typeof(bool) }, { "Married", typeof(bool) } };
            Fields[typeof(Parameter)] = new Dictionary<string, Type> { { "Name", typeof(string) } };
            Fields[typeof(Race)] = new Dictionary<string, Type>
            { { "Name", typeof(string) },
                    { "Population", typeof(int) }, { "CivCount", typeof(int) }, { "LeaderCount", typeof(int) }, 
                    { "HFCount", typeof(int) }, };
            Fields[typeof(Region)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, 
                    { "Battles", typeof(int) }, { "InhabitantCount", typeof(int) } };
            Fields[typeof(Site)] = new Dictionary<string, Type>
            { { "ID", typeof(int) }, { "Name", typeof(string) }, 
                    { "AltName", typeof(string) }, { "isPlayerControlled", typeof(bool) }, { "Parent.Name", typeof(string) }, 
                    { "HFInhabitantCount", typeof(int) } , { "TotalPopulation", typeof(int) }, { "CreatedArtifactCount", typeof(int) } };
            Fields[typeof(Structure)] = new Dictionary<string, Type> { { "Name", typeof(string) }, { "isRazed", typeof(bool) }, { "Tomb", typeof(bool) } };
            Fields[typeof(UndergroundRegion)] = new Dictionary<string, Type> { { "ID", typeof(int) }, { "Name", typeof(string) } };
            Fields[typeof(WorldConstruction)] = new Dictionary<string, Type> { { "ID", typeof(int) }, { "Name", typeof(string) } };
            Fields[typeof(Dynasty)] = new Dictionary<string, Type> { { "Name", typeof(string) }, { "Duration", typeof(int) }, { "MemberCount", typeof(int) } };
        }


        /// <summary>
        /// Loads the set of all options that can be filtered on.
        /// They're stored as Dictionary<string, IEnumerable<string>> 
        /// This is used with the Dynamic Query function to let you filter out all Events that match type "hf died".
        /// </summary>
        private void LoadOptions()
        {
            Options[typeof(Civilization)] = new Dictionary<string, IEnumerable<string>> { { "RaceName", World.Races.Keys } };
            Options[typeof(Entity)] = new Dictionary<string, IEnumerable<string>>
            { { "RaceName", World.Races.Keys }, 
                    { "Type", new List<string> {"Civ","Religion","Group","Other"} } };
            Options[typeof(EntityPopulation)] = new Dictionary<string, IEnumerable<string>> { { "RaceName", World.Races.Keys } };
            Options[typeof(God)] = new Dictionary<string, IEnumerable<string>>
            { { "RaceName", World.Races.Keys }, 
                    { "GodType", new List<string> {"deity","force"} } };
            Options[typeof(HistoricalEvent)] = new Dictionary<string, IEnumerable<string>> { { "EventType", HistoricalEvent.Types } };

            Options[typeof(HistoricalEventCollection)] = new Dictionary<string, IEnumerable<string>>
            { { "EventCollectionType", HistoricalEventCollection.Types} 
                        };
            Options[typeof(HistoricalFigure)] = new Dictionary<string, IEnumerable<string>>
            { { "Job", HistoricalFigure.AssociatedTypes }, 
                        { "HFCaste", HistoricalFigure.Castes }, { "RaceName", World.Races.Keys } };
            Options[typeof(Leader)] = new Dictionary<string, IEnumerable<string>> { { "RaceName", World.Races.Keys } };
            Options[typeof(Region)] = new Dictionary<string, IEnumerable<string>> { { "RegionType", Region.Types } };
            Options[typeof(Site)] = new Dictionary<string, IEnumerable<string>> { { "SiteType", Site.Types } };


            // Quick check to verify no option is concerning the same property as a Field
            foreach (var fieldSet in Fields)
            {
                foreach (var field in fieldSet.Value.Keys.Where(field => Options.ContainsKey(fieldSet.Key) && Options[fieldSet.Key].ContainsKey(field)))
                {
                    Options[fieldSet.Key].Remove(field);
                }
            }
        }


        /// <summary>
        /// All the default filters, generally they are for sorting, but I also remove some details which almost no one will care about.  
        ///     Normally huge sets are limited to 50k items by default, to not kill an unsuspecting user who accidentally clicks the Historical Events tab.
        ///     Though this can be changed if desired using the FilterForm.
        /// </summary>
        private void SetDefaultFilters()
        {
            this[typeof(Artifact)] = new Filter("Name", null, null, -1);
            this[typeof(Civilization)] = new Filter("Name", "IsFull = true", "Race.Name", -1);
            this[typeof(Entity)] = new Filter(new List<string> { "Name", "Type" }, null, null, -1);
            this[typeof(EntityPopulation)] = new Filter(new List<string> { "ID", "Race = null" }, null, null, -1);
            this[typeof(God)] = new Filter("Name", null, null, -1);
            this[typeof(HistoricalEra)] = new Filter("StartYear", null, null, -1);
            this[typeof(HistoricalEvent)] = new Filter("Year", null, null, 50000);
            this[typeof(HistoricalEventCollection)] = new Filter(new List<string> { "StartYear" }, null, null, 50000);
            this[typeof(HistoricalFigure)] = new Filter("Name", null, null, 50000);
            this[typeof(Leader)] = new Filter("Name", null, null, -1);
            this[typeof(Parameter)] = new Filter();
            this[typeof(Race)] = new Filter(new List<string> { "Name", "!isCivilized" }, null, null, -1);
            this[typeof(Region)] = new Filter("Name", null, null, -1);
            this[typeof(Site)] = new Filter("Name", null, null, -1);
            this[typeof(Structure)] = new Filter("Name", null, null, -1);
            this[typeof(UndergroundRegion)] = new Filter(new List<string> { "Depth", "Name" }, null, null, -1);
            this[typeof(WorldConstruction)] = new Filter();
            this[typeof(Dynasty)] = new Filter();
            

        }


        /// <summary>
        /// Indexer to add, change, or return filters.
        /// </summary>
        public Filter this[Type T]
        {
            get
            {
                return Filters[T];
            }
            set
            {
                if (!Filters.ContainsKey(T))
                    Filters.Add(T, value);
                else
                    Filters[T] = value;

            }
        }

    }

    /// <summary>
    /// There is one "Filter" for each Filterable World Object type within the FilterSettings Class.
    /// Filters have a set of "Where" conditions, which restrict what items will be returned when data is returned
    ///     A set of "OrderBy" conditions which control sorting
    ///     and a "Take" property which controls if there is a limit on items returned.
    /// </summary>
    class Filter
    {
        public readonly List<string> Where = new List<string>();
        public readonly List<string> OrderBy = new List<string>();
        public readonly List<string> GroupBy = new List<string>();

        public int Take { get; private set; }


        /// <summary>
        /// Filters can be created with one, many, or zero orderby/where clauses.
        /// </summary>
        public Filter(string orderby, string where, string group, int take)
        {
            if (orderby != null)
                OrderBy.Add(orderby);

            if (where != null)
                Where.Add(where);

            if (group != null)
                GroupBy.Add(group);

            Take = take;
        }
        public Filter(List<string> orderby, List<string> where, List<string> group, int take)
        {
            if (orderby != null)
                OrderBy = orderby;
            if (where != null)
                Where = where;
            if (group != null)
                GroupBy = group;

            Take = take;
        }
        public Filter()
        {
            Take = -1;
        }


        /// <summary>
        /// Returns an array of "T" where T is a WorldObject.  
        ///     Given a list of objects this function creates a query on that list, adds all the appropriate clauses, then runs that query, returning the results.
        ///     If there is some issue with the query, all the clauses are wiped and the top 50k of that list is returned.
        /// </summary>
        public object[] Get<T>(List<T> list)
        {
            var query = list.AsQueryable<T>();

            try
            {
                foreach (var w in Where)
                {
                    query = query.Where(w);
                }
                foreach (var o in OrderBy)
                {
                    if (o.StartsWith("-"))
                        query = query.OrderBy(o.Substring(1) + " desc");
                    else
                        query = query.OrderBy(o);

                }

                //query = Where.Aggregate(query, (current, @where) => current.Where(@where));
                //query = OrderBy.Aggregate(query, (current, @orderby) => @orderby.StartsWith("-") ? current.OrderBy(@orderby.Substring(1) + " desc") : current.OrderBy(@orderby));

                if (GroupBy.Count > 0)
                {
                    List<object> returnList = new List<object>();

                    var newquery = query.GroupBy("new (" + String.Join(", ", GroupBy) + ")", "it");

                    var eq = newquery.Select("new(it.Key as Key, it as Items)");

                    var keyEmplist = (from dynamic dat in eq select dat).ToList();

                    foreach (var group in keyEmplist)
                    {
                        string key = group.Key.ToString();
                        var elist = group.Items;



                        returnList.Add("    " + System.Globalization.CultureInfo.CurrentCulture.TextInfo.ToTitleCase(key.Split('=')[1].TrimEnd('}')));
                        foreach (var emp in elist)
                            returnList.Add(emp);
                    }

                    return returnList.ToArray();
                }

                //var newquery = GroupBy.Aggregate(query, (current, @groupby) => current.GroupBy("new (" + @groupby + ")", "it"));


                if (Take > 0)
                    query = query.Take(Take);
                return query.ToArray() as object[];
            }
            catch (Exception e)
            {
                var ErrorMessage = string.Format("Filter error, returning defaults{0}{1}{0}", Environment.NewLine, typeof(T));

                ErrorMessage = Where.Aggregate(ErrorMessage, (current, @where) => current + ("Where: " + @where + Environment.NewLine));
                ErrorMessage = OrderBy.Aggregate(ErrorMessage, (current, @orderby) => current + ("OrderBy: " + @orderby + Environment.NewLine));
                ErrorMessage = GroupBy.Aggregate(ErrorMessage, (current, @groupby) => current + ("GroupBy: " + @groupby + Environment.NewLine));
                

                ErrorMessage += "Take: " + Take + Environment.NewLine;
                ErrorMessage += e.Message;

                MessageBox.Show(ErrorMessage, @"DF World Viewer", MessageBoxButtons.OK);

                Where.Clear();
                OrderBy.Clear();
                GroupBy.Clear();

                return list.AsQueryable().Take(50000).ToArray() as object[];
            }

        }
   }
}