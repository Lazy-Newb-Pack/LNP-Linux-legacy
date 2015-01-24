/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_GHOST_INFO_H
#define DF_UNIT_GHOST_INFO_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_GHOST_GOAL_H
#include "ghost_goal.h"
#endif
#ifndef DF_GHOST_TYPE_H
#include "ghost_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_ghost_info {
    df::ghost_type type;
    df::ghost_type type2; /*!< seems to have same value as type */
    df::ghost_goal goal;
    union DFHACK_EXPORT T_target {
      int32_t unit;
      int32_t item;
      int32_t building;
    };
    T_target target;
    df::coord misplace_pos;
    int32_t action_timer; /*!< time since last action */
    int32_t unk_18;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t announced : 1;
        uint32_t was_at_rest : 1;
      } bits;
      enum Shift {
        shift_announced = 0,
        shift_was_at_rest = 1
      };
      enum Mask : uint32_t {
        mask_announced = 0x1U,
        mask_was_at_rest = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t death_x; /*!< in tiles, global to world */
    int32_t death_y;
    int32_t death_z;
    static struct_identity _identity;
  public:
    unit_ghost_info();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_ghost_info::T_target> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_ghost_info::T_flags> {
    typedef uint32_t base_type;
    typedef unit_ghost_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_ghost_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
