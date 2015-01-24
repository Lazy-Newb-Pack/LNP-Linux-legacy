/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_LOCATION_TYPE_H
#define DF_INTERACTION_TARGET_LOCATION_TYPE_H
namespace df {
  namespace enums {
    namespace interaction_target_location_type {
      enum interaction_target_location_type : int32_t {
        CONTEXT_NONE = -1,
        CONTEXT_REGION,
        CONTEXT_CREATURE,
        CONTEXT_ITEM,
        CONTEXT_BP,
        CONTEXT_LOCATION,
        CONTEXT_CREATURE_OR_LOCATION
      };
    }
  }
  using enums::interaction_target_location_type::interaction_target_location_type;
  template<> struct DFHACK_EXPORT identity_traits<interaction_target_location_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<interaction_target_location_type> {
    typedef int32_t base_type;
    typedef interaction_target_location_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
