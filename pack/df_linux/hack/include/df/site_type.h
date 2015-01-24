/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_TYPE_H
#define DF_SITE_TYPE_H
namespace df {
  namespace enums {
    namespace site_type {
      enum site_type : int32_t {
        PLAYER_FORTRESS,
        DARK_FORTRESS,
        CAVE,
        CAVE_DETAILED,
        TREE_CITY,
        CITY,
        anon_1,
        anon_2,
        FORTRESS,
        anon_3,
        MONUMENT
      };
    }
  }
  using enums::site_type::site_type;
  template<> struct DFHACK_EXPORT identity_traits<site_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<site_type> {
    typedef int32_t base_type;
    typedef site_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 10;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
}
#endif
