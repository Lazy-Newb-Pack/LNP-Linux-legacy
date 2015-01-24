/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SUPPORTST_H
#define DF_BUILDING_SUPPORTST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_supportst : building_actual {
    union T_support_flags {
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
      T_support_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_support_flags support_flags;
    static virtual_identity _identity;
  protected:
    building_supportst(virtual_identity *_id = &building_supportst::_identity);
    friend void *df::allocator_fn<building_supportst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_supportst::T_support_flags> {
    typedef uint16_t base_type;
    typedef building_supportst::T_support_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_supportst::T_support_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
