using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalEventClasses;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;

namespace DFWV.WorldClasses.HistoricalFigureClasses
{
    class HistoricalFigure : XMLObject
    {

        private string Race_ { get; set; } 
        public Race Race { get; private set; }
        [UsedImplicitly]
        public string RaceName { get { return Race != null ? Race.Name : ""; } }

        public int? Caste { get; private set; }
        public static List<string> Castes = new List<string>();
        private int? AppearedYear { get; set; }
        private WorldTime Appeared { get { return AppearedYear.HasValue ? null : new WorldTime(AppearedYear.Value);} }
        [UsedImplicitly]
        public int? BirthYear { get; private set; }
        private int? BirthSeconds { get; set; }
        public WorldTime Birth { get { return BirthYear.HasValue ? new WorldTime(BirthYear.Value, BirthSeconds) : WorldTime.Present; } }
        public int? DeathYear { get; private set; }
        private int? DeathSeconds { get; set; }
        public WorldTime Death { get { return DeathYear.HasValue ? new WorldTime(DeathYear.Value, DeathSeconds) : WorldTime.Present; } }
        public static List<string> AssociatedTypes = new List<string>();
        public int? AssociatedType { get; private set; }
        public Dictionary<string, List<EntityLink>> EntityLinks { get; set; }
        private Dictionary<string, List<SiteLink>> SiteLinks { get; set; }
        public List<int> Sphere { get; private set; }
        public static List<string> Spheres = new List<string>();
        private List<HFSkill> HFSkills { get; set; }
        private List<RelationshipProfileHF> RelationshipProfileHFs { get; set; }
        public static List<string> Interactions = new List<string>();
        public List<int> InteractionKnowledge { get; private set; }
        public List<int> JourneyPet { get; private set; }
        public static List<string> JourneyPets = new List<string>();
        public Dictionary<string, List<HFLink>> HFLinks { get; private set; }
        [UsedImplicitly]
        public bool Deity { get; private set; }
        private List<EntityFormerPositionLink> EntityFormerPositionLinks { get; set; }
        private List<EntityPositionLink> EntityPositionLinks { get; set; }
        private List<EntitySquadLink> EntitySquadLinks { get; set; }
        private List<EntityFormerSquadLink> EntityFormerSquadLinks { get; set; }


        private int? EntPop_ { get; set; }
        private EntityPopulation EntPop { get; set; }
        public int? ActiveInteraction { get; private set; }
        public static List<string> Goals = new List<string>();
        public int? Goal { get; private set; }
        [UsedImplicitly]
        public bool Force { get; private set; }
        private List<EntityReputation> EntityReputations { get; set; }
        private int? CurrentIdentityID { get; set; }
        private int? UsedIdentityID { get; set; }
        private string HoldsArtifact { get; set; }
        [UsedImplicitly]
        public bool Animated { get; private set; }
        private string AnimatedString { get; set; }
        [UsedImplicitly]
        public bool Ghost { get; private set; }
        public bool Adventurer { get; private set; }
        public int? BreedID { get; set; }
        public Leader Leader { get; set; }
        public God God { private get; set; }

        [UsedImplicitly]
        public bool isPlayerControlled { private get; set; }


        [UsedImplicitly]
        public string FirstName
        {
            get
            {
                return ShortName == null ? null : Name.Split(" ".ToCharArray(), StringSplitOptions.RemoveEmptyEntries)[0];
            }
        }

        [UsedImplicitly]
        public string LastName
        {
            get
            {
                if (ShortName == null)
                    return null;
                return ShortName.Contains(' ') ? ShortName.Split(" ".ToCharArray(), StringSplitOptions.RemoveEmptyEntries)[1] : null;
            }
        }
        public string ShortName 
        { 
            get 
            {
                if (Name == null)
                    return null;
                return Name.Contains(" the ") ?  Name.Substring(0, Name.IndexOf(" the ")) : Name; 
            } 
        }

        [UsedImplicitly]
        public string Title 
        { 
            get 
            {
                if (Name == null)
                    return null;
                return Name.Contains(" the ") ?  Name.Substring(Name.IndexOf("the ")) : null;
            } 
        }

        public Site Site { get; set; }
        public Region Region { get; set; }
        public Point Coords { get; set; }

        private List<Entity> EnemyOf { get; set; }
        private List<Entity> MemberOf { get; set; }
        private List<Entity> FormerMemberOf { get; set; }
        public List<Entity> PrisonerOf { get; set; }
        private List<Entity> FormerPrisonerOf { get; set; }
        private List<Entity> CriminalOf { get; set; }
        public List<Entity> SlaveOf { get; set; }
        private List<Entity> FormerSlaveOf { get; set; }
        public List<Entity> HeroOf { get; set; }

        public List<Artifact> CreatedArtifacts { get; set; }

        public List<HistoricalFigure> Children { get; set; }
        public List<HistoricalFigure> Spouses { get; set; }
        private List<HistoricalFigure> Lovers { get; set; }
        private List<HistoricalFigure> Followers { get; set; }
        private List<HistoricalFigure> Deities { get; set; }
        private List<HistoricalFigure> Parents { get; set; }
        private List<HistoricalFigure> Apprentices { get; set; }
        private List<HistoricalFigure> Masters { get; set; }
        private List<HistoricalFigure> Prisoners { get; set; }
        private List<HistoricalFigure> Imprisoners { get; set; }
        private List<HistoricalFigure> Companions { get; set; }

        private HistoricalFigure Mother { get; set; }
        private HistoricalFigure Father { get; set; }
        private List<HistoricalFigure> Descendents;
        private List<HistoricalFigure> Ancestors;

        public HE_HFDied DiedEvent { get; set; }
        public List<HistoricalEvent> Events { get; set; }
        public List<HE_HFDied> SlayingEvents { get; set; }
        public HE_ChangeHFBodyState EntombedEvent { get; set; }


        public List<EC_Battle> BattleEventCollections { get; set; }
        public List<EC_Duel> DuelEventCollections { get; set; }

        override public Point Location { get { return Coords; } }

