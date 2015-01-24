/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_CANNOT_REASON_H
#define DF_SQUAD_ORDER_CANNOT_REASON_H
namespace df {
  namespace enums {
    namespace squad_order_cannot_reason {
      enum squad_order_cannot_reason : int32_t {
        not_following_order,
        activity_cancelled,
        no_barracks,
        improper_barracks,
        no_activity,
        cannot_individually_drill,
        does_not_exist,
        no_archery_target,
        improper_building,
        unreachable_location,
        invalid_location,
        no_reachable_valid_target,
        no_burrow,
        not_in_squad,
        no_patrol_route,
        no_reachable_point_on_route,
        invalid_order
      };
    }
  }
  using enums::squad_order_cannot_reason::squad_order_cannot_reason;
  template<> struct DFHACK_EXPORT identity_traits<squad_order_cannot_reason> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<squad_order_cannot_reason> {
    typedef int32_t base_type;
    typedef squad_order_cannot_reason enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 16;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[17];
  };
}
#endif
