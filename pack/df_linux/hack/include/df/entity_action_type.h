/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_ACTION_TYPE_H
#define DF_ENTITY_ACTION_TYPE_H
namespace df {
  namespace enums {
    namespace entity_action_type {
      enum entity_action_type : int32_t {
        entity_primary_criminals,
        entity_relocate
      };
    }
  }
  using enums::entity_action_type::entity_action_type;
  template<> struct DFHACK_EXPORT identity_traits<entity_action_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_action_type> {
    typedef int32_t base_type;
    typedef entity_action_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
}
#endif
