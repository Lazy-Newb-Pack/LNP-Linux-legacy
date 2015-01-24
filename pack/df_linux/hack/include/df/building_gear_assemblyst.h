/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_GEAR_ASSEMBLYST_H
#define DF_BUILDING_GEAR_ASSEMBLYST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_gear_assemblyst : building_actual {
    df::machine_info machine;
    union T_gear_flags {
      uint32_t whole;
      struct {
        uint32_t disengaged : 1;
      } bits;
      enum Shift {
        shift_disengaged = 0
      };
      enum Mask : uint32_t {
        mask_disengaged = 0x1U
      };
      T_gear_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_gear_flags gear_flags;
    static virtual_identity _identity;
  protected:
    building_gear_assemblyst(virtual_identity *_id = &building_gear_assemblyst::_identity);
    friend void *df::allocator_fn<building_gear_assemblyst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_gear_assemblyst::T_gear_flags> {
    typedef uint32_t base_type;
    typedef building_gear_assemblyst::T_gear_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_gear_assemblyst::T_gear_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
