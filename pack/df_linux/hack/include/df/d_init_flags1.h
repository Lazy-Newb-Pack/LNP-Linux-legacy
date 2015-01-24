/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_FLAGS1_H
#define DF_D_INIT_FLAGS1_H
namespace df {
  namespace enums {
    namespace d_init_flags1 {
      enum d_init_flags1 : int32_t {
        VARIED_GROUND_TILES,
        ENGRAVINGS_START_OBSCURED,
        SHOW_IMP_QUALITY,
        SHOW_FLOW_AMOUNTS
      };
    }
  }
  using enums::d_init_flags1::d_init_flags1;
  template<> struct DFHACK_EXPORT identity_traits<d_init_flags1> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<d_init_flags1> {
    typedef int32_t base_type;
    typedef d_init_flags1 enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
