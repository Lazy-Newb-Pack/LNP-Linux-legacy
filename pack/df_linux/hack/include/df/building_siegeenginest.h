/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SIEGEENGINEST_H
#define DF_BUILDING_SIEGEENGINEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_SIEGEENGINE_TYPE_H
#include "siegeengine_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_siegeenginest : building_actual {
    df::siegeengine_type type;
    enum T_facing : int8_t {
      Left,
      Up,
      Right,
      Down
    };
    T_facing facing;
    enum T_action : int8_t {
      NotInUse,
      PrepareToFire,
      FireAtWill
    };
    T_action action;
    int8_t fire_timer;
    int16_t fill_timer;
    static virtual_identity _identity;
  protected:
    building_siegeenginest(virtual_identity *_id = &building_siegeenginest::_identity);
    friend void *df::allocator_fn<building_siegeenginest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<building_siegeenginest::T_facing> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<building_siegeenginest::T_facing> {
    typedef int8_t base_type;
    typedef building_siegeenginest::T_facing enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_siegeenginest::T_action> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<building_siegeenginest::T_action> {
    typedef int8_t base_type;
    typedef building_siegeenginest::T_action enum_type;
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
