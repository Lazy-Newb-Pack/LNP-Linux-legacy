/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_AMMO_FLAGS_H
#define DF_AMMO_FLAGS_H
namespace df {
  namespace enums {
    namespace ammo_flags {
      enum ammo_flags : int32_t {
        HAS_EDGE_ATTACK
      };
    }
  }
  using enums::ammo_flags::ammo_flags;
  template<> struct DFHACK_EXPORT identity_traits<ammo_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ammo_flags> {
    typedef int32_t base_type;
    typedef ammo_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 0;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[1];
  };
}
#endif
