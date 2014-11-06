
using DFWV.Annotations;

namespace DFWV.WorldClasses
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Xml.Linq;
    using System.Windows.Forms;
    using System.Drawing;
    using HistoricalEventClasses;
    using HistoricalFigureClasses;
    using HistoricalEventCollectionClasses;

    class Entity : XMLObject
    {

        public Race Race { get; set; }
        [UsedImplicitly]
        public string RaceName { get { return Race != null ? Race.Name : ""; } }

        public Civilization Civilization { get; set; }
        public Civilization ParentCiv { private get; set; }
        public bool EntityFileMerged { get; private set; }

        private List<Entity> CivGroups { get; set; }
        public List<HistoricalFigure> Enemies { get; set; }
        public List<HistoricalFigure> Members { get; set; }
        public List<HistoricalFigure> FormerMembers { get; set; }
        public List<HistoricalFigure> Prisoners { get; set; }
        public List<HistoricalFigure> FormerPrisoners { get; set; }
        public List<HistoricalFigure> Criminals { get; set; }
        public List<HistoricalFigure> Slaves { get; set; }
        public List<HistoricalFigure> FormerSlaves { get; set; }
        public List<HistoricalFigure> Heroes { get; set; }

        public List<WorldConstruction> ConstructionsBuilt { get; set; }

        public List<HistoricalEvent> Events { get; set; }

        private HE_SiteTakenOver SiteTakeoverEvent { get; set; }
        public HE_EntityCreated CreatedEvent { private get; set; }

        [UsedImplicitly]
        public List<HE_EntityLaw> LawEvents { get; set; }

        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }

        public List<EC_BeastAttack> BeastAttackEventCollections { get; set; }
        public List<EC_War> WarEventCollections { get; set; }
        public List<EC_Abduction> AbductionEventCollections { get; set; }
        public List<EC_SiteConquered> SiteConqueredEventCollections { get; set; }
        public List<EC_Theft> TheftEventCollections { get; set; }
        public List<EC_Insurrection> InsurrectionEventCollections { get; set; }

        [UsedImplicitly]
        public bool isPlayerControlled { get; set; }

        override public Point Location 
        { 
            get
            {
                if (ParentCiv == null && Civilization != null && Civilization.FirstSite != null)
                    return Civilization.FirstSite.Location;
                if (ParentCiv == null && Civilization != null && Civilization.FirstSite == null)
                    return Point.Empty;
                if (ParentCiv == null && Civilization == null && CreatedEvent != null)
                    return CreatedEvent.Location;
                if (ParentCiv != null && ParentCiv.FirstSite != null)
                    return ParentCiv.FirstSite.Location;
                if (ParentCiv == null && Civilization == null)
                    return Point.Empty;
                return Point.Empty;
            }
        }

        [UsedImplicitly]
        public int MemberCount { get { return Members == null ? 0 : Members.Count; } }


        public string Type
        {
            get
            {
                if (Civilization != null)
                    return "Civ";
                if (CreatedEvent != null)
                    return "Religion";
                return ParentCiv != null ? "Group" : "Other";
            }
        }


        #region Parse from Sites Files
        public Entity(string name, World world) : base(world)
        {
            World = world;
            Name = name;
        }
        #endregion

        [UsedImplicitly]
        public Entity(XDocument xdoc, World world)
            : base(xdoc, world)
        {
 
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                switch (element.Name.LocalName)
                {
                    case "id":
                        break;
                    case "name":
                        Name = val;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public Entity (NameValueCollection data, World world) 
        //    : base (data, world)
        //{
        //    Name = data["Name"].ToString();
        //}

        public override void Select(MainForm frm)
        {
            frm.grpEntity.Text = ToString();
            if (isPlayerControlled)
                frm.grpEntity.Text += @" (PLAYER CONTROLLED)";
            frm.grpEntity.Show();

            frm.lblEntityName.Text = ToString();
            frm.lblEntityType.Text = Type;
            frm.lblEntityRace.Data = Race;
            frm.lblEntityCivilization.Data = Civilization;
            frm.lblEntityParentCiv.Data = ParentCiv;

            frm.trvEntityRelatedFigures.Nodes.Clear();

            frm.grpEntityRelatedFigures.Visible =
                Enemies != null || Members != null || FormerMembers != null ||
                Prisoners != null || FormerPrisoners != null || Criminals != null ||
                Slaves != null || FormerSlaves != null || Heroes != null;
            if (frm.grpEntityRelatedFigures.Visible)
            {
                var EntityHFLists = new List<List<HistoricalFigure>>
                {Enemies, Members, FormerMembers, Prisoners, FormerPrisoners, Criminals,
                                Slaves, FormerSlaves, Heroes};
                var EntityHFListNames = new List<string>
                {"Enemies", "Members", "Former Members", "Prisoners", "Former Prisoners", "Criminals",
                                "Slaves", "Former Slaves", "Heroes"};
                for (var i = 0; i < EntityHFListNames.Count; i++)
                {
                    if (EntityHFLists[i] == null) continue;
                    var thisNode = new TreeNode(EntityHFListNames[i] + " (" + EntityHFLists[i].Count + ")");
                    foreach (var hf in EntityHFLists[i])
                    {
                        var newNode = hf.Dead ? new TreeNode(hf + " (" + hf.Birth + " - " + hf.Death + ")") : new TreeNode(hf + " (" + hf.Birth + " - )");
                        if (hf.Caste.HasValue && HistoricalFigure.Castes[hf.Caste.Value ].ToLower() == "female")
                            newNode.ForeColor = Color.Red;
                        else if (hf.Caste.HasValue && HistoricalFigure.Castes[hf.Caste.Value].ToLower() == "male")
                            newNode.ForeColor = Color.Blue;
                            
                        newNode.Tag = hf;
                        thisNode.Nodes.Add(newNode);
                    }
                    frm.trvEntityRelatedFigures.Nodes.Add(thisNode);
                }
            }

            frm.grpEntityCreated.Visible = CreatedEvent != null;
            if (CreatedEvent != null)
            {
                frm.lblEntityCreatedSite.Data = CreatedEvent.Site;
                frm.lblEntityCreatedTime.Data = CreatedEvent;
                frm.lblEntityCreatedTime.Text = CreatedEvent.Time.ToString();
            }

            frm.grpEntitySiteTakeover.Visible = SiteTakeoverEvent != null;
            if (SiteTakeoverEvent != null)
            {
                frm.lblEntitySiteTakeoverDefenderCiv.Data = SiteTakeoverEvent.DefenderCiv;
                frm.lblEntitySiteTakeoverDefenderEntity.Data = SiteTakeoverEvent.SiteCiv;
                frm.lblEntitySiteTakeoverSite.Data = SiteTakeoverEvent.Site;
                frm.lblEntitySiteTakeoverTime.Data = SiteTakeoverEvent;
                frm.lblEntitySiteTakeoverTime.Text = SiteTakeoverEvent.Time.ToString();
            }

            frm.grpEntitySubGroups.Visible = CivGroups != null;
            
            frm.lstEntitySubGroups.Items.Clear();
            if (CivGroups != null)
            {
                foreach (var ent in CivGroups)
                    frm.lstEntitySubGroups.Items.Add(ent);
            }

            frm.lstEntityEvents.BeginUpdate();
            frm.lstEntityEvents.Items.Clear();

            if (Events != null)
            {
                foreach (var evt in Events)
                    frm.lstEntityEvents.Items.Add(evt);
            }

            if (frm.lstEntityEvents.Items.Count > 0)
            {
                frm.grpEntityEvents.Show();
                frm.lstEntityEvents.SelectedIndex = 0;
            }
            else
                frm.grpEntityEvents.Hide();

            frm.lstEntityEvents.EndUpdate();

            Program.MakeSelected(frm.tabEntity, frm.lstEntity, this);
        }

        internal override void Link()
        {
            if (ParentCiv == null || ParentCiv.Entity == null) return;
            if (ParentCiv.Entity.CivGroups == null)
                ParentCiv.Entity.CivGroups = new List<Entity>();
            if (!ParentCiv.Entity.CivGroups.Contains(this))
                ParentCiv.Entity.CivGroups.Add(this);
        }

        internal override void Process()
        {

        }

        public void MakePlayer()
        {
            if (isPlayerControlled) return;
            isPlayerControlled = true;
            if (Members != null)
            {
                foreach (var hf in Members)
                    hf.isPlayerControlled = true;
            }
            if (FormerMembers == null) return;
            foreach (var hf in FormerMembers)
                hf.isPlayerControlled = true;
        }

        internal void MergeInEntityFile(Entity ent)
        {
            Race = ent.Race;
            ParentCiv = ent.ParentCiv;
            ent.EntityFileMerged = true;
            foreach (var site in World.Sites.Values.Where(x => x.Owner == ent))
                    site.Owner = this;
        }

        internal override void Export(string table)
        {

            var vals = new List<object> {ID};

            if (Name == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Name.Replace("'", "''"));

            vals.Add(Type);

            Database.ExportWorldItem(table, vals);
        }
    }
}
