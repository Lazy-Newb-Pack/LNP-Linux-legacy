/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ORGANIC_MAT_CATEGORY_H
#define DF_ORGANIC_MAT_CATEGORY_H
namespace df {
  namespace enums {
    namespace organic_mat_category {
      enum organic_mat_category : int32_t {
        Meat,
        Fish,
        UnpreparedFish,
        Eggs,
        Plants,
        PlantDrink,
        CreatureDrink,
        PlantCheese,
        CreatureCheese,
        Seed,
        Leaf,
        PlantPowder,
        CreaturePowder,
        Glob,
        PlantLiquid,
        CreatureLiquid,
        MiscLiquid,
        Leather,
        Silk,
        PlantFiber,
        Bone,
        Shell,
        Wood,
        Horn,
        Pearl,
        Tooth,
        EdibleCheese,
        AnyDrink,
        EdiblePlant,
        CookableLiquid,
        CookablePowder,
        CookableSeed,
        CookableLeaf,
        Paste,
        Pressed,
        Yarn,
        MetalThread
      };
    }
  }
  using enums::organic_mat_category::organic_mat_category;
  template<> struct DFHACK_EXPORT identity_traits<organic_mat_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<organic_mat_category> {
    typedef int32_t base_type;
    typedef organic_mat_category enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 36;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[37];
  };
}
#endif
