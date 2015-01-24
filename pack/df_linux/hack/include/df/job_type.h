/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_TYPE_H
#define DF_JOB_TYPE_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_JOB_TYPE_CLASS_H
#include "job_type_class.h"
#endif
#ifndef DF_UNIT_LABOR_H
#include "unit_labor.h"
#endif
namespace df {
  namespace enums {
    namespace job_type {
      enum job_type : int16_t {
        CarveFortification,
        DetailWall,
        DetailFloor,
        Dig,
        CarveUpwardStaircase,
        CarveDownwardStaircase,
        CarveUpDownStaircase,
        CarveRamp,
        DigChannel,
        FellTree,
        GatherPlants,
        RemoveConstruction,
        CollectWebs,
        BringItemToDepot,
        BringItemToShop,
        Eat,
        GetProvisions,
        Drink,
        Drink2,
        FillWaterskin,
        FillWaterskin2,
        Sleep,
        CollectSand,
        Fish,
        Hunt,
        HuntVermin,
        Kidnap,
        BeatCriminal,
        StartingFistFight,
        CollectTaxes,
        GuardTaxCollector,
        CatchLiveLandAnimal,
        CatchLiveFish,
        ReturnKill,
        CheckChest,
        StoreOwnedItem,
        PlaceItemInTomb,
        StoreItemInStockpile,
        StoreItemInBag,
        StoreItemInHospital,
        anon_1,
        anon_2,
        StoreWeapon,
        StoreArmor,
        StoreItemInBarrel,
        StoreItemInBin,
        SeekArtifact,
        SeekInfant,
        AttendParty,
        GoShopping,
        GoShopping2,
        Clean,
        Rest,
        PickupEquipment,
        DumpItem,
        StrangeMoodCrafter,
        StrangeMoodJeweller,
        StrangeMoodForge,
        StrangeMoodMagmaForge,
        StrangeMoodBrooding,
        StrangeMoodFell,
        StrangeMoodCarpenter,
        StrangeMoodMason,
        StrangeMoodBowyer,
        StrangeMoodTanner,
        StrangeMoodWeaver,
        StrangeMoodGlassmaker,
        StrangeMoodMechanics,
        ConstructBuilding,
        ConstructDoor,
        ConstructFloodgate,
        ConstructBed,
        ConstructThrone,
        ConstructCoffin,
        ConstructTable,
        ConstructChest,
        ConstructBin,
        ConstructArmorStand,
        ConstructWeaponRack,
        ConstructCabinet,
        ConstructStatue,
        ConstructBlocks,
        MakeRawGlass,
        MakeCrafts,
        MintCoins,
        CutGems,
        CutGlass,
        EncrustWithGems,
        EncrustWithGlass,
        DestroyBuilding,
        SmeltOre,
        MeltMetalObject,
        ExtractMetalStrands,
        PlantSeeds,
        HarvestPlants,
        TrainHuntingAnimal,
        TrainWarAnimal,
        MakeWeapon,
        ForgeAnvil,
        ConstructCatapultParts,
        ConstructBallistaParts,
        MakeArmor,
        MakeHelm,
        MakePants,
        StudWith,
        ButcherAnimal,
        PrepareRawFish,
        MillPlants,
        BaitTrap,
        MilkCreature,
        MakeCheese,
        ProcessPlants,
        anon_3,
        ProcessPlantsVial,
        ProcessPlantsBarrel,
        PrepareMeal,
        WeaveCloth,
        MakeGloves,
        MakeShoes,
        MakeShield,
        MakeCage,
        MakeChain,
        MakeFlask,
        MakeGoblet,
        MakeInstrument,
        MakeToy,
        MakeAnimalTrap,
        MakeBarrel,
        MakeBucket,
        MakeWindow,
        MakeTotem,
        MakeAmmo,
        DecorateWith,
        MakeBackpack,
        MakeQuiver,
        MakeBallistaArrowHead,
        AssembleSiegeAmmo,
        LoadCatapult,
        LoadBallista,
        FireCatapult,
        FireBallista,
        ConstructMechanisms,
        MakeTrapComponent,
        LoadCageTrap,
        LoadStoneTrap,
        LoadWeaponTrap,
        CleanTrap,
        CastSpell,
        LinkBuildingToTrigger,
        PullLever,
        anon_4,
        ExtractFromPlants,
        ExtractFromRawFish,
        ExtractFromLandAnimal,
        TameVermin,
        TameAnimal,
        ChainAnimal,
        UnchainAnimal,
        UnchainPet,
        ReleaseLargeCreature,
        ReleasePet,
        ReleaseSmallCreature,
        HandleSmallCreature,
        HandleLargeCreature,
        CageLargeCreature,
        CageSmallCreature,
        RecoverWounded,
        DiagnosePatient,
        ImmobilizeBreak,
        DressWound,
        CleanPatient,
        Surgery,
        Suture,
        SetBone,
        PlaceInTraction,
        DrainAquarium,
        FillAquarium,
        FillPond,
        GiveWater,
        GiveFood,
        /**
         * for pets
         */
        GiveWater2,
        /**
         * for pets
         */
        GiveFood2,
        RecoverPet,
        PitLargeAnimal,
        PitSmallAnimal,
        SlaughterAnimal,
        MakeCharcoal,
        MakeAsh,
        MakeLye,
        MakePotashFromLye,
        FertilizeField,
        MakePotashFromAsh,
        DyeThread,
        DyeCloth,
        SewImage,
        MakePipeSection,
        OperatePump,
        ManageWorkOrders,
        UpdateStockpileRecords,
        TradeAtDepot,
        ConstructHatchCover,
        ConstructGrate,
        RemoveStairs,
        ConstructQuern,
        ConstructMillstone,
        ConstructSplint,
        ConstructCrutch,
        ConstructTractionBench,
        CleanSelf,
        BringCrutch,
        ApplyCast,
        CustomReaction,
        ConstructSlab,
        EngraveSlab,
        ShearCreature,
        SpinThread,
        PenLargeAnimal,
        PenSmallAnimal,
        MakeTool,
        CollectClay,
        InstallColonyInHive,
        CollectHiveProducts,
        CauseTrouble,
        /**
         * ??
         */
        DrinkBlood,
        ReportCrime,
        ExecuteCriminal,
        TrainAnimal,
        CarveTrack,
        PushTrackVehicle,
        PlaceTrackVehicle,
        StoreItemInVehicle,
        GeldAnimal
      };
    }
  }
  using enums::job_type::job_type;
  template<> struct DFHACK_EXPORT identity_traits<job_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_type> {
    typedef int16_t base_type;
    typedef job_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 231;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[232];
    struct attr_entry_type {
      const char* caption;
      df::job_type_class type;
      df::unit_labor labor;
      df::item_type item;
      enum_list_attr<df::item_type> possible_item;
      const char* material;
      df::job_skill skill;
      df::job_skill skill_stone;
      df::job_skill skill_wood;
      df::job_skill skill_metal;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[232+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
