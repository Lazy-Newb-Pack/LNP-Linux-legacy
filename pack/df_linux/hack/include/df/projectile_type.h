/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJECTILE_TYPE_H
#define DF_PROJECTILE_TYPE_H
namespace df {
  namespace enums {
    namespace projectile_type {
      enum projectile_type : int32_t {
        Item,
        Unit,
        Magic
      };
    }
  }
  using enums::projectile_type::projectile_type;
  template<> struct DFHACK_EXPORT identity_traits<projectile_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<projectile_type> {
    typedef int32_t base_type;
    typedef projectile_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
