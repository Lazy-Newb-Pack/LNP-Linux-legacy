using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;
using System.Drawing;
using System.Windows.Forms;
using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;

namespace DFWV.WorldClasses
{
    class Site : XMLObject
    {
        [UsedImplicitly]
        public string AltName { get; private set; }

        public Entity Owner { get; set; }
        public Civilization Parent { get; private set; }
        private List<Leader> Leaders { get; set; }
        public Dictionary<Race, int> Population { get; private set; }
        public Dictionary<Race, int> Prisoners { get; private set; }
        public Dictionary<Race, int> Outcasts { get; private set; }

        //public string SiteType { get; set; }
        private bool SiteFileMerged { get; set; }

        public List<HistoricalFigure> Inhabitants { get; set; }
        public List<WorldConstruction> ConstructionLinks { get; set; }

        public HE_CreatedSite CreatedEvent { get; set; }
        public HE_SiteDied DiedEvent { get; set; }
        public List<HE_PlunderedSite> PlunderedEvents { get; set; }
        public List<HE_ReclaimSite> ReclaimedEvents { get; set; }
        private List<HistoricalEvent> NewLeaderEvents { get; set; }
        public List<HE_AttackedSite> AttackedEvents { get; set; }
        public List<HE_DestroyedSite> DestroyedEvents { get; set; }

        public List<EC_BeastAttack> BeastAttackEventCollections { get; set; }
        public List<EC_Battle > BattleEventCollections { get; set; }
        public List<EC_Duel> DuelEventCollections { get; set; }
        public List<EC_Abduction> AbductionEventCollections { get; set; }
        public List<EC_SiteConquered> SiteConqueredEventCollections { get; set; }
        public List<EC_Theft> TheftEventCollections { get; set; }
        public List<EC_Insurrection> InsurrectionEventCollections { get; set; }

        public List<Artifact> CreatedArtifacts { get; set; }


        [UsedImplicitly]
        public bool isPlayerControlled { private get; set; }

        override public Point Location { get { return Coords; } }


        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }
        [UsedImplicitly]
        public int CreatedArtifactCount { get { return CreatedArtifacts == null ? 0 : CreatedArtifacts.Count; } }
        [UsedImplicitly]
        public int HFInhabitantCount { get { return Inhabitants == null ? 0 : Inhabitants.Count; } }
        [UsedImplicitly]
        public int TotalPopulation 
        { 
            get 
            { 
                return (Population == null ? 0 : Population.Count) +
                        (Prisoners == null ? 0 : Prisoners.Count) +
                        (Outcasts == null ? 0 : Outcasts.Count); 
            } 
        }


        #region Parse From Site File
        public Site(IEnumerable<string> curSite, World world) : base(world)
        {
            
            World = world;
            Leaders = new List<Leader>();
            Population = new Dictionary<Race,int>();
            Prisoners = new Dictionary<Race,int>();
            Outcasts = new Dictionary<Race, int>();

            var data = curSite.ToList();
            ParseNameLine(data[0]);
            data.RemoveAt(0);

            foreach (var line in data)
            {
                if (line.Contains("Owner: "))
                    ParseOwnerLine(line);
                else if (line.Contains("Parent Civ: "))
                    ParseParentCivLine(line);
                else if (line.Contains(":"))
                    ParseLeaderLine(line);
                else
                    ParsePopulationLine(line);
            }
        }

        private void ParsePopulationLine(string data)
        {
            data = data.Trim();
            var Pop = Convert.ToInt32(data.Substring(0, data.IndexOf(' ')));
            var race = data.Substring(data.IndexOf(' ') + 1);
            var thisRace = World.GetAddRace(race);
            if (race.Contains(" prisoner"))
            {
                if (Prisoners.ContainsKey(thisRace))
                    Prisoners[thisRace]++;
                else
                    Prisoners.Add(thisRace, Pop);
            }
            else if (race.Contains(" outcast"))
            {
                if (Outcasts.ContainsKey(thisRace))
                    Outcasts[thisRace]++;
                else
                    Outcasts.Add(thisRace, Pop);
            }
            else
            {
                if (Population.ContainsKey(thisRace))
                    Population[thisRace] += Pop;
                else
                    Population.Add(thisRace, Pop);
            }
        }

