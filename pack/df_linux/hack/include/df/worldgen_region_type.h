/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLDGEN_REGION_TYPE_H
#define DF_WORLDGEN_REGION_TYPE_H
namespace df {
  namespace enums {
    namespace worldgen_region_type {
      enum worldgen_region_type : int32_t {
        SWAMP,
        DESERT,
        FOREST,
        MOUNTAINS,
        OCEAN,
        LAKE,
        GLACIER,
        TUNDRA,
        GRASSLAND,
        HILLS
      };
    }
  }
  using enums::worldgen_region_type::worldgen_region_type;
  template<> struct DFHACK_EXPORT identity_traits<worldgen_region_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<worldgen_region_type> {
    typedef int32_t base_type;
    typedef worldgen_region_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[10];
  };
}
#endif
