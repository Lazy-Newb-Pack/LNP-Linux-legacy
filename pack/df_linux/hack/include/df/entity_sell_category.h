/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_SELL_CATEGORY_H
#define DF_ENTITY_SELL_CATEGORY_H
namespace df {
  namespace enums {
    namespace entity_sell_category {
      enum entity_sell_category : int32_t {
        Leather,
        ClothPlant,
        ClothSilk,
        Crafts,
        Wood,
        MetalBars,
        SmallCutGems,
        LargeCutGems,
        StoneBlocks,
        Seeds,
        Anvils,
        Weapons,
        TrainingWeapons,
        Ammo,
        TrapComponents,
        DiggingImplements,
        Bodywear,
        Headwear,
        Handwear,
        Footwear,
        Legwear,
        Shields,
        Toys,
        Instruments,
        Pets,
        Drinks,
        Cheese,
        Powders,
        Extracts,
        Meat,
        Fish,
        Plants,
        FruitsNuts,
        GardenVegetables,
        MeatFishRecipes,
        OtherRecipes,
        Stone,
        Cages,
        BagsLeather,
        BagsPlant,
        BagsSilk,
        ThreadPlant,
        ThreadSilk,
        RopesPlant,
        RopesSilk,
        Barrels,
        FlasksWaterskins,
        Quivers,
        Backpacks,
        Sand,
        Glass,
        Miscellaneous,
        Buckets,
        Splints,
        Crutches,
        Eggs,
        BagsYarn,
        RopesYarn,
        ClothYarn,
        ThreadYarn,
        Tools,
        Clay
      };
    }
  }
  using enums::entity_sell_category::entity_sell_category;
  template<> struct DFHACK_EXPORT identity_traits<entity_sell_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_sell_category> {
    typedef int32_t base_type;
    typedef entity_sell_category enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 61;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[62];
  };
}
#endif
