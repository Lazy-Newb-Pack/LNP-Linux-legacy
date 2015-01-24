/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_CAGEST_H
#define DF_BUILDING_CAGEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_cagest : building_actual {
    std::vector<int32_t > assigned_units;
    std::vector<int32_t > assigned_items;
    union T_cage_flags {
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
      T_cage_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_cage_flags cage_flags;
    int16_t fill_timer;
    static virtual_identity _identity;
  protected:
    building_cagest(virtual_identity *_id = &building_cagest::_identity);
    friend void *df::allocator_fn<building_cagest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_cagest::T_cage_flags> {
    typedef uint16_t base_type;
    typedef building_cagest::T_cage_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_cagest::T_cage_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
