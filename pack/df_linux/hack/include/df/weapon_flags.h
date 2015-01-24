/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WEAPON_FLAGS_H
#define DF_WEAPON_FLAGS_H
namespace df {
  namespace enums {
    namespace weapon_flags {
      enum weapon_flags : int32_t {
        CAN_STONE,
        HAS_EDGE_ATTACK,
        TRAINING
      };
    }
  }
  using enums::weapon_flags::weapon_flags;
  template<> struct DFHACK_EXPORT identity_traits<weapon_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<weapon_flags> {
    typedef int32_t base_type;
    typedef weapon_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
