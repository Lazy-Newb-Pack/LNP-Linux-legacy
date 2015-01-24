/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CIVZONE_TYPE_H
#define DF_CIVZONE_TYPE_H
namespace df {
  namespace enums {
    namespace civzone_type {
      enum civzone_type : int16_t {
        Home,
        CraftShop,
        Basement,
        WeaponsmithsShop,
        ArmorsmithsShop,
        GeneralStore,
        FoodShop,
        MeadHall,
        ThroneRoom,
        ActivityZone,
        Temple,
        Kitchen,
        CaptiveRoom,
        TowerTop,
        Courtyard,
        Treasury,
        GuardPost,
        Entrance,
        SecretLibrary,
        Library,
        Plot,
        MarketStall
      };
    }
  }
  using enums::civzone_type::civzone_type;
  template<> struct DFHACK_EXPORT identity_traits<civzone_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<civzone_type> {
    typedef int16_t base_type;
    typedef civzone_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 21;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[22];
  };
}
#endif