        private void ParseLeaderLine(string data)
        {
            data = data.Trim();
            var type = data.Substring(0, data.IndexOf(':'));
            var race = data.Substring(data.LastIndexOf(',') + 2);
            var name = data.Substring(data.IndexOf(':') + 2, data.LastIndexOf(',') - data.IndexOf(':') - 2);

            var thisLeader = World.GetAddLeader(name);
            thisLeader.Site = this;
            if (thisLeader.Civilization == null)
            {
                if (Parent != null)
                    thisLeader.Civilization = Parent;
            }

            
            thisLeader.Race = World.GetAddRace(race);

            if (!Leader.LeaderTypes.Contains(type))
                Leader.LeaderTypes.Add(type);
            thisLeader.LeaderType = Leader.LeaderTypes.IndexOf(type);

            Leaders.Add(thisLeader);
        }

        private void ParseParentCivLine(string data)
        {
            data = data.Substring(data.IndexOf(':') + 1).Trim();
            var race = data.Substring(data.LastIndexOf(',') + 1).Trim();
            data = data.Substring(0, data.LastIndexOf(',')).Trim();
            Parent = World.GetCiv(data);
            if (Parent == null) return;
            if (Parent.Color == Color.Empty)
            {
                Parent.Color = Program.NextDistinctColor();
                Parent.FirstSite = this;
            }
            if (Parent.Race == null || !String.Equals(Parent.Race.Name, race, StringComparison.CurrentCultureIgnoreCase))
            {
                if (Parent.Race == null)
                    Parent.Race = World.GetAddRace(race);
                else
                    Program.Log(LogType.Warning, "Parent Civ Race doesn't match history file race/n" + data);
            }
            if (Owner != null)
                Owner.ParentCiv = Parent;
        }

        private void ParseOwnerLine(string data)
        {
            data = data.Substring(data.IndexOf(':') + 1).Trim();
            //string race = data.Substring(data.LastIndexOf(',') + 1).Trim();
            //data = data.Substring(0, data.LastIndexOf(',')).Trim();
            Owner = World.GetAddEntity(data);
        }

        private void ParseNameLine(string data)
        {
            ID = Convert.ToInt32(data.Split(':')[0]);
            data = data.Replace(ID.ToString() + ':', "").Trim();

            var siteType = data.Split(',').Last().Trim();

            if (!Types.Contains(siteType))
                Types.Add(siteType);
            Type = Types.IndexOf(siteType);

            data = data.Substring(0, data.LastIndexOf(',') - 1);

            AltName = data.Substring(data.LastIndexOf(',') + 3);

            Name = data.Substring(0, data.LastIndexOf(','));

        }

        #endregion


        public static List<string> Types = new List<string>();
        public int Type { get; private set; }
        public Point Coords { get; private set; }
        private string StructureList { get; set; }
        public List<Structure> Structures { get; set; }

        [UsedImplicitly]
        public string SiteType { get { return Types[Type]; } }

