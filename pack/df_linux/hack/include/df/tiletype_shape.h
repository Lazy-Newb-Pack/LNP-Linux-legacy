/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILETYPE_SHAPE_H
#define DF_TILETYPE_SHAPE_H
#ifndef DF_TILETYPE_SHAPE_BASIC_H
#include "tiletype_shape_basic.h"
#endif
namespace df {
  namespace enums {
    namespace tiletype_shape {
      /**
       * Tile shape (not in DF)
       */
      enum tiletype_shape : int32_t {
        NONE = -1,
        EMPTY,
        FLOOR,
        BOULDER,
        PEBBLES,
        WALL,
        FORTIFICATION,
        STAIR_UP,
        STAIR_DOWN,
        STAIR_UPDOWN,
        RAMP,
        RAMP_TOP,
        BROOK_BED,
        BROOK_TOP,
        BRANCH,
        TRUNK_BRANCH,
        TWIG,
        SAPLING,
        SHRUB,
        ENDLESS_PIT
      };
    }
  }
  using enums::tiletype_shape::tiletype_shape;
  template<> struct DFHACK_EXPORT identity_traits<tiletype_shape> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tiletype_shape> {
    typedef int32_t base_type;
    typedef tiletype_shape enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 18;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[20];
    struct attr_entry_type {
      const char* caption;
      df::tiletype_shape_basic basic_shape;
      bool passable_low;
      bool passable_high;
      bool passable_flow;
      bool passable_flow_down;
      bool walkable;
      bool walkable_up;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[20+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
