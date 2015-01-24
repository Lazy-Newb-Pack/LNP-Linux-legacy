/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SLAB_ENGRAVING_TYPE_H
#define DF_SLAB_ENGRAVING_TYPE_H
namespace df {
  namespace enums {
    namespace slab_engraving_type {
      enum slab_engraving_type : int16_t {
        Slab = -1,
        Memorial,
        CraftShopSign,
        WeaponsmithShopSign,
        ArmorsmithShopSign,
        GeneralStoreSign,
        FoodShopSign,
        /**
         * from the gods?
         */
        Secrets,
        FoodImportsSign,
        ClothingImportsSign,
        GeneralImportsSign,
        ClothShopSign,
        LeatherShopSign,
        WovenClothingShopSign,
        LeatherClothingShopSign,
        BoneCarverShopSign,
        GemCutterShopSign,
        WeaponsmithShopSign2,
        BowyerShopSign,
        BlacksmithShopSign,
        ArmorsmithShopSign2,
        MetalCraftShopSign,
        LeatherGoodsShopSign,
        CarpenterShopSign,
        StoneFurnitureShopSign,
        MetalFurnitureShopSign,
        /**
         * when a demon assumes identity?
         */
        DemonIdentity,
        TavernSign
      };
    }
  }
  using enums::slab_engraving_type::slab_engraving_type;
  template<> struct DFHACK_EXPORT identity_traits<slab_engraving_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<slab_engraving_type> {
    typedef int16_t base_type;
    typedef slab_engraving_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 26;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[28];
  };
}
#endif
