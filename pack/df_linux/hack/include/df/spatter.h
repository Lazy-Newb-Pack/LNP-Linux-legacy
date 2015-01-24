/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPATTER_H
#define DF_SPATTER_H
#ifndef DF_SPATTER_COMMON_H
#include "spatter_common.h"
#endif
namespace df {
  struct DFHACK_EXPORT spatter : spatter_common {
    int16_t body_part_id;
    union T_flags {
      uint16_t whole;
      struct {
        uint16_t water_soluble : 1;
      } bits;
      enum Shift {
        shift_water_soluble = 0
      };
      enum Mask : uint16_t {
        mask_water_soluble = 0x1U
      };
      T_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    spatter();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<spatter::T_flags> {
    typedef uint16_t base_type;
    typedef spatter::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<spatter::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
