/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MENTAL_ATTRIBUTE_TYPE_H
#define DF_MENTAL_ATTRIBUTE_TYPE_H
namespace df {
  namespace enums {
    namespace mental_attribute_type {
      enum mental_attribute_type : int32_t {
        ANALYTICAL_ABILITY,
        FOCUS,
        WILLPOWER,
        CREATIVITY,
        INTUITION,
        PATIENCE,
        MEMORY,
        LINGUISTIC_ABILITY,
        SPATIAL_SENSE,
        MUSICALITY,
        KINESTHETIC_SENSE,
        EMPATHY,
        SOCIAL_AWARENESS
      };
    }
  }
  using enums::mental_attribute_type::mental_attribute_type;
  template<> struct DFHACK_EXPORT identity_traits<mental_attribute_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<mental_attribute_type> {
    typedef int32_t base_type;
    typedef mental_attribute_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 12;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[13];
  };
}
#endif
