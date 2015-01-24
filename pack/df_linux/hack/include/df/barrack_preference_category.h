/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BARRACK_PREFERENCE_CATEGORY_H
#define DF_BARRACK_PREFERENCE_CATEGORY_H
namespace df {
  namespace enums {
    namespace barrack_preference_category {
      enum barrack_preference_category : int32_t {
        Bed,
        Armorstand,
        Box,
        Cabinet
      };
    }
  }
  using enums::barrack_preference_category::barrack_preference_category;
  template<> struct DFHACK_EXPORT identity_traits<barrack_preference_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<barrack_preference_category> {
    typedef int32_t base_type;
    typedef barrack_preference_category enum_type;
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
