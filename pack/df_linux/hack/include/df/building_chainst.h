/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_CHAINST_H
#define DF_BUILDING_CHAINST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT building_chainst : building_actual {
    df::unit* assigned;
    df::unit* chained;
    union T_chain_flags {
      uint16_t whole;
      struct {
        uint16_t triggered : 1;
      } bits;
      enum Shift {
        shift_triggered = 0
      };
      enum Mask : uint16_t {
        mask_triggered = 0x1U
      };
      T_chain_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_chain_flags chain_flags;
    static virtual_identity _identity;
  protected:
    building_chainst(virtual_identity *_id = &building_chainst::_identity);
    friend void *df::allocator_fn<building_chainst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_chainst::T_chain_flags> {
    typedef uint16_t base_type;
    typedef building_chainst::T_chain_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_chainst::T_chain_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
