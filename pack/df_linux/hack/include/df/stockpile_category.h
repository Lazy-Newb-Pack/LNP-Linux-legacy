/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOCKPILE_CATEGORY_H
#define DF_STOCKPILE_CATEGORY_H
namespace df {
  namespace enums {
    namespace stockpile_category {
      enum stockpile_category : int16_t {
        Remove = -1,
        Animals,
        Food,
        Furniture,
        Corpses,
        Refuse,
        Stone,
        Ore,
        Ammo,
        Coins,
        Bars,
        Gems,
        Goods,
        Leather,
        Cloth,
        Wood,
        Weapons,
        Armor,
        Custom
      };
    }
  }
  using enums::stockpile_category::stockpile_category;
  template<> struct DFHACK_EXPORT identity_traits<stockpile_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<stockpile_category> {
    typedef int16_t base_type;
    typedef stockpile_category enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 17;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[19];
  };
}
#endif
