/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_TRADEDEPOTST_H
#define DF_BUILDING_TRADEDEPOTST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_tradedepotst : building_actual {
    union T_trade_flags {
      uint32_t whole;
      struct {
        uint32_t trader_requested : 1;
        uint32_t anyone_can_trade : 1;
      } bits;
      enum Shift {
        shift_trader_requested = 0,
        shift_anyone_can_trade = 1
      };
      enum Mask : uint32_t {
        mask_trader_requested = 0x1U,
        mask_anyone_can_trade = 0x2U
      };
      T_trade_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_trade_flags trade_flags;
    int8_t accessible;
    static virtual_identity _identity;
  protected:
    building_tradedepotst(virtual_identity *_id = &building_tradedepotst::_identity);
    friend void *df::allocator_fn<building_tradedepotst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_tradedepotst::T_trade_flags> {
    typedef uint32_t base_type;
    typedef building_tradedepotst::T_trade_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_tradedepotst::T_trade_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
