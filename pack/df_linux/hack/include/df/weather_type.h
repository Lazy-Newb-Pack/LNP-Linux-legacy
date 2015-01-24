/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WEATHER_TYPE_H
#define DF_WEATHER_TYPE_H
namespace df {
  namespace enums {
    namespace weather_type {
      enum weather_type : int8_t {
        None,
        Rain,
        Snow
      };
    }
  }
  using enums::weather_type::weather_type;
  template<> struct DFHACK_EXPORT identity_traits<weather_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<weather_type> {
    typedef int8_t base_type;
    typedef weather_type enum_type;
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
