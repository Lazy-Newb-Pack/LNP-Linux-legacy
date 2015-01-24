/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ARCHERYTARGETST_H
#define DF_BUILDING_ARCHERYTARGETST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_archerytargetst : building_actual {
    enum T_archery_direction : int8_t {
      TopToBottom,
      BottomToTop,
      LeftToRight,
      RightToLeft
    };
    T_archery_direction archery_direction;
    static virtual_identity _identity;
  protected:
    building_archerytargetst(virtual_identity *_id = &building_archerytargetst::_identity);
    friend void *df::allocator_fn<building_archerytargetst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<building_archerytargetst::T_archery_direction> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<building_archerytargetst::T_archery_direction> {
    typedef int8_t base_type;
    typedef building_archerytargetst::T_archery_direction enum_type;
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
