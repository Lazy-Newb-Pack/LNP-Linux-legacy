/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLDGEN_RANGE_TYPE_H
#define DF_WORLDGEN_RANGE_TYPE_H
namespace df {
  namespace enums {
    namespace worldgen_range_type {
      enum worldgen_range_type : int32_t {
        ELEVATION,
        RAINFALL,
        anon_1,
        TEMPERATURE,
        anon_2,
        DRAINAGE,
        VOLCANISM,
        SAVAGERY,
        anon_3,
        anon_4,
        anon_5,
        anon_6,
        anon_7,
        anon_8,
        anon_9,
        anon_10,
        anon_11,
        anon_12,
        anon_13,
        anon_14,
        anon_15,
        anon_16,
        anon_17,
        anon_18
      };
    }
  }
  using enums::worldgen_range_type::worldgen_range_type;
  template<> struct DFHACK_EXPORT identity_traits<worldgen_range_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<worldgen_range_type> {
    typedef int32_t base_type;
    typedef worldgen_range_type enum_type;
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
