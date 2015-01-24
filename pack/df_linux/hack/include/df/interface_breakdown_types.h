/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BREAKDOWN_TYPES_H
#define DF_INTERFACE_BREAKDOWN_TYPES_H
namespace df {
  namespace enums {
    namespace interface_breakdown_types {
      enum interface_breakdown_types : int8_t {
        NONE,
        QUIT,
        STOPSCREEN,
        TOFIRST
      };
    }
  }
  using enums::interface_breakdown_types::interface_breakdown_types;
  template<> struct DFHACK_EXPORT identity_traits<interface_breakdown_types> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<interface_breakdown_types> {
    typedef int8_t base_type;
    typedef interface_breakdown_types enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
