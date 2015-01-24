/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_COVEREDST_H
#define DF_ITEMIMPROVEMENT_COVEREDST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_coveredst : itemimprovement {
    union T_cover_flags {
      uint32_t whole;
      struct {
        uint32_t glazed : 1;
      } bits;
      enum Shift {
        shift_glazed = 0
      };
      enum Mask : uint32_t {
        mask_glazed = 0x1U
      };
      T_cover_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_cover_flags cover_flags;
    int32_t shape;
    static virtual_identity _identity;
  protected:
    itemimprovement_coveredst(virtual_identity *_id = &itemimprovement_coveredst::_identity);
    friend void *df::allocator_fn<itemimprovement_coveredst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<itemimprovement_coveredst::T_cover_flags> {
    typedef uint32_t base_type;
    typedef itemimprovement_coveredst::T_cover_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<itemimprovement_coveredst::T_cover_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
