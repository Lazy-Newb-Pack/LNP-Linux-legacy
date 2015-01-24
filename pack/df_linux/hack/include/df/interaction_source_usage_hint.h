/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_USAGE_HINT_H
#define DF_INTERACTION_SOURCE_USAGE_HINT_H
namespace df {
  namespace enums {
    namespace interaction_source_usage_hint {
      enum interaction_source_usage_hint : int32_t {
        MAJOR_CURSE,
        GREETING,
        CLEAN_SELF,
        CLEAN_FRIEND,
        ATTACK,
        FLEEING,
        NEGATIVE_SOCIAL_RESPONSE,
        TORMENT
      };
    }
  }
  using enums::interaction_source_usage_hint::interaction_source_usage_hint;
  template<> struct DFHACK_EXPORT identity_traits<interaction_source_usage_hint> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<interaction_source_usage_hint> {
    typedef int32_t base_type;
    typedef interaction_source_usage_hint enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
