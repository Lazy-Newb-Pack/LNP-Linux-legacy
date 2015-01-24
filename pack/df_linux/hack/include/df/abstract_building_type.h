/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_TYPE_H
#define DF_ABSTRACT_BUILDING_TYPE_H
namespace df {
  namespace enums {
    namespace abstract_building_type {
      enum abstract_building_type : int32_t {
        MEAD_HALL,
        KEEP,
        TEMPLE,
        DARK_TOWER,
        MARKET,
        TOMB,
        DUNGEON,
        UNDERWORLD_SPIRE
      };
    }
  }
  using enums::abstract_building_type::abstract_building_type;
  template<> struct DFHACK_EXPORT identity_traits<abstract_building_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<abstract_building_type> {
    typedef int32_t base_type;
    typedef abstract_building_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
