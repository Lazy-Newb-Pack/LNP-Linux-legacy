/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_TYPE_H
#define DF_SQUAD_ORDER_TYPE_H
namespace df {
  namespace enums {
    namespace squad_order_type {
      enum squad_order_type : int32_t {
        MOVE,
        KILL_LIST,
        DEFEND_BURROWS,
        PATROL_ROUTE,
        TRAIN,
        DRIVE_ENTITY_OFF_SITE,
        CAUSE_TROUBLE_FOR_ENTITY
      };
    }
  }
  using enums::squad_order_type::squad_order_type;
  template<> struct DFHACK_EXPORT identity_traits<squad_order_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<squad_order_type> {
    typedef int32_t base_type;
    typedef squad_order_type enum_type;
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
