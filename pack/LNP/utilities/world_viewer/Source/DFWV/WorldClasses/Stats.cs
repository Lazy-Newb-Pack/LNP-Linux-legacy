using System.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;
using System;
using System.Collections.Generic;

namespace DFWV.WorldClasses
{
    class Stats
    {
        readonly World World;

        //Graph Data
        public readonly Dictionary<int, int> HFAliveInYear = new Dictionary<int, int>();
        public readonly Dictionary<int, int> SitesInYear = new Dictionary<int, int>();

        //Other Data
        private readonly Dictionary<string, List<HistoricalFigure>> SphereAllegiance = new Dictionary<string, List<HistoricalFigure>>();
        private readonly Dictionary<Race, WorldTime> AverageLifeSpan = new Dictionary<Race, WorldTime>();
        private readonly Dictionary<Race, int> DeadHFs = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> KilledHFs = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> LivingHFs = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> SitesPerRace = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> CivsPerRace = new Dictionary<Race, int>();
        private readonly Dictionary<string, int> EntitiesByType = new Dictionary<string, int>();
        private readonly Dictionary<Race, int> EntGroupsPerRace = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> EntReligionPerRace = new Dictionary<Race, int>();
        private readonly Dictionary<Race, int> EntOtherPerRace = new Dictionary<Race, int>();
        private readonly Dictionary<string, int> AssociatedTypesCount = new Dictionary<string, int>();
        private readonly Dictionary<string, int> CastesCount = new Dictionary<string, int>();
        private readonly Dictionary<string, int> InteractionCount = new Dictionary<string, int>();
        private readonly Dictionary<string, int> PetCount = new Dictionary<string, int>();
        private readonly Dictionary<string, int> GoalCount = new Dictionary<string, int>();


        private int DeityHFs;
        private int AnimatedHFs;
        private int GhostHFs;
        private int AdventurerHFs;
        private int ForceHFs;
        private int GodHFs;
        private int LeaderHFs;
        private int MaleHFs;
        private int FemaleHFs;
        private int NonGenderHFs;

        private int OverallDeadHFs;
        private int OverallKilledHFs;
        private int OverallLivingHFs;
        private WorldTime OverallAverageLifeSpan = new WorldTime(0);

        #region Remove later


        //public int? CurrentIdentityID { get; set; }
        //public int? UsedIdentityID { get; set; }
        //public string HoldsArtifact { get; set; }

        //public int CreatedArtifactCount { get { return CreatedArtifacts == null ? 0 : CreatedArtifacts.Count; } }
        //public int CreatedMasterpieceCount { get { return Events == null ? 0 : Events.Where(x => HistoricalEvent.Types[x.Type].Contains("masterpiece")).Count(); } }
        //public int ChildrenCount { get { return Children == null ? 0 : Children.Count; } }
        //public int Kills { get { return SlayingEvents == null ? 0 : SlayingEvents.Count; } }
        //public int Battles { get { return BattleEventCollections == null ? 0 : BattleEventCollections.Count; } }
        //public string DispNameLower { get { return ToString().ToLower(); } }
        //public int EntPopID { get { return EntPop == null ? -1 : EntPop.ID; } }
        //public int DescendentCount { get; set; }
        //public int AncestorCount { get; set; }
        //public int DescendentGenerations { get; set; }
        //public bool PlayerControlled { get; set; }
        //public string Job { get { return AssociatedType.HasValue ? AssociatedTypes[AssociatedType.Value] : ""; } }
        //public string HFCaste { get { return Caste.HasValue ? Castes[Caste.Value] : ""; } }

        #endregion


        public Stats(World world)
        {
            World = world;
        }

