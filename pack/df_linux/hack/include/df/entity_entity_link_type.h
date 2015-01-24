/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_ENTITY_LINK_TYPE_H
#define DF_ENTITY_ENTITY_LINK_TYPE_H
namespace df {
  namespace enums {
    namespace entity_entity_link_type {
      enum entity_entity_link_type : int32_t {
        PARENT,
        CHILD
      };
    }
  }
  using enums::entity_entity_link_type::entity_entity_link_type;
  template<> struct DFHACK_EXPORT identity_traits<entity_entity_link_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_entity_link_type> {
    typedef int32_t base_type;
    typedef entity_entity_link_type enum_type;
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
