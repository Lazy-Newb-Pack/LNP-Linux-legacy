/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_DEMAND_H
#define DF_UNIT_DEMAND_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_demand {
    int16_t unk_0;
    enum T_place : int16_t {
      Office,
      Bedroom,
      DiningRoom,
      Tomb
    };
    T_place place;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    int32_t timeout_counter; /*!< counts once per 10 frames */
    int32_t timeout_limit; /*!< once counter passes limit, mandate ends */
    static struct_identity _identity;
  public:
    unit_demand();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_demand::T_place> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_demand::T_place> {
    typedef int16_t base_type;
    typedef unit_demand::T_place enum_type;
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
