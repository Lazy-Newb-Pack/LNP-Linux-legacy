/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VALUE_TYPE_H
#define DF_VALUE_TYPE_H
namespace df {
  namespace enums {
    namespace value_type {
      enum value_type : int32_t {
        LAW,
        LOYALTY,
        FAMILY,
        FRIENDSHIP,
        POWER,
        TRUTH,
        CUNNING,
        ELOQUENCE,
        FAIRNESS,
        DECORUM,
        TRADITION,
        ARTWORK,
        COOPERATION,
        INDEPENDENCE,
        STOICISM,
        INTROSPECTION,
        SELF_CONTROL,
        TRANQUILITY,
        HARMONY,
        MERRIMENT,
        CRAFTSMANSHIP,
        MARTIAL_PROWESS,
        SKILL,
        HARD_WORK,
        SACRIFICE,
        COMPETITION,
        PERSEVERENCE,
        LEISURE_TIME,
        COMMERCE,
        ROMANCE,
        NATURE,
        PEACE
      };
    }
  }
  using enums::value_type::value_type;
  template<> struct DFHACK_EXPORT identity_traits<value_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<value_type> {
    typedef int32_t base_type;
    typedef value_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 31;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[32];
  };
}
#endif
