/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SIEGEENGINE_TYPE_H
#define DF_SIEGEENGINE_TYPE_H
namespace df {
  namespace enums {
    namespace siegeengine_type {
      enum siegeengine_type : int16_t {
        Catapult,
        Ballista
      };
    }
  }
  using enums::siegeengine_type::siegeengine_type;
  template<> struct DFHACK_EXPORT identity_traits<siegeengine_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<siegeengine_type> {
    typedef int16_t base_type;
    typedef siegeengine_type enum_type;
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