        public Site(XDocument xdoc, World world)
            : base(xdoc, world)
        {
            //Inhabitants = new List<HistoricalFigure>();

            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value.Trim();
                switch (element.Name.LocalName)
                {
                    case "id":
                        break;
                    case "type":
                        if (!Types.Contains(val))
                            Types.Add(val);
                        Type = Types.IndexOf(val);
                        break;
                    case "name":
                        Name = val;
                        break;
                    case "coords":
                        Coords = new Point(
                            Convert.ToInt32(val.Split(',')[0]),
                            Convert.ToInt32(val.Split(',')[1]));
                        break;
                    case "structures":
                        StructureList = val;
                        if (val != "")
                            Program.Log(LogType.Warning, String.Format("Unexpected structures list for site: {0} - {1}", Name, val));
                        break;
                    
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public Site(NameValueCollection data, World world) 
        //    : base (world)
        //{
        //    Name = data["Name"].ToString();
        //    Type = data["Type"].ToString();
        //    Coords = new Point(
        //                Convert.ToInt32(data["Coords"].ToString().Split(',')[0]),
        //                Convert.ToInt32(data["Coords"].ToString().Split(',')[1]));
        //}

        public override void Select(MainForm frm)
        {
            frm.grpSite.Text = ToString();
            if (isPlayerControlled)
                frm.grpSite.Text += @" (PLAYER CONTROLLED)";
            frm.grpSite.Show();

            frm.lblSiteName.Text = ToString();
            frm.lblSiteAltName.Text = AltName;
            frm.lblSiteType.Text = Types[Type];
            frm.lblSiteCoord.Data = new Coordinate(Coords);
            frm.lblSiteOwner.Data = Owner;
            frm.lblSiteParentCiv.Data = Parent;

            frm.grpSiteCreated.Visible = CreatedEvent != null;
            if (CreatedEvent != null)
            {
                frm.lblSiteCreatedBy.Data = CreatedEvent.SiteCiv;
                frm.lblSiteCreatedByCiv.Data = CreatedEvent.Civ;
                frm.lblSiteCreatedTime.Data = CreatedEvent;
                frm.lblSiteCreatedTime.Text = CreatedEvent.Time.ToString();
            }
            frm.lstSitePopulation.Items.Clear();
            if (Population != null)
                frm.lstSitePopulation.Items.AddRange(Population.Keys.ToArray());
            frm.grpSitePopulation.Visible = frm.lstSitePopulation.Items.Count > 0;

            frm.lstSiteArtifacts.Items.Clear();
            if (CreatedArtifacts != null)
                frm.lstSiteArtifacts.Items.AddRange(CreatedArtifacts.ToArray());
            frm.grpSiteArtifacts.Visible = frm.lstSiteArtifacts.Items.Count > 0;


            frm.lstSiteStructures.Items.Clear();
            if (Structures != null)
                frm.lstSiteStructures.Items.AddRange(Structures.ToArray());
            frm.grpSiteStructures.Visible = frm.lstSiteStructures.Items.Count > 0;

            frm.lstSitePrisoners.Items.Clear();
            if (Outcasts != null)
                frm.lstSitePrisoners.Items.AddRange(Prisoners.Keys.ToArray());
            frm.grpSitePrisoners.Visible = frm.lstSitePrisoners.Items.Count > 0;

            frm.lstSiteOutcasts.Items.Clear();
            if (Outcasts != null)
                frm.lstSiteOutcasts.Items.AddRange(Outcasts.Keys.ToArray());
            frm.grpSiteOutcasts.Visible = frm.lstSiteOutcasts.Items.Count > 0;

            frm.lstSiteInhabitants.BeginUpdate();
            frm.lstSiteInhabitants.Items.Clear();
            if (Inhabitants != null)
                frm.lstSiteInhabitants.Items.AddRange(Inhabitants.ToArray());
            frm.lstSiteInhabitants.EndUpdate();
            frm.grpSiteInhabitants.Visible = frm.lstSiteInhabitants.Items.Count > 0;
            frm.grpSiteInhabitants.Text = string.Format("Historical Figures ({0})", frm.lstSiteInhabitants.Items.Count);

            frm.trvSiteEvent.Nodes.Clear();
            if (AttackedEvents != null)
            {
                var thisNode = new TreeNode("Attacked");
                foreach (var newNode in AttackedEvents.Select(evt => new TreeNode(evt.ToString()) {Tag = evt}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEvent.Nodes.Add(thisNode);
            }
            if (DestroyedEvents != null)
            {
                var thisNode = new TreeNode("Destroyed");
                foreach (var newNode in DestroyedEvents.Select(evt => new TreeNode(evt.ToString()) {Tag = evt}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEvent.Nodes.Add(thisNode);
            }
            if (NewLeaderEvents != null)
            {
                var thisNode = new TreeNode("NewLeader");
                foreach (var newNode in NewLeaderEvents.Select(evt => new TreeNode(evt.ToString()) {Tag = evt}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEvent.Nodes.Add(thisNode);
            }
            if (PlunderedEvents != null)
            {
                var thisNode = new TreeNode("Plundered");
                foreach (var newNode in PlunderedEvents.Select(evt => new TreeNode(evt.ToString()) {Tag = evt}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEvent.Nodes.Add(thisNode);
            }
            if (ReclaimedEvents != null)
            {
                var thisNode = new TreeNode("Reclaimed");
                foreach (var newNode in ReclaimedEvents.Select(evt => new TreeNode(evt.ToString()) {Tag = evt}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEvent.Nodes.Add(thisNode);
            }

            frm.grpSiteEvent.Visible = frm.trvSiteEvent.Nodes.Count > 0;

            frm.trvSiteEventCollection.Nodes.Clear();
            if (AbductionEventCollections != null)
            {
                var thisNode = new TreeNode("Abduction");
                foreach (var newNode in AbductionEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) {Tag = evtcol}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (BattleEventCollections != null)
            {
                var thisNode = new TreeNode("Battle");
                foreach (var newNode in BattleEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) {Tag = evtcol}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (BeastAttackEventCollections != null)
            {
                var thisNode = new TreeNode("Beast Attack");
                foreach (var newNode in BeastAttackEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) {Tag = evtcol}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (DuelEventCollections != null)
            {
                var thisNode = new TreeNode("Duel");
                foreach (var newNode in DuelEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) {Tag = evtcol}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (SiteConqueredEventCollections != null)
            {
                var thisNode = new TreeNode("Site Conquered");
                foreach (var newNode in SiteConqueredEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) {Tag = evtcol}))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (TheftEventCollections != null)
            {
                var thisNode = new TreeNode("Theft");
                foreach (var newNode in TheftEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) { Tag = evtcol }))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }
            if (InsurrectionEventCollections != null)
            {
                var thisNode = new TreeNode("Insurrection");
                foreach (var newNode in InsurrectionEventCollections.Select(evtcol => new TreeNode(evtcol.ToString()) { Tag = evtcol }))
                {
                    thisNode.Nodes.Add(newNode);
                }
                thisNode.Text += string.Format(" ({0})", thisNode.Nodes.Count);
                frm.trvSiteEventCollection.Nodes.Add(thisNode);
            }


            frm.grpSiteEventCollection.Visible = frm.trvSiteEventCollection.Nodes.Count > 0;

            Program.MakeSelected(frm.tabSite, frm.lstSite, this);
        }

        internal void MergeInSiteFile(Site sf)
        {
            Name = sf.Name;
            AltName = sf.AltName;
            Owner = sf.Owner;
            Parent = sf.Parent;
            Leaders = sf.Leaders;
            Population = sf.Population;
            Prisoners = sf.Prisoners;
            Outcasts = sf.Outcasts;
            Type = sf.Type;
            if (sf.Parent != null && sf.Parent.FirstSite == sf)
                sf.Parent.FirstSite = this;
            sf.SiteFileMerged = true;
        }
        internal override void Link()
        {

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

            vals.Add(AltName);
            vals.Add(Types[Type]);

            Database.ExportWorldItem(table, vals);
        }

        internal void AddStructure(Structure structure)
        {
            if (Structures == null)
                Structures = new List<Structure>();
            World.Structures.Add(structure.ID, structure);
            Structures.Add(structure);
        }

        internal Structure GetStructure(int structSiteId)
        {
            return Structures == null ? null : Structures.FirstOrDefault(structure => structure.SiteID == structSiteId);
        }
    }
}