        internal void Gather()
        {
            var TotalLifeSpan = new Dictionary<Race, WorldTime>();
            var OverallTotalLifeSpan = new WorldTime(0);

            foreach (var sphere in HistoricalFigure.Spheres)
                SphereAllegiance.Add(sphere, new List<HistoricalFigure>());

            foreach (var race in World.Races.Values)
            {
                TotalLifeSpan.Add(race, new WorldTime(0));
                AverageLifeSpan.Add(race, new WorldTime(0));
                DeadHFs.Add(race,0);
                KilledHFs.Add(race, 0);
                LivingHFs.Add(race, 0);
                SitesPerRace.Add(race,0);
                CivsPerRace.Add(race, 0);
                EntGroupsPerRace.Add(race, 0);
                EntReligionPerRace.Add(race, 0);
                EntOtherPerRace.Add(race, 0);
            }

            foreach (var caste in HistoricalFigure.Castes)
                CastesCount.Add(caste, 0);

            foreach (var job in HistoricalFigure.AssociatedTypes)
                AssociatedTypesCount.Add(job, 0);

            foreach (var job in HistoricalFigure.Interactions)
                InteractionCount.Add(job, 0);

            foreach (var job in HistoricalFigure.JourneyPets)
                PetCount.Add(job, 0);

            foreach (var job in HistoricalFigure.Goals)
                GoalCount.Add(job, 0);


            foreach (var HF in World.HistoricalFigures.Values)
            {

                if (HF.Deity)
                    DeityHFs++;
                if (HF.Animated)
                    AnimatedHFs++;
                if (HF.Ghost)
                    GhostHFs++;
                if (HF.Adventurer)
                    AdventurerHFs++;
                if (HF.Force)
                    ForceHFs++;
                if (HF.isGod)
                    GodHFs++;
                if (HF.isLeader)
                    LeaderHFs++;

                if (HF.isFemale)
                    FemaleHFs++;
                else if (HF.isMale)
                    MaleHFs++;
                else
                    NonGenderHFs++;

               
                if (HF.Caste.HasValue)
                    CastesCount[HistoricalFigure.Castes[HF.Caste.Value]]++;
                if (HF.AssociatedType.HasValue)
                    AssociatedTypesCount[HistoricalFigure.AssociatedTypes[HF.AssociatedType.Value]]++;
                if (HF.JourneyPet != null)
                {
                    foreach (var pet in HF.JourneyPet)
                        PetCount[HistoricalFigure.JourneyPets[pet]]++;
                }
                if (HF.InteractionKnowledge != null)
                {
                    foreach (var knowledge in HF.InteractionKnowledge)
                        InteractionCount[HistoricalFigure.Interactions[knowledge]]++;
                }
                if (HF.ActiveInteraction.HasValue)
                {
                    if (HF.InteractionKnowledge == null || !HF.InteractionKnowledge.Contains(HF.ActiveInteraction.Value))
                        InteractionCount[HistoricalFigure.Interactions[HF.ActiveInteraction.Value]]++;
                }
                if (HF.Goal.HasValue)
                    GoalCount[HistoricalFigure.Goals[HF.Goal.Value]]++;

                if (HF.Sphere != null)
                {
                    foreach (var sphere in HF.Sphere)
                        SphereAllegiance[HistoricalFigure.Spheres[sphere]].Add(HF);
                }
                if (HF.Dead)
                {
                    OverallDeadHFs++;
                    if (HF.Race != null)
                        DeadHFs[HF.Race]++;

                    if (HF.DiedEvent != null && HF.DiedEvent.SlayerHF != null)
                    { 
                        OverallKilledHFs++;
                        if (HF.Race != null)
                            KilledHFs[HF.Race]++;
                    }
                    if (HF.DiedEvent != null)
                    {
                        var lifeSpan = (HF.DiedEvent.Time - HF.Birth);
                        if (HF.Race != null)
                            TotalLifeSpan[HF.Race] += lifeSpan;
                        OverallTotalLifeSpan += lifeSpan;
                    }
                }
                else
                {
                    if (HF.Race != null)
                        LivingHFs[HF.Race]++;
                    OverallLivingHFs++;
                }
            }

            foreach (var site in World.Sites.Values)
            {
                if (site.Owner != null && site.Owner.Race != null)
                    SitesPerRace[site.Owner.Race]++;
                else if (site.Parent != null && site.Parent.Race != null)
                    SitesPerRace[site.Owner.Race]++;
            }

            foreach (var civ in World.Civilizations.Where(civ => civ.Race != null))
            {
                CivsPerRace[civ.Race]++;
            }

            foreach (var ent in World.Entities.Values)
            {
                if (!EntitiesByType.ContainsKey(ent.Type))
                    EntitiesByType.Add(ent.Type, 0);
                EntitiesByType[ent.Type]++;
                if (ent.Race == null) continue;
                switch (ent.Type)
                {
                    case "Group":
                        EntGroupsPerRace[ent.Race]++;
                        break;
                    case "Religion":
                        EntReligionPerRace[ent.Race]++;
                        break;
                    case "Other":
                        EntOtherPerRace[ent.Race]++;
                        break;
                }
            }

            foreach (var race in World.Races.Values)
            {
                if (DeadHFs[race] > 0)
                    AverageLifeSpan[race] = TotalLifeSpan[race] / DeadHFs[race];
                else
                {
                    AverageLifeSpan.Remove(race);
                    DeadHFs.Remove(race);
                    KilledHFs.Remove(race);
                    LivingHFs.Remove(race);
                }
            }
                

            OverallAverageLifeSpan = OverallTotalLifeSpan / OverallDeadHFs;

            CreateGraphData();

        }

        private void CreateGraphData()
        {
            CreateHFPopulationGraph();
            CreateSiteGraph();
        }

