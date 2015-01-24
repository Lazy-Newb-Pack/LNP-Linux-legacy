/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PERSONALITY_FACET_TYPE_H
#define DF_PERSONALITY_FACET_TYPE_H
namespace df {
  namespace enums {
    namespace personality_facet_type {
      enum personality_facet_type : int32_t {
        LOVE_PROPENSITY,
        HATE_PROPENSITY,
        ENVY_PROPENSITY,
        CHEER_PROPENSITY,
        DEPRESSION_PROPENSITY,
        ANGER_PROPENSITY,
        ANXIETY_PROPENSITY,
        LUST_PROPENSITY,
        STRESS_VULNERABILITY,
        GREED,
        IMMODERATION,
        VIOLENT,
        PERSEVERENCE,
        WASTEFULNESS,
        DISCORD,
        FRIENDLINESS,
        POLITENESS,
        DISDAIN_ADVICE,
        BRAVERY,
        CONFIDENCE,
        VANITY,
        AMBITION,
        GRATITUDE,
        IMMODESTY,
        HUMOR,
        VENGEFUL,
        PRIDE,
        CRUELTY,
        SINGLEMINDED,
        HOPEFUL,
        CURIOUS,
        BASHFUL,
        PRIVACY,
        PERFECTIONIST,
        CLOSEMINDED,
        TOLERANT,
        EMOTIONALLY_OBSESSIVE,
        SWAYED_BY_EMOTIONS,
        ALTRUISM,
        DUTIFULNESS,
        THOUGHTLESSNESS,
        ORDERLINESS,
        TRUST,
        GREGARIOUSNESS,
        ASSERTIVENESS,
        ACTIVITY_LEVEL,
        EXCITEMENT_SEEKING,
        IMAGINATION,
        ABSTRACT_INCLINED,
        ART_INCLINED
      };
    }
  }
  using enums::personality_facet_type::personality_facet_type;
  template<> struct DFHACK_EXPORT identity_traits<personality_facet_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<personality_facet_type> {
    typedef int32_t base_type;
    typedef personality_facet_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 49;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[50];
  };
}
#endif
