/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REGION_MAP_ENTRY_FLAGS_H
#define DF_REGION_MAP_ENTRY_FLAGS_H
namespace df {
  namespace enums {
    namespace region_map_entry_flags {
      enum region_map_entry_flags : int32_t {
        has_river,
        tile_variant,
        anon_1,
        has_site,
        anon_2,
        river_up,
        river_down,
        river_right,
        river_left,
        discovered,
        anon_3,
        anon_4,
        anon_5,
        is_peak,
        is_lake,
        is_brook,
        has_road,
        anon_6,
        anon_7,
        anon_8,
        anon_9,
        anon_10,
        anon_11,
        anon_12
      };
    }
  }
  using enums::region_map_entry_flags::region_map_entry_flags;
  template<> struct DFHACK_EXPORT identity_traits<region_map_entry_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<region_map_entry_flags> {
    typedef int32_t base_type;
    typedef region_map_entry_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 23;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[24];
  };
}
#endif
