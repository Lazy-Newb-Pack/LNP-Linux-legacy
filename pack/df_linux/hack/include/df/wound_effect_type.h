/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WOUND_EFFECT_TYPE_H
#define DF_WOUND_EFFECT_TYPE_H
namespace df {
  namespace enums {
    namespace wound_effect_type {
      enum wound_effect_type : int16_t {
        Bruise,
        Burn,
        Frostbite,
        Burn2,
        Melting,
        Boiling,
        Freezing,
        Condensation,
        Necrosis,
        Blister
      };
    }
  }
  using enums::wound_effect_type::wound_effect_type;
  template<> struct DFHACK_EXPORT identity_traits<wound_effect_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<wound_effect_type> {
    typedef int16_t base_type;
    typedef wound_effect_type enum_type;
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
