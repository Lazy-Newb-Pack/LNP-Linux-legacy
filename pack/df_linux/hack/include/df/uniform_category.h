/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIFORM_CATEGORY_H
#define DF_UNIFORM_CATEGORY_H
namespace df {
  namespace enums {
    namespace uniform_category {
      enum uniform_category : int16_t {
        body,
        head,
        pants,
        gloves,
        shoes,
        shield,
        weapon
      };
    }
  }
  using enums::uniform_category::uniform_category;
  template<> struct DFHACK_EXPORT identity_traits<uniform_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<uniform_category> {
    typedef int16_t base_type;
    typedef uniform_category enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 6;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
