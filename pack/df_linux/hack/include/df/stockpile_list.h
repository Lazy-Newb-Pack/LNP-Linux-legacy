/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOCKPILE_LIST_H
#define DF_STOCKPILE_LIST_H
namespace df {
  namespace enums {
    namespace stockpile_list {
      enum stockpile_list : int32_t {
        Animals,
        Food,
        FoodMeat,
        FoodFish,
        FoodUnpreparedFish,
        FoodEgg,
        FoodPlants,
        FoodDrinkPlant,
        FoodDrinkAnimal,
        FoodCheesePlant,
        FoodCheeseAnimal,
        FoodSeeds,
        FoodLeaves,
        FoodMilledPlant,
        FoodBoneMeal,
        FoodFat,
        FoodPaste,
        FoodPressedMaterial,
        FoodExtractPlant,
        FoodExtractAnimal,
        FoodMiscLiquid,
        Furniture,
        FurnitureType,
        FurnitureStoneClay,
        FurnitureMetal,
        FurnitureOtherMaterials,
        FurnitureCoreQuality,
        FurnitureTotalQuality,
        Corpses,
        Refuse,
        RefuseItems,
        RefuseCorpses,
        RefuseParts,
        RefuseSkulls,
        RefuseBones,
        RefuseShells,
        RefuseTeeth,
        RefuseHorns,
        RefuseHair,
        Stone,
        StoneOres,
        StoneEconomic,
        StoneOther,
        StoneClay,
        Ammo,
        AmmoType,
        AmmoMetal,
        AmmoOther,
        AmmoCoreQuality,
        AmmoTotalQuality,
        Coins,
        BarsBlocks,
        BarsMetal,
        BarsOther,
        BlocksStone,
        BlocksMetal,
        BlocksOther,
        Gems,
        RoughGem,
        RoughGlass,
        CutGem,
        CutGlass,
        Goods,
        GoodsType,
        GoodsStone,
        GoodsMetal,
        GoodsOther,
        GoodsCoreQuality,
        GoodsTotalQuality,
        Leather,
        Cloth,
        ThreadSilk,
        ThreadPlant,
        ThreadYarn,
        ThreadMetal,
        ClothSilk,
        ClothPlant,
        ClothYarn,
        ClothMetal,
        Wood,
        Weapons,
        WeaponsType,
        WeaponsTrapcomp,
        WeaponsMetal,
        WeaponsStone,
        WeaponsOther,
        WeaponsCoreQuality,
        WeaponsTotalQuality,
        Armor,
        ArmorBody,
        ArmorHead,
        ArmorFeet,
        ArmorHands,
        ArmorLegs,
        ArmorShield,
        ArmorMetal,
        ArmorOther,
        ArmorCoreQuality,
        ArmorTotalQuality,
        AdditionalOptions
      };
    }
  }
  using enums::stockpile_list::stockpile_list;
  template<> struct DFHACK_EXPORT identity_traits<stockpile_list> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<stockpile_list> {
    typedef int32_t base_type;
    typedef stockpile_list enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 99;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[100];
    struct attr_entry_type {
      bool is_category;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[100+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