        [UsedImplicitly]
        public bool Dead { get { return Death != WorldTime.Present; } }
        [UsedImplicitly]
        public bool inEntPop { get { return EntPop != null; } }
        [UsedImplicitly]
        public bool isLeader { get { return Leader != null; } }
        [UsedImplicitly]
        public bool isGod { get { return God != null; } }
        [UsedImplicitly]
        public int CreatedArtifactCount { get { return CreatedArtifacts == null ? 0 : CreatedArtifacts.Count; } }
        [UsedImplicitly]
        public int CreatedMasterpieceCount { get { return Events == null ? 0 : Events.Count(x => HistoricalEvent.Types[x.Type].Contains("masterpiece")); } }
        [UsedImplicitly]
        public int ChildrenCount { get { return Children == null ? 0 : Children.Count; } }
        [UsedImplicitly]
        public int Kills { get { return SlayingEvents == null ? 0 : SlayingEvents.Count; } }
        [UsedImplicitly]
        public int Battles { get { return BattleEventCollections == null ? 0 : BattleEventCollections.Count; } }
        [UsedImplicitly]
        public string DispNameLower { get { return ToString().ToLower(); } }
        [UsedImplicitly]
        public int EntPopID { get { return EntPop == null ? -1 : EntPop.ID; } }
        [UsedImplicitly]
        public int DescendentCount { get; set; }
        [UsedImplicitly]
        public int AncestorCount { get; set; }
        [UsedImplicitly]
        public int DescendentGenerations { get; set; }
        [UsedImplicitly]
        public bool PlayerControlled { get { return isPlayerControlled || Adventurer; } }
        [UsedImplicitly]
        public string Job { get { return AssociatedType.HasValue ? AssociatedTypes[AssociatedType.Value] : ""; } }
        [UsedImplicitly]
        public string HFCaste { get { return Caste.HasValue ? Castes[Caste.Value] : ""; } }
        public bool isMale { get { return HFCaste.ToLower().Contains("male") && !isFemale; } }
        public bool isFemale { get { return HFCaste.ToLower().Contains("female"); } }

