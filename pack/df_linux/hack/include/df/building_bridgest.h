/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_BRIDGEST_H
#define DF_BUILDING_BRIDGEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_GATE_FLAGS_H
#include "gate_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_bridgest : building_actual {
    df::gate_flags gate_flags;
    int8_t timer;
    enum T_direction : int8_t {
      Retracting = -1,
      Left,
      Right,
      Up,
      Down
    };
    T_direction direction;
    int32_t material_amount;
    static virtual_identity _identity;
  protected:
    building_bridgest(virtual_identity *_id = &building_bridgest::_identity);
    friend void *df::allocator_fn<building_bridgest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<building_bridgest::T_direction> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<building_bridgest::T_direction> {
    typedef int8_t base_type;
    typedef building_bridgest::T_direction enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
