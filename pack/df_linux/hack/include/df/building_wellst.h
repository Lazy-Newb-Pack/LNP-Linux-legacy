/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WELLST_H
#define DF_BUILDING_WELLST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_wellst : building_actual {
    union T_well_flags {
      int16_t whole;
      struct {
        int16_t lowering : 1;
        int16_t just_raised : 1;
      } bits;
      enum Shift {
        shift_lowering = 0,
        shift_just_raised = 1
      };
      enum Mask : int16_t {
        mask_lowering = 0x1U,
        mask_just_raised = 0x2U
      };
      T_well_flags(int16_t whole_ = 0) : whole(whole_) {};
    };
    T_well_flags well_flags;
    int8_t anon_1;
    int16_t bucket_z;
    int8_t bucket_timer; /*!< 0-9; counts up when raising, down when lowering */
    int16_t check_water_timer;
    static virtual_identity _identity;
  protected:
    building_wellst(virtual_identity *_id = &building_wellst::_identity);
    friend void *df::allocator_fn<building_wellst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_wellst::T_well_flags> {
    typedef int16_t base_type;
    typedef building_wellst::T_well_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_wellst::T_well_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