        public HistoricalFigure(XDocument xdoc, World world)
            : base(xdoc, world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                int valI;
                Int32.TryParse(val, out valI);
                string[] exclude = { "entity_link", "hf_link", "hf_skill", "site_link", "entity_position_link",
                                   "entity_former_position_link", "entity_reputation", "entity_squad_link",
                                   "entity_former_squad_link", "relationship_profile_hf"};
                if (val.Contains("\n") && !exclude.Contains(element.Name.LocalName))
                    Program.Log(LogType.Warning, "Historical Figures." + element.Name.LocalName + " has unknown sub items!");
                switch (element.Name.LocalName)
                {
                    case "id":
                        if (ID < 0)
                            throw new Exception();
                        break;
                    case "name":
                        Name = val.Trim();
                        break;
                    case "race":
                        Race_ = val;
                        break;
                    case "caste":
                        if (!Castes.Contains(val))
                            Castes.Add(val);
                        Caste = Castes.IndexOf(val);
                        break;
                    case "appeared":
                        AppearedYear = valI;
                        break;
                    case "birth_year":
                        BirthYear = valI;
                        break;
                    case "birth_seconds72":
                        if (valI != -1)
                            BirthSeconds = valI;
                        break;
                    case "death_year":
                        if (valI != -1)
                            DeathYear = valI;
                        break;
                    case "death_seconds72":
                        if (valI != -1)
                            DeathSeconds = valI;
                        break;
                    case "associated_type":
                        if (!AssociatedTypes.Contains(val))
                            AssociatedTypes.Add(val);
                        AssociatedType = AssociatedTypes.IndexOf(val);
                        break;
                    case "entity_link":
                        var newEL = new EntityLink(element, this);
                        if (EntityLinks == null)
                            EntityLinks = new Dictionary<string, List<EntityLink>>();
                        if (!EntityLinks.ContainsKey(EntityLink.LinkTypes[newEL.LinkType]))
                            EntityLinks.Add(EntityLink.LinkTypes[newEL.LinkType], new List<EntityLink>());
                        EntityLinks[EntityLink.LinkTypes[newEL.LinkType]].Add(newEL);
                        break;
                    case "site_link":
                        var newSL = new SiteLink(element, this);
                        if (SiteLinks == null)
                            SiteLinks = new Dictionary<string, List<SiteLink>>();
                        if (!SiteLinks.ContainsKey(SiteLink.LinkTypes[newSL.LinkType]))
                            SiteLinks.Add(SiteLink.LinkTypes[newSL.LinkType], new List<SiteLink>());
                        SiteLinks[SiteLink.LinkTypes[newSL.LinkType]].Add(newSL);
                        break;
                    case "sphere":
                        if (Sphere == null)
                            Sphere = new List<int>();
                        if (!Spheres.Contains(val))
                            Spheres.Add(val);
                        Sphere.Add(Spheres.IndexOf(val));
                        break;
                    case "hf_skill":
                        if (HFSkills == null)
                            HFSkills = new List<HFSkill>();
                        HFSkills.Add(new HFSkill(element));
                        break;
                    case "interaction_knowledge":
                        if (InteractionKnowledge == null)
                            InteractionKnowledge = new List<int>();
                        if (!Interactions.Contains(val))
                            Interactions.Add(val);
                        InteractionKnowledge.Add(Interactions.IndexOf(val));
                        break;
                    case "journey_pet":
                        if (JourneyPet == null)
                            JourneyPet = new List<int>();
                        if (!JourneyPets.Contains(val))
                            JourneyPets.Add(val);
                        JourneyPet.Add(JourneyPets.IndexOf(val));
                        break;
                    case "hf_link":
                        var newHFL = new HFLink(element, this);
                        if (HFLinks == null)
                            HFLinks = new Dictionary<string, List<HFLink>>();
                        if (!HFLinks.ContainsKey(HFLink.LinkTypes[newHFL.LinkType]))
                            HFLinks.Add(HFLink.LinkTypes[newHFL.LinkType], new List<HFLink>());
                        HFLinks[HFLink.LinkTypes[newHFL.LinkType]].Add(newHFL);
                        break;
                    case "deity":
                        Deity = true;
                        break;
                    case "entity_former_position_link":
                        if (EntityFormerPositionLinks == null)
                            EntityFormerPositionLinks = new List<EntityFormerPositionLink>();
                        EntityFormerPositionLinks.Add(new EntityFormerPositionLink(element, this));
                        break;
                    case "entity_squad_link":
                        if (EntitySquadLinks == null)
                            EntitySquadLinks = new List<EntitySquadLink>();
                        EntitySquadLinks.Add(new EntitySquadLink(element, this));
                        break;
                    case "entity_former_squad_link":
                        if (EntityFormerSquadLinks == null)
                            EntityFormerSquadLinks = new List<EntityFormerSquadLink>();
                        EntityFormerSquadLinks.Add(new EntityFormerSquadLink(element, this));
                        break;
                    case "entity_position_link":
                        if (EntityPositionLinks == null)
                            EntityPositionLinks = new List<EntityPositionLink>();
                        EntityPositionLinks.Add(new EntityPositionLink(element, this));
                        break;
                    case "relationship_profile_hf":
                        if (RelationshipProfileHFs == null)
                            RelationshipProfileHFs = new List<RelationshipProfileHF>();
                        RelationshipProfileHFs.Add(new RelationshipProfileHF(element, this));
                        break;

                    case "ent_pop_id":
                        EntPop_ = valI;
                        break;
                    case "active_interaction":
                        if (!Interactions.Contains(val))
                            Interactions.Add(val);
                        ActiveInteraction = Interactions.IndexOf(val);
                        break;
                    case "goal":
                        if (!Goals.Contains(val))
                            Goals.Add(val);
                        Goal = Goals.IndexOf(val);
                        break;
                    case "force":
                        Force = true;
                        break;
                    case "entity_reputation":
                        if (EntityReputations == null)
                            EntityReputations = new List<EntityReputation>();
                        EntityReputations.Add(new EntityReputation(element));
                        break;
                    case "current_identity_id":
                        CurrentIdentityID = valI;
                        break;
                    case "used_identity_id":
                        if (UsedIdentityID != null)
                            break;
                        UsedIdentityID = valI;
                        break;
                    case "holds_artifact":
                        HoldsArtifact = val;
                        break;
                    case "animated":
                        Animated = true;
                        break;
                    case "animated_string":
                        AnimatedString = val;
                        if (Name == null)
                            Name = AnimatedString;
                        break;
                    case "ghost":
                        Ghost = true;
                        break;
                    case "adventurer":
                        Adventurer = true;
                        break;
                    case "breed_id":
                        BreedID = valI;
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName, element, xdoc.Root.ToString());
                        break;
                }
            }
        }

        //public HistoricalFigure(NameValueCollection data, World world) 
        //    : base (world)
        //{
        //    Name = data["Name"].ToString();

        //}

        public override void Select(MainForm frm)
        {
            frm.grpHistoricalFigure.Text = ToString();
            if (PlayerControlled)
                frm.grpHistoricalFigure.Text += @" (PLAYER CONTROLLED)";
            frm.grpHistoricalFigure.Show();
            frm.lblHistoricalFigureName.Text = ToString();
            frm.lblHistoricalFigureRace.Data = Race;
            frm.lblHistoricalFigureCaste.Text = Caste.HasValue ? Castes[Caste.Value] : "";
            frm.lblHistoricalFigureAppeared.Text = Appeared == null ? "" : Appeared.ToString();
            frm.lblHistoricalFigureLife.Text = Birth == null ? "" : (Birth + " – " + (Death == WorldTime.Present ? "" : Death.ToString()));
            frm.lblHistoricalFigureAge.Text = Birth == null ? "" : WorldTime.Duration(Death, Birth);
            frm.lblHistoricalFigureAgeCaption.Text = Death == WorldTime.Present ? "Age:" : "Age at death:";
            frm.lblHistoricalFigureAssociatedType.Text = AssociatedType.HasValue ? AssociatedTypes[AssociatedType.Value]: "";
            frm.lblHistoricalFigureAnimated.Text = Animated.ToString();
            frm.lblHistoricalFigureGhost.Text = Ghost.ToString();

            if (Site != null)
            { 
                frm.lblHistoricalFigureLocation.Data = Site;
                frm.lblHistoricalFigureLocationText.Text = @"At Site:";
                frm.lblHistoricalFigureCoords.Data = new Coordinate(Site.Coords);
            }
            else if (Region != null)
            {
                frm.lblHistoricalFigureLocation.Data = Region;
                frm.lblHistoricalFigureLocationText.Text = @"At Region:";
                frm.lblHistoricalFigureCoords.Data = new Coordinate(Coords);
            }
            else
            {
                frm.lblHistoricalFigureLocation.Data = null;
                frm.lblHistoricalFigureCoords.Data = null;
            }
            frm.lblHistoricalFigureGod.Data = God;
            frm.lblHistoricalFigureGod.Text = God == null ? "" : (God + " (" + (Deity ? "Deity" : "Force") + ")");
            frm.lblHistoricalFigureLeader.Data = Leader;
            frm.lblHistoricalFigureLeader.Text = Leader == null ? "" : CultureInfo.CurrentCulture.TextInfo.ToTitleCase(Leader.LeaderTypes[Leader.LeaderType]);
            frm.lblHistoricalFigureEntityPopulation.Data = EntPop;

            frm.grpHistoricalFigureSpheres.Visible = Sphere != null;
            if (Sphere != null)
            {
                frm.lstHistoricalFigureSpheres.Items.Clear();
                foreach (var curSphere in Sphere)
                    frm.lstHistoricalFigureSpheres.Items.Add(
                        CultureInfo.CurrentCulture.TextInfo.ToTitleCase(Spheres[curSphere]));
            }

            frm.grpHistoricalFigureKnowledge.Visible = InteractionKnowledge != null;
            if (InteractionKnowledge != null)
            {
                frm.lstHistoricalFigureKnowledge.Items.Clear();
                foreach (var curInteractionKnowledge in InteractionKnowledge)
                    frm.lstHistoricalFigureKnowledge.Items.Add(
                        CultureInfo.CurrentCulture.TextInfo.ToTitleCase(Interactions[curInteractionKnowledge].Replace("_"," ").ToLower()));
            }

            frm.grpHistoricalFigurePets.Visible = JourneyPet != null;
            if (JourneyPet != null)
            {
                frm.lstHistoricalFigurePets.Items.Clear();
                foreach (var curJourneyPet in JourneyPet)
                    frm.lstHistoricalFigurePets.Items.Add(
                        CultureInfo.CurrentCulture.TextInfo.ToTitleCase(
                         CultureInfo.CurrentCulture.TextInfo.ToTitleCase(JourneyPets[curJourneyPet].Replace("_", " ").ToLower())));
            }

            frm.grpHistoricalFigureSkills.Visible = HFSkills != null;
            if (HFSkills != null)
            {
                frm.lstHistoricalFigureSkills.Items.Clear();
                foreach (var curHFSkill in HFSkills.OrderByDescending(x => x.TotalIP))
                    frm.lstHistoricalFigureSkills.Items.Add(
                        CultureInfo.CurrentCulture.TextInfo.ToTitleCase(HFSkill.Skills[curHFSkill.Skill].Replace("_"," ").ToLower()) + 
                        " - " + IPToTitle(curHFSkill.TotalIP));
            }


            frm.grpHistoricalFigureEntityLinks.Visible = EntityLinks != null;
            frm.trvHistoricalFigureEntityLinks.BeginUpdate();
            frm.trvHistoricalFigureEntityLinks.Nodes.Clear();
            if (EntityLinks != null)
            {
                foreach (var elList in EntityLinks)
                {
                    var thisNode = new TreeNode(CultureInfo.CurrentCulture.TextInfo.ToTitleCase(elList.Key));
                    foreach (var el in elList.Value)
                    {
                        var linkStrength = el.LinkStrength.HasValue ? " (" + el.LinkStrength + "%)" : "";
                        var eNode = el.Entity == null ? new TreeNode("Entity: " + el.EntityID + linkStrength) : new TreeNode(el.Entity + " - " + el.Entity.Type + linkStrength);
                        eNode.Tag = el.Entity;
                        thisNode.Nodes.Add(eNode);
                    }
                    frm.trvHistoricalFigureEntityLinks.Nodes.Add(thisNode);
                }

                frm.trvHistoricalFigureEntityLinks.ExpandAll();
            }
            frm.trvHistoricalFigureEntityLinks.EndUpdate();

            frm.grpHistoricalFigureHFLinks.Visible =
                Spouses != null || Lovers != null || Followers != null ||
                Deities != null || Masters != null || Apprentices != null || 
                Prisoners != null || Imprisoners != null || Companions != null || 
                RelationshipProfileHFs != null;
            frm.trvHistoricalFigureHFLinks.BeginUpdate();
            frm.trvHistoricalFigureHFLinks.Nodes.Clear();
            if (frm.grpHistoricalFigureHFLinks.Visible)
            {
                if (RelationshipProfileHFs != null)
                {
                    var thisNode = new TreeNode("Relationships");
                    foreach (var profile in RelationshipProfileHFs)
                    {
                        var hfNode = new TreeNode(profile.HF.ToString()) { Tag = profile.HF };
                        if (profile.HF.Caste.HasValue && Castes[profile.HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (profile.HF.Caste.HasValue && Castes[profile.HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;

                        thisNode.Nodes.Add(hfNode);
                    }

                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Spouses != null)
                {
                    var thisNode = new TreeNode("Spouses");
                    foreach (var HF in Spouses)
                    {
                        var hfNode = new TreeNode(HF.ToString()) {Tag = HF};
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;

                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Lovers != null)
                {
                    var thisNode = new TreeNode("Lovers");
                    foreach (var HF in Lovers)
                    {
                        var hfNode = new TreeNode(HF.ToString()) {Tag = HF};
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Followers != null)
                {
                    var thisNode = new TreeNode("Followers");
                    foreach (var HF in Followers)
                    {
                        var hfNode = new TreeNode(HF.ToString()) {Tag = HF};
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Deities != null)
                {
                    var thisNode = new TreeNode("Deities");

                    foreach (var hflink in HFLinks["deity"])
	                {

                        var hfNode = new TreeNode(hflink.HF + " (" + hflink.LinkStrength + "%)") {Tag = hflink.HF};
	                    if (hflink.HF.Caste.HasValue && Castes[hflink.HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (hflink.HF.Caste.HasValue && Castes[hflink.HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
	                }

                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Masters != null)
                {
                    var thisNode = new TreeNode("Masters");
                    foreach (var HF in Masters)
                    {
                        var hfNode = new TreeNode(HF.ToString()) {Tag = HF};
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Apprentices != null)
                {
                    var thisNode = new TreeNode("Apprentices");
                    foreach (var HF in Apprentices)
                    {
                        var hfNode = new TreeNode(HF.ToString()) {Tag = HF};
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Prisoners != null)
                {
                    var thisNode = new TreeNode("Prisoners");
                    foreach (var HF in Prisoners)
                    {
                        var hfNode = new TreeNode(HF.ToString()) { Tag = HF };
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Imprisoners != null)
                {
                    var thisNode = new TreeNode("Imprisoners");
                    foreach (var HF in Imprisoners)
                    {
                        var hfNode = new TreeNode(HF.ToString()) { Tag = HF };
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }
                if (Companions != null)
                {
                    var thisNode = new TreeNode("Companions");
                    foreach (var HF in Companions)
                    {
                        var hfNode = new TreeNode(HF.ToString()) { Tag = HF };
                        if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("male"))
                            hfNode.ForeColor = Color.Blue;
                        else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower().StartsWith("female"))
                            hfNode.ForeColor = Color.Red;
                        thisNode.Nodes.Add(hfNode);
                    }
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                }

                if (frm.trvHistoricalFigureHFLinks.GetNodeCount(true) <= 5000)
                    frm.trvHistoricalFigureHFLinks.ExpandAll();
            }
            


            if (SlayingEvents != null)
                frm.grpHistoricalFigureHFLinks.Show();
            if (SlayingEvents != null)
            {
                var thisNode = new TreeNode("Kills");
                foreach (var evt in SlayingEvents)
                {
                    if (evt.SlayerHF != this || evt.HF == null) continue;
                    var hfNode = new TreeNode(evt.HF.ToString()) {Tag = evt.HF};
                    if (evt.HF.Caste.HasValue && Castes[evt.HF.Caste.Value].ToLower().StartsWith("male"))
                        hfNode.ForeColor = Color.Blue;
                    else if (evt.HF.Caste.HasValue && Castes[evt.HF.Caste.Value].ToLower().StartsWith("female"))
                        hfNode.ForeColor = Color.Red;

                    thisNode.Nodes.Add(hfNode);
                }
                if (thisNode.Nodes.Count > 0)
                {
                    thisNode.Text = string.Format("{0} ({1})", thisNode.Text, thisNode.Nodes.Count);
                    frm.trvHistoricalFigureHFLinks.Nodes.Add(thisNode);
                    frm.trvHistoricalFigureHFLinks.ExpandAll();
                }
            }
            frm.trvHistoricalFigureHFLinks.EndUpdate();

            frm.lstHistoricalFigureEvents.BeginUpdate();
            frm.lstHistoricalFigureEvents.Items.Clear();

            if (Events != null)
            {
                foreach (var evt in Events)
                    frm.lstHistoricalFigureEvents.Items.Add(evt);
            }
            frm.lstHistoricalFigureEvents.EndUpdate();

            if (frm.lstHistoricalFigureEvents.Items.Count > 0)
            {
                frm.grpHistoricalFigureEvents.Show();
                frm.lstHistoricalFigureEvents.SelectedIndex = 0;
            }
            else
                frm.grpHistoricalFigureEvents.Hide();



            frm.grpHistoricalFigureDeath.Visible = DiedEvent != null;
            if (DiedEvent != null)
            {
                frm.lblHistoricalFigureDeathSlayer.Data = DiedEvent.SlayerHF;
                frm.lblHistoricalFigureDeathLocation.Data = DiedEvent.Site == null ? DiedEvent.Subregion : (WorldObject)DiedEvent.Site;
                frm.lblHistoricalFigureDeathCause.Text = HE_HFDied.Causes[DiedEvent.Cause];
                frm.lblHistoricalFigureDeathTime.Data = DiedEvent;
                frm.lblHistoricalFigureDeathTime.Text = DiedEvent.Time.ToString();
            }

            frm.grpHistoricalFigureArtifacts.Visible = CreatedArtifacts != null;
            frm.lstHistoricalFigureArtifacts.Items.Clear();
            if (CreatedArtifacts != null)
            {
                foreach (Artifact artifact in CreatedArtifacts)
                {
                    frm.lstHistoricalFigureArtifacts.Items.Add(artifact);
                }
            }



            frm.grpHistoricalFigureAncestors.Visible = (Mother != null || Father != null);
            Ancestors = new List<HistoricalFigure>();
            frm.trvHistoricalFigureAncestors.BeginUpdate();
            frm.trvHistoricalFigureAncestors.Nodes.Clear();
            var hitMax = false;
            if (Mother != null)
            {
                var motherNode = Mother.Dead ? new TreeNode(Mother + " (" + Mother.Birth + " - " + Mother.Death + ")") : new TreeNode(Mother + " (" + Mother.Birth + " - )");

                motherNode.ForeColor = Color.Red;
                motherNode.Tag = Mother;
                frm.trvHistoricalFigureAncestors.Nodes.Add(motherNode);
                Ancestors.Add(Mother);
                hitMax = AddToAncestorsTree(motherNode, 1, 10);
            }
            if (Father != null)
            {
                var fatherNode = Father.Dead ? new TreeNode(Father + " (" + Father.Birth + " - " + Father.Death + ")") : new TreeNode(Father + " (" + Father.Birth + " - )");

                fatherNode.ForeColor = Color.Blue;
                fatherNode.Tag = Father;
                frm.trvHistoricalFigureAncestors.Nodes.Add(fatherNode);
                Ancestors.Add(Father);
                hitMax = AddToAncestorsTree(fatherNode, 1, 10);
            }
            frm.trvHistoricalFigureAncestors.EndUpdate();
            frm.grpHistoricalFigureAncestors.Text = string.Format("Ancestors ({0}{1})", Ancestors.Count, (hitMax ? "+" :""));
            Ancestors = null;

            frm.grpHistoricalFigureDescendents.Visible = (Children != null);
            Descendents = new List<HistoricalFigure>();
            hitMax = false;
            frm.trvHistoricalFigureDescendents.BeginUpdate();
            if (Children != null)
            {
                frm.trvHistoricalFigureDescendents.Nodes.Clear();

                foreach (var child in Children)
                {
                    var childNode = child.Dead ? new TreeNode(child + " (" + child.Birth + " - " + child.Death + ")") : new TreeNode(child + " (" + child.Birth + " - )");

                    childNode.Tag = child;
                    frm.trvHistoricalFigureDescendents.Nodes.Add(childNode);
                    Descendents.Add(child);
                    if (AddToDescendentsTree(childNode, 1, 8))
                        hitMax = true;
                }
            }
            frm.trvHistoricalFigureDescendents.EndUpdate();
            if (DescendentCount == 0)
                frm.grpHistoricalFigureDescendents.Text = string.Format("Descendents ({0}{1})", Descendents.Count, (hitMax ? "+" : ""));
            else
            {
                frm.grpHistoricalFigureDescendents.Text = string.Format(
                    DescendentCount > 50000 ?  "Descendents ({0}+ - {1}+ Generations)" : "Descendents ({0} - {1} Generations)", 
                    DescendentCount, DescendentGenerations);
            }
            Descendents = null;

            Program.MakeSelected(frm.tabHistoricalFigure, frm.lstHistoricalFigure, this);
        }

        private static string IPToTitle(int IP)
        {
            if (IP < 500)
                return "Dabbling";
            if (IP < 1100)
                return "Novice";
            if (IP < 1800)
                return "Adequate";
            if (IP < 2600)
                return "Competent";
            if (IP < 3500)
                return "Skilled";
            if (IP < 4500)
                return "Proficient";
            if (IP < 5600)
                return "Talented";
            if (IP < 6800)
                return "Adept";
            if (IP < 8100)
                return "Expert";
            if (IP < 9500)
                return "Professional";
            if (IP < 11000)
                return "Accomplished";
            if (IP < 12600)
                return "Great";
            if (IP < 14300)
                return "Master";
            if (IP < 16100)
                return "High Master";
            if (IP < 18000)
                return "Grand Master";
            if (IP < 20000)
                return "Legendary";
            if (IP < 22100)
                return "Legendeary+1";
            if (IP < 24300)
                return "Legendary+2";
            if (IP < 26600)
                return "Legendary+3";
            return IP < 2900 ? "Legendary+4" : "Legendary+5";
        }

        private bool AddToDescendentsTree(TreeNode parentNode, int depth, int maxDepth)
        {
            var HF = (HistoricalFigure)parentNode.Tag;
            var hitMax = false;
            if (HF.Children != null && depth <= maxDepth)
            {
                foreach (var child in HF.Children)
                {
                    if (child.Mother == HF)
                        parentNode.ForeColor = Color.Red;
                    else if (child.Father == HF)
                        parentNode.ForeColor = Color.Blue;
                    var childNode = child.Dead ? new TreeNode(child + " (" + child.Birth + " - " + child.Death +")") : new TreeNode(child + " (" + child.Birth + " - )");
                    if (depth == maxDepth)
                        childNode.Text += @"...";
                    childNode.Tag = child;
                    if (!Descendents.Contains(child))
                        Descendents.Add(child);
                    parentNode.Nodes.Add(childNode);
                    if (AddToDescendentsTree(childNode, depth + 1, maxDepth))
                        hitMax = true;
                }
            }
            else
            {
                if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower() == "male")
                    parentNode.ForeColor = Color.Blue;
                else if (HF.Caste.HasValue && Castes[HF.Caste.Value].ToLower() == "female")
                    parentNode.ForeColor = Color.Red;
            }
            return depth > maxDepth || hitMax;
        }

        private bool AddToAncestorsTree(TreeNode childNode, int depth, int maxDepth)
        {
            var HF = (HistoricalFigure)childNode.Tag;
            var hitMax = false;
            if (HF.Mother != null && depth <= maxDepth)
            {
                var motherNode = new TreeNode(HF.Mother.ToString());
                if (depth == maxDepth)
                    motherNode.Text += @"...";

                motherNode.ForeColor = Color.Red;
                motherNode.Tag = HF.Mother;
                if (!Ancestors.Contains(HF.Mother))
                    Ancestors.Add(HF.Mother);
                childNode.Nodes.Add(motherNode);
                hitMax = AddToAncestorsTree(motherNode, depth + 1, maxDepth);
            }
            else if (depth > maxDepth)
                hitMax = true;
            if (HF.Father != null && depth <= maxDepth)
            {
                var fatherNode = new TreeNode(HF.Father.ToString());
                if (depth == maxDepth)
                    fatherNode.Text += @"...";
                fatherNode.ForeColor = Color.Blue;
                fatherNode.Tag = HF.Father;
                if (!Ancestors.Contains(HF.Father))
                    Ancestors.Add(HF.Father);
                childNode.Nodes.Add(fatherNode);
                if (AddToAncestorsTree(fatherNode, depth + 1, maxDepth))
                    hitMax = true;
            }
            else if (depth > maxDepth)
                hitMax = true;
            return hitMax;
        }

        internal override void Link()
        {
            //Birth = BirthYear.HasValue ? new WorldTime(BirthYear.Value, BirthSeconds) : WorldTime.Present;
            //Death = DeathYear.HasValue ? new WorldTime(DeathYear.Value, DeathSeconds) : WorldTime.Present;
            //if (AppearedYear != null) 
            //    Appeared = new WorldTime(AppearedYear.Value);

            if (Race_ != null)
            {
                Race = World.GetAddRace(Race_);
                Race_ = null;
            }

            if (EntPop_.HasValue && World.EntityPopulations.ContainsKey(EntPop_.Value))
            {
                EntPop = World.EntityPopulations[EntPop_.Value];
                if (EntPop.Members == null)
                    EntPop.Members = new List<HistoricalFigure>();
                EntPop.Members.Add(this);
            }
            if (Leader != null && Leader.InheritanceID != null &&
                 World.HistoricalFigures.ContainsKey(Leader.InheritanceID.Value))
            {
                Leader.InheritedFrom = World.HistoricalFigures[Leader.InheritanceID.Value];
            }

        }

        internal override void Process()
        {
            if (SiteLinks != null)
            {
                foreach (var linklist in SiteLinks)
                {
                    foreach (var sl in linklist.Value)
                    {
                        switch (linklist.Key)
                        {
                            case "lair":
                            case "home structure":
                            case "seat of power":
                            case "home site building":
                            case "home site underground":
                            case "hangout":
                                if (sl.Site.Inhabitants == null)
                                    sl.Site.Inhabitants = new List<HistoricalFigure>();
                                if (!sl.Site.Inhabitants.Contains(this))
                                    sl.Site.Inhabitants.Add(this);
                                Site = sl.Site;

                                break;
                            default:
                                Program.Log(LogType.Warning, "Unknown HF Site Link: " + linklist.Key);
                                break;
                        }
                    }

                }
            }
            if (EntityLinks != null)
            {
                foreach (var linklist in EntityLinks)
                {
                    foreach (var el in linklist.Value)
                    {
                        if (el.Entity != null)
                        {
                            switch (linklist.Key)
                            {
                                case "enemy":

                                    if (el.Entity.Enemies == null)
                                        el.Entity.Enemies = new List<HistoricalFigure>();
                                    el.Entity.Enemies.Add(this);
                                    if (EnemyOf == null)
                                        EnemyOf = new List<Entity>();
                                    EnemyOf.Add(el.Entity);
                                    break;
                                case "member":
                                    if (el.Entity.Members == null)
                                        el.Entity.Members = new List<HistoricalFigure>();
                                    el.Entity.Members.Add(this);
                                    if (MemberOf == null)
                                        MemberOf = new List<Entity>();
                                    MemberOf.Add(el.Entity);
                                    break;
                                case "former member":
                                    if (el.Entity.FormerMembers == null)
                                        el.Entity.FormerMembers = new List<HistoricalFigure>();
                                    el.Entity.FormerMembers.Add(this);
                                    if (FormerMemberOf == null)
                                        FormerMemberOf = new List<Entity>();
                                    FormerMemberOf.Add(el.Entity);
                                    break;
                                case "prisoner":
                                    if (el.Entity.Prisoners == null)
                                        el.Entity.Prisoners = new List<HistoricalFigure>();
                                    el.Entity.Prisoners.Add(this);
                                    if (PrisonerOf == null)
                                        PrisonerOf = new List<Entity>();
                                    PrisonerOf.Add(el.Entity);
                                    break;
                                case "former prisoner":
                                    if (el.Entity.FormerPrisoners == null)
                                        el.Entity.FormerPrisoners = new List<HistoricalFigure>();
                                    el.Entity.FormerPrisoners.Add(this);
                                    if (FormerPrisonerOf == null)
                                        FormerPrisonerOf = new List<Entity>();
                                    FormerPrisonerOf.Add(el.Entity);
                                    break;
                                case "criminal":
                                    if (el.Entity.Criminals == null)
                                        el.Entity.Criminals = new List<HistoricalFigure>();
                                    el.Entity.Criminals.Add(this);
                                    if (CriminalOf == null)
                                        CriminalOf = new List<Entity>();
                                    CriminalOf.Add(el.Entity);
                                    break;
                                case "slave":
                                    if (el.Entity.Slaves == null)
                                        el.Entity.Slaves = new List<HistoricalFigure>();
                                    el.Entity.Slaves.Add(this);
                                    if (SlaveOf == null)
                                        SlaveOf = new List<Entity>();
                                    SlaveOf.Add(el.Entity);
                                    break;
                                case "former slave":
                                    if (el.Entity.FormerSlaves == null)
                                        el.Entity.FormerSlaves = new List<HistoricalFigure>();
                                    el.Entity.FormerSlaves.Add(this);
                                    if (FormerSlaveOf == null)
                                        FormerSlaveOf = new List<Entity>();
                                    FormerSlaveOf.Add(el.Entity);
                                    break;
                                case "hero":
                                    if (el.Entity.Heroes == null)
                                        el.Entity.Heroes = new List<HistoricalFigure>();
                                    el.Entity.Heroes.Add(this);
                                    if (HeroOf == null)
                                        HeroOf = new List<Entity>();
                                    HeroOf.Add(el.Entity);
                                    break;
                                default:
                                    Program.Log(LogType.Warning, "Unknown HF Entity Link: " + linklist.Key);
                                    break;
                            }
                        }
                    }
                }
            }
            if (HFLinks != null)
            {
                foreach (var linklist in HFLinks)
                {
                    foreach (var hfl in linklist.Value.Where(hfl => hfl.HF != null))
                    {
                        switch (linklist.Key)
                        {

                            case "child":
                                if (Children == null)
                                    Children = new List<HistoricalFigure>();
                                if (!Children.Contains(hfl.HF))
                                {
                                    Children.Add(hfl.HF);
                                    if (hfl.HF.Parents == null)
                                        hfl.HF.Parents = new List<HistoricalFigure>();
                                    hfl.HF.Parents.Add(this);
                                }
                                break;
                            case "spouse":
                                if (hfl.HF.Spouses == null)
                                    hfl.HF.Spouses = new List<HistoricalFigure>();
                                if (!hfl.HF.Spouses.Contains(this))
                                {
                                    hfl.HF.Spouses.Add(this);
                                    if (Spouses == null)
                                        Spouses = new List<HistoricalFigure>();
                                    Spouses.Add(hfl.HF);
                                }
                                break;
                            case "lover":
                                if (hfl.HF.Lovers == null)
                                    hfl.HF.Lovers = new List<HistoricalFigure>();
                                if (!hfl.HF.Lovers.Contains(this))
                                {
                                    hfl.HF.Lovers.Add(this);
                                    if (Lovers == null)
                                        Lovers = new List<HistoricalFigure>();
                                    Lovers.Add(hfl.HF);
                                }
                                break;
                            case "deity":
                                if (hfl.HF.Followers == null)
                                    hfl.HF.Followers = new List<HistoricalFigure>();
                                hfl.HF.Followers.Add(this);
                                if (Deities == null)
                                    Deities = new List<HistoricalFigure>();
                                Deities.Add(hfl.HF);
                                break;
                            case "mother":
                                Mother = hfl.HF;
                                if (hfl.HF.Children == null)
                                    hfl.HF.Children = new List<HistoricalFigure>();
                                if (!hfl.HF.Children.Contains(this))
                                    hfl.HF.Children.Add(this);
                                else
                                {
                                    if (Parents == null)
                                        Parents = new List<HistoricalFigure>();
                                    if (Parents.Contains(hfl.HF))
                                        Parents.Remove(Mother);
                                }
                                break;
                            case "father":
                                Father = hfl.HF;
                                if (hfl.HF.Children == null)
                                    hfl.HF.Children = new List<HistoricalFigure>();
                                if (!hfl.HF.Children.Contains(this))
                                    hfl.HF.Children.Add(this);
                                else
                                {
                                    if (Parents == null)
                                        Parents = new List<HistoricalFigure>();
                                    if (Parents.Contains(hfl.HF))
                                        Parents.Remove(Father);
                                }
                                break;
                            case "master":
                                if (hfl.HF.Apprentices == null)
                                    hfl.HF.Apprentices = new List<HistoricalFigure>();
                                if (!hfl.HF.Apprentices.Contains(this))
                                {
                                    hfl.HF.Apprentices.Add(this);
                                    if (Masters == null)
                                        Masters = new List<HistoricalFigure>();
                                    Masters.Add(hfl.HF);
                                }
                                break;
                            case "apprentice":
                                if (hfl.HF.Masters == null)
                                    hfl.HF.Masters = new List<HistoricalFigure>();
                                if (!hfl.HF.Masters.Contains(this))
                                {
                                    hfl.HF.Masters.Add(this);
                                    if (Apprentices == null)
                                        Apprentices = new List<HistoricalFigure>();
                                    Apprentices.Add(hfl.HF);
                                }
                                break;
                            case "prisoner":
                                if (hfl.HF.Prisoners == null)
                                    hfl.HF.Prisoners = new List<HistoricalFigure>();
                                if (!hfl.HF.Prisoners.Contains(this))
                                {
                                    hfl.HF.Prisoners.Add(this);
                                }
                                break;
                            case "imprisoner":
                                if (hfl.HF.Imprisoners == null)
                                    hfl.HF.Imprisoners = new List<HistoricalFigure>();
                                if (!hfl.HF.Imprisoners.Contains(this))
                                {
                                    hfl.HF.Imprisoners.Add(this);
                                }
                                break;
                            case "companion":
                                if (hfl.HF.Companions == null)
                                    hfl.HF.Companions = new List<HistoricalFigure>();
                                if (!hfl.HF.Companions.Contains(this))
                                {
                                    hfl.HF.Companions.Add(this);
                                }
                                break;
                            default:
                                Program.Log(LogType.Warning, "Unknown HF HF Link: " + linklist.Key);
                                break;
                        }
                    }
                }
            }

            //if (EntitySquadLinks != null)
            //{
            //        foreach (var esl in EntitySquadLinks)
            //            Console.WriteLine(ToString() + " - " + esl.ToString());
            //}

            if (!isLeader || Leader.InheritanceID != -1) return;

            switch (Leader.InheritedFromSource)
            {
                case Leader.InheritanceSource.PaternalGrandMother:
                    Leader.InheritedFrom = Father.Mother;
                    break;
                case Leader.InheritanceSource.MaternalGrandMother:
                    Leader.InheritedFrom = Mother.Mother;
                    break;
                case Leader.InheritanceSource.PaternalGrandFather:
                    Leader.InheritedFrom = Father.Father;
                    break;
                case Leader.InheritanceSource.MaternalGrandFather:
                    Leader.InheritedFrom = Mother.Father;
                    break;
                case Leader.InheritanceSource.Mother:
                case Leader.InheritanceSource.Father:
                case Leader.InheritanceSource.Other:
                    break;
            }
        }

        #region Count Families
        internal void CountDescendents()
        {
            var CurrentDescendents = new List<HistoricalFigure>() ;

            var generationmax = 1;

            if (Children != null)
            {
                foreach (var hf in Children.Where(hf => !CurrentDescendents.Contains(hf)))
                {
                    CurrentDescendents.Add(hf);
                    hf.CountDescendents(CurrentDescendents, 1, ref generationmax);
                }
            }

            DescendentCount = CurrentDescendents.Count;
            DescendentGenerations = generationmax;
            CurrentDescendents.Clear();
        }

        private void CountDescendents(ICollection<HistoricalFigure> CurrentDescendents, int gen, ref int genmax)
        {
            if (!(Children != null & CurrentDescendents.Count <= 50000)) return;
            gen++;
            if (gen > genmax)
                genmax = gen;
            foreach (var hf in Children.Where(hf => !CurrentDescendents.Contains(hf)))
            {
                CurrentDescendents.Add(hf);
                hf.CountDescendents(CurrentDescendents, gen, ref genmax);
            }
        }

        internal void CountAncestors()
        {
            var CurrentAncestors = new List<HistoricalFigure>();

            if (Mother != null && !CurrentAncestors.Contains(Mother))
            {
                CurrentAncestors.Add(Mother);
                Mother.CountAncestors(CurrentAncestors);
            }
            if (Father != null && !CurrentAncestors.Contains(Father))
            {
                CurrentAncestors.Add(Father);
                Father.CountAncestors(CurrentAncestors);
            }
            
            AncestorCount = CurrentAncestors.Count;
            CurrentAncestors.Clear();
        }

        private void CountAncestors(ICollection<HistoricalFigure> CurrentAncestors)
        {
            if (Mother != null && !CurrentAncestors.Contains(Mother))
            {
                CurrentAncestors.Add(Mother);
                Mother.CountAncestors(CurrentAncestors);
            }
            if (Father == null || CurrentAncestors.Contains(Father)) return;
            CurrentAncestors.Add(Father);
            Father.CountAncestors(CurrentAncestors);
        }



        #endregion 
    
        internal override void Export(string table)
        {

            var vals = new List<object> {ID};

            if (Name == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Name.Replace("'", "''"));

            if (Race == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Race.Name.Replace("'", "''"));

            if (!Caste.HasValue)
                vals.Add(DBNull.Value);
            else
                vals.Add(Castes[Caste.Value].Replace("'", "''"));
            if (Appeared == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(Appeared.Year);
            vals.Add(Birth.Year);
            vals.Add(Birth.TotalSeconds);
            if (Death == WorldTime.Present)
            {
                vals.Add(DBNull.Value);
                vals.Add(DBNull.Value);
            }
            else
            { 
                vals.Add(Death.Year);
                vals.Add(Death.TotalSeconds);
            }

            if (!AssociatedType.HasValue)
                vals.Add(DBNull.Value);
            else
                vals.Add(AssociatedTypes[AssociatedType.Value].Replace("'", "''"));

            vals.Add(Deity);
            vals.Add(Force);
            vals.Add(Animated);
            vals.Add(Ghost );
            vals.Add(Adventurer);

            if (EntPop == null)
                vals.Add(DBNull.Value);
            else
                vals.Add(EntPop.ID);

            if (!Goal.HasValue)
                vals.Add(DBNull.Value);
            else
                vals.Add(Goals[Goal.Value]);

            if (Sphere == null)
                vals.Add(DBNull.Value);
            else
            {
                var exportText = Sphere.Aggregate("", (current, curSphere) => current + (Spheres[curSphere] + ","));
                exportText = exportText.TrimEnd(',');
                vals.Add(exportText);
            }

            if (InteractionKnowledge == null)
                vals.Add(DBNull.Value);
            else
            {
                var exportText = InteractionKnowledge.Aggregate("", (current, curInteractionKnowledge) => current + (Interactions[curInteractionKnowledge] + ","));
                exportText = exportText.TrimEnd(',');
                vals.Add(exportText);
            }

            if (JourneyPet == null)
                vals.Add(DBNull.Value);
            else
            {
                var exportText = JourneyPet.Aggregate("", (current, curJourneyPet) => current + (JourneyPets[curJourneyPet] + ","));
                exportText = exportText.TrimEnd(',');
                vals.Add(exportText);
            }

                
            Database.ExportWorldItem(table, vals);

            if (EntityFormerPositionLinks != null)
            {
                foreach (var EntityFormerPositionLink in EntityFormerPositionLinks)
                    EntityFormerPositionLink.Export(ID);
            }

            if (EntityPositionLinks != null)
            {
                foreach (var EntityPositionLink in EntityPositionLinks)
                    EntityPositionLink.Export(ID);
            }

            if (EntityReputations != null)
            {
            foreach (var EntityReputation in EntityReputations)
                EntityReputation.Export(ID);
            }

            if (HFSkills != null)
            {
            foreach (var HFSkill in HFSkills)
                HFSkill.Export(ID);
            }

            if (EntityLinks != null)
            {
            foreach (var EntityLink in EntityLinks.Values.SelectMany(EntityLinkList => EntityLinkList))
            {
                EntityLink.Export(ID);
            }
            }

            if (HFLinks != null)
            {
                foreach (var HFLink in HFLinks.Values.SelectMany(HFLinkList => HFLinkList))
                {
                    HFLink.Export(ID);
                }
            }

            if (SiteLinks == null) return;
            foreach (var SiteLink in SiteLinks.Values.SelectMany(SiteLinkList => SiteLinkList))
            {
                SiteLink.Export(ID);
            }
        }

    }

}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              