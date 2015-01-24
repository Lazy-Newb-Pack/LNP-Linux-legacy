/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_COFFINST_H
#define DF_BUILDING_COFFINST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_coffinst : building_actual {
    union T_burial_mode {
      uint16_t whole;
      struct {
        uint16_t allow_burial : 1;
        uint16_t no_pets : 1;
        uint16_t no_citizens : 1;
      } bits;
      enum Shift {
        shift_allow_burial = 0,
        shift_no_pets = 1,
        shift_no_citizens = 2
      };
      enum Mask : uint16_t {
        mask_allow_burial = 0x1U,
        mask_no_pets = 0x2U,
        mask_no_citizens = 0x4U
      };
      T_burial_mode(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_burial_mode burial_mode;
    static virtual_identity _identity;
  protected:
    building_coffinst(virtual_identity *_id = &building_coffinst::_identity);
    friend void *df::allocator_fn<building_coffinst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_coffinst::T_burial_mode> {
    typedef uint16_t base_type;
    typedef building_coffinst::T_burial_mode bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_coffinst::T_burial_mode> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
