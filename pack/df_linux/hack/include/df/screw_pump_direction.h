/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCREW_PUMP_DIRECTION_H
#define DF_SCREW_PUMP_DIRECTION_H
namespace df {
  namespace enums {
    namespace screw_pump_direction {
      enum screw_pump_direction : int8_t {
        FromNorth,
        FromEast,
        FromSouth,
        FromWest
      };
    }
  }
  using enums::screw_pump_direction::screw_pump_direction;
  template<> struct DFHACK_EXPORT identity_traits<screw_pump_direction> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<screw_pump_direction> {
    typedef int8_t base_type;
    typedef screw_pump_direction enum_type;
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
