/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_TYPE_H
#define DF_INTERACTION_SOURCE_TYPE_H
namespace df {
  namespace enums {
    namespace interaction_source_type {
      enum interaction_source_type : int32_t {
        REGION,
        SECRET,
        DISTURBANCE,
        DEITY,
        ATTACK,
        INGESTION,
        CREATURE_ACTION,
        UNDERGROUND_SPECIAL
      };
    }
  }
  using enums::interaction_source_type::interaction_source_type;
  template<> struct DFHACK_EXPORT identity_traits<interaction_source_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<interaction_source_type> {
    typedef int32_t base_type;
    typedef interaction_source_type enum_type;
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
