/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_ITEMOWNERST_H
#define DF_GENERAL_REF_UNIT_ITEMOWNERST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit_itemownerst : general_ref_unit {
    /**
     * v0.34.06
     */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t litter : 1; /*!< apparetly set after 1000 ticks, then confiscated in 1000 more ticks */
      } bits;
      enum Shift {
        shift_litter = 0
      };
      enum Mask : uint32_t {
        mask_litter = 0x1U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags; /*!< v0.34.06 */
    static virtual_identity _identity;
  protected:
    general_ref_unit_itemownerst(virtual_identity *_id = &general_ref_unit_itemownerst::_identity);
    friend void *df::allocator_fn<general_ref_unit_itemownerst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<general_ref_unit_itemownerst::T_flags> {
    typedef uint32_t base_type;
    typedef general_ref_unit_itemownerst::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<general_ref_unit_itemownerst::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
