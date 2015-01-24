/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_LOCATION_HINT_H
#define DF_INTERACTION_EFFECT_LOCATION_HINT_H
namespace df {
  namespace enums {
    namespace interaction_effect_location_hint {
      enum interaction_effect_location_hint : int32_t {
        IN_WATER,
        IN_MAGMA,
        NO_WATER,
        NO_MAGMA
      };
    }
  }
  using enums::interaction_effect_location_hint::interaction_effect_location_hint;
  template<> struct DFHACK_EXPORT identity_traits<interaction_effect_location_hint> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<interaction_effect_location_hint> {
    typedef int32_t base_type;
    typedef interaction_effect_location_hint enum_type;
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
