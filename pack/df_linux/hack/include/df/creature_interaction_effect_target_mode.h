/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_MODE_H
#define DF_CREATURE_INTERACTION_EFFECT_TARGET_MODE_H
namespace df {
  namespace enums {
    namespace creature_interaction_effect_target_mode {
      enum creature_interaction_effect_target_mode : int16_t {
        BY_TYPE,
        BY_TOKEN,
        BY_CATEGORY
      };
    }
  }
  using enums::creature_interaction_effect_target_mode::creature_interaction_effect_target_mode;
  template<> struct DFHACK_EXPORT identity_traits<creature_interaction_effect_target_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<creature_interaction_effect_target_mode> {
    typedef int16_t base_type;
    typedef creature_interaction_effect_target_mode enum_type;
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
