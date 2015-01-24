/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_REGIONST_H
#define DF_INTERACTION_SOURCE_REGIONST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_regionst : interaction_source {
    union T_region_flags {
      uint32_t whole;
      struct {
        uint32_t NORMAL_ALLOWED : 1;
        uint32_t EVIL_ALLOWED : 1;
        uint32_t GOOD_ALLOWED : 1;
        uint32_t SAVAGE_ALLOWED : 1;
        uint32_t EVIL_ONLY : 1;
        uint32_t GOOD_ONLY : 1;
        uint32_t SAVAGE_ONLY : 1;
      } bits;
      enum Shift {
        shift_NORMAL_ALLOWED = 0,
        shift_EVIL_ALLOWED = 1,
        shift_GOOD_ALLOWED = 2,
        shift_SAVAGE_ALLOWED = 3,
        shift_EVIL_ONLY = 4,
        shift_GOOD_ONLY = 5,
        shift_SAVAGE_ONLY = 6
      };
      enum Mask : uint32_t {
        mask_NORMAL_ALLOWED = 0x1U,
        mask_EVIL_ALLOWED = 0x2U,
        mask_GOOD_ALLOWED = 0x4U,
        mask_SAVAGE_ALLOWED = 0x8U,
        mask_EVIL_ONLY = 0x10U,
        mask_GOOD_ONLY = 0x20U,
        mask_SAVAGE_ONLY = 0x40U
      };
      T_region_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_region_flags region_flags;
    int8_t regions[10];
    static virtual_identity _identity;
  protected:
    interaction_source_regionst(virtual_identity *_id = &interaction_source_regionst::_identity);
    friend void *df::allocator_fn<interaction_source_regionst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<interaction_source_regionst::T_region_flags> {
    typedef uint32_t base_type;
    typedef interaction_source_regionst::T_region_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<interaction_source_regionst::T_region_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
