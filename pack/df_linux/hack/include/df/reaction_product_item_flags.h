/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_PRODUCT_ITEM_FLAGS_H
#define DF_REACTION_PRODUCT_ITEM_FLAGS_H
namespace df {
  namespace enums {
    namespace reaction_product_item_flags {
      enum reaction_product_item_flags : int32_t {
        GET_MATERIAL_SAME,
        GET_MATERIAL_PRODUCT,
        FORCE_EDGE,
        PASTE,
        PRESSED,
        CRAFTS
      };
    }
  }
  using enums::reaction_product_item_flags::reaction_product_item_flags;
  template<> struct DFHACK_EXPORT identity_traits<reaction_product_item_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<reaction_product_item_flags> {
    typedef int32_t base_type;
    typedef reaction_product_item_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
