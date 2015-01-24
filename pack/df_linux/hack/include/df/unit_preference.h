/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_PREFERENCE_H
#define DF_UNIT_PREFERENCE_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_preference {
    enum T_type : int16_t {
      LikeMaterial,
      LikeCreature,
      LikeFood,
      HateCreature,
      LikeItem,
      LikePlant,
      /**
       * holdover from 40d and earlier
       */
      LikeTree,
      LikeColor,
      LikeShape
    };
    T_type type;
    union DFHACK_EXPORT {
      df::item_type item_type;
      int16_t creature_id;
      int16_t color_id;
      int16_t shape_id;
      int16_t plant_id;
    };
    int16_t item_subtype;
    int16_t mattype;
    int32_t matindex;
    bool active;
    uint32_t prefstring_seed; /*!< feeds into a simple RNG to choose which prefstring to use */
    static struct_identity _identity;
  public:
    unit_preference();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_preference::T_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_preference::T_type> {
    typedef int16_t base_type;
    typedef unit_preference::T_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
