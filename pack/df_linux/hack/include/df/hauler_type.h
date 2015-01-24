/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HAULER_TYPE_H
#define DF_HAULER_TYPE_H
namespace df {
  namespace enums {
    namespace hauler_type {
      enum hauler_type : int32_t {
        Any,
        Stone,
        Wood,
        Item,
        Bin,
        Body,
        Food,
        Refuse,
        Furniture,
        Animal
      };
    }
  }
  using enums::hauler_type::hauler_type;
  template<> struct DFHACK_EXPORT identity_traits<hauler_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<hauler_type> {
    typedef int32_t base_type;
    typedef hauler_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[10];
  };
}
#endif
