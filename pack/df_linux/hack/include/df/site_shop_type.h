/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_SHOP_TYPE_H
#define DF_SITE_SHOP_TYPE_H
namespace df {
  namespace enums {
    namespace site_shop_type {
      enum site_shop_type : int32_t {
        GeneralImports,
        FoodImports,
        ClothingImports,
        Cloth,
        Leather,
        WovenClothing,
        LeatherClothing,
        BoneCarver,
        GemCutter,
        Weaponsmith,
        Bowyer,
        Blacksmith,
        Armorsmith,
        MetalCraft,
        LeatherGoods,
        Carpenter,
        StoneFurniture,
        MetalFurniture,
        ImportedGoodsMarket,
        ImportedFoodMarket,
        ImportedClothingMarket,
        MeatMarket,
        FruitAndVegetableMarket,
        CheeseMarket,
        ProcessedGoodsMarket,
        Tavern
      };
    }
  }
  using enums::site_shop_type::site_shop_type;
  template<> struct DFHACK_EXPORT identity_traits<site_shop_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<site_shop_type> {
    typedef int32_t base_type;
    typedef site_shop_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 25;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[26];
  };
}
#endif