        private void CreateSiteGraph()
        {
            var SitesBuiltInYear = new Dictionary<int, int>();
            var SitesDestroyedInYear = new Dictionary<int, int>();

            var earliestSiteBuilt = 0;
            var earliestSiteDestroyed = 0;
            var latestSiteBuilt = 0;
            var latestSiteDestroyed = 0;

            foreach (var site in World.Sites.Values)
            {
                var createdYear = site.CreatedEvent != null ? site.CreatedEvent.Time.Year : 0;

                if (!SitesBuiltInYear.ContainsKey(createdYear))
                    SitesBuiltInYear.Add(createdYear, 1);
                else
                    SitesBuiltInYear[createdYear]++;

                if (createdYear < earliestSiteBuilt)
                    earliestSiteBuilt = createdYear;
                else if (createdYear > latestSiteBuilt)
                    latestSiteBuilt = createdYear;

                if (site.ReclaimedEvents != null)
                {
                    foreach (var evt in site.ReclaimedEvents)
                    {
                        if (!SitesBuiltInYear.ContainsKey(evt.Time.Year))
                            SitesBuiltInYear.Add(evt.Time.Year, 1);
                        else
                            SitesBuiltInYear[evt.Time.Year]++;

                        if (evt.Time.Year < earliestSiteBuilt)
                            earliestSiteBuilt = evt.Time.Year;
                        else if (evt.Time.Year > latestSiteBuilt)
                            latestSiteBuilt = evt.Time.Year;
                    }
                }

                if (site.DestroyedEvents == null) continue;
                foreach (var evt in site.DestroyedEvents)
                {
                    if (!SitesDestroyedInYear.ContainsKey(evt.Time.Year))
                        SitesDestroyedInYear.Add(evt.Time.Year, 1);
                    else
                        SitesDestroyedInYear[evt.Time.Year]++;

                    if (evt.Time.Year < earliestSiteDestroyed)
                        earliestSiteDestroyed = evt.Time.Year;
                    else if (evt.Time.Year > latestSiteDestroyed)
                        latestSiteDestroyed = evt.Time.Year;
                }
            }

            SitesInYear.Clear();
            SitesInYear.Add(earliestSiteBuilt - 1, 0);

            for (var y = earliestSiteBuilt; y <= Math.Max(latestSiteBuilt, latestSiteDestroyed); y++)
            {
                SitesInYear.Add(y, SitesInYear[y - 1]);
                if (!SitesBuiltInYear.ContainsKey(y))
                    SitesBuiltInYear.Add(y, 0);
                if (!SitesDestroyedInYear.ContainsKey(y))
                    SitesDestroyedInYear.Add(y, 0);

                SitesInYear[y] += SitesBuiltInYear[y] - SitesDestroyedInYear[y];
            }

        }

        private void CreateHFPopulationGraph()
        {
            var HFBirthsInYear = new Dictionary<int, int>();
            var HFDeathsInYear = new Dictionary<int, int>();

            var earliestBirth = int.MaxValue;
            var earliestDeath = int.MaxValue;
            var latestBirth = int.MinValue;
            var latestDeath = int.MinValue;

            foreach (var hf in World.HistoricalFigures.Values)
            {
                if (!HFBirthsInYear.ContainsKey(hf.Birth.Year))
                    HFBirthsInYear.Add(hf.Birth.Year, 1);
                else
                    HFBirthsInYear[hf.Birth.Year]++;

                if (hf.Birth.Year < earliestBirth)
                    earliestBirth = hf.Birth.Year;
                else if (hf.Birth.Year > latestBirth)
                    latestBirth = hf.Birth.Year;

                if (!hf.Dead) continue;
                if (!HFDeathsInYear.ContainsKey(hf.Death.Year))
                    HFDeathsInYear.Add(hf.Death.Year, 1);
                else
                    HFDeathsInYear[hf.Death.Year]++;

                if (hf.Death.Year < earliestDeath)
                    earliestDeath = hf.Death.Year;
                else if (hf.Death.Year > latestDeath)
                    latestDeath = hf.Death.Year;
            }

            HFAliveInYear.Add(earliestBirth - 1, 0);

            for (var y = earliestBirth; y <= Math.Max(latestDeath, latestBirth); y++)
            {
                HFAliveInYear.Add(y, HFAliveInYear[y - 1]);
                if (!HFBirthsInYear.ContainsKey(y))
                    HFBirthsInYear.Add(y, 0);
                if (!HFDeathsInYear.ContainsKey(y))
                    HFDeathsInYear.Add(y, 0);

                HFAliveInYear[y] += HFBirthsInYear[y] - HFDeathsInYear[y];
            }
        }


    }
}
