/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_MINERALST_H
#define DF_BLOCK_SQUARE_EVENT_MINERALST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
#ifndef DF_TILE_BITMASK_H
#include "tile_bitmask.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_mineralst : block_square_event {
    int32_t inorganic_mat;
    df::tile_bitmask tile_bitmask;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t discovered : 1;
        uint32_t cluster : 1;
        uint32_t vein : 1;
        uint32_t cluster_small : 1;
        uint32_t cluster_one : 1;
      } bits;
      enum Shift {
        shift_discovered = 0,
        shift_cluster = 1,
        shift_vein = 2,
        shift_cluster_small = 3,
        shift_cluster_one = 4
      };
      enum Mask : uint32_t {
        mask_discovered = 0x1U,
        mask_cluster = 0x2U,
        mask_vein = 0x4U,
        mask_cluster_small = 0x8U,
        mask_cluster_one = 0x10U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static virtual_identity _identity;
#include "custom/block_square_event_mineralst.methods.inc"
  protected:
    block_square_event_mineralst(virtual_identity *_id = &block_square_event_mineralst::_identity);
    friend void *df::allocator_fn<block_square_event_mineralst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<block_square_event_mineralst::T_flags> {
    typedef uint32_t base_type;
    typedef block_square_event_mineralst::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<block_square_event_mineralst::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
