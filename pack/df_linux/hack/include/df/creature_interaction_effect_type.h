/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_TYPE_H
#define DF_CREATURE_INTERACTION_EFFECT_TYPE_H
namespace df {
  namespace enums {
    namespace creature_interaction_effect_type {
      enum creature_interaction_effect_type : int32_t {
        PAIN,
        SWELLING,
        OOZING,
        BRUISING,
        BLISTERS,
        NUMBNESS,
        PARALYSIS,
        FEVER,
        BLEEDING,
        COUGH_BLOOD,
        VOMIT_BLOOD,
        NAUSEA,
        UNCONSCIOUSNESS,
        NECROSIS,
        IMPAIR_FUNCTION,
        DROWSINESS,
        DIZZINESS,
        ADD_TAG,
        REMOVE_TAG,
        DISPLAY_TILE,
        FLASH_TILE,
        SPEED_CHANGE,
        CAN_DO_INTERACTION,
        SKILL_ROLL_ADJUST,
        BODY_TRANSFORMATION,
        PHYS_ATT_CHANGE,
        MENT_ATT_CHANGE,
        MATERIAL_FORCE_MULTIPLIER,
        BODY_MAT_INTERACTION,
        BODY_APPEARANCE_MODIFIER,
        BP_APPEARANCE_MODIFIER,
        DISPLAY_NAME,
        SENSE_CREATURE_CLASS
      };
    }
  }
  using enums::creature_interaction_effect_type::creature_interaction_effect_type;
  template<> struct DFHACK_EXPORT identity_traits<creature_interaction_effect_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<creature_interaction_effect_type> {
    typedef int32_t base_type;
    typedef creature_interaction_effect_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 32;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[33];
  };
}
#endif
