/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPATTER_COMMON_H
#define DF_SPATTER_COMMON_H
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
#ifndef DF_TEMPERATUREST_H
#include "temperaturest.h"
#endif
namespace df {
  struct DFHACK_EXPORT spatter_common {
    int16_t mat_type;
    int32_t mat_index;
    df::matter_state mat_state;
    df::temperaturest temperature;
    int32_t size; /*!< 1-24=spatter, 25-49=smear, 50-* = coating */
    /**
     * v0.40.13
     */
    union T_base_flags {
      uint16_t whole;
      struct {
        uint16_t evaporates : 1; /*!< does not contaminate tile when washed away */
      } bits;
      enum Shift {
        shift_evaporates = 0
      };
      enum Mask : uint16_t {
        mask_evaporates = 0x1U
      };
      T_base_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_base_flags base_flags; /*!< v0.40.13 */
    char anon_1[2]; /*!< needed for proper alignment of spatter on gcc */
    static struct_identity _identity;
  public:
    spatter_common();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<spatter_common::T_base_flags> {
    typedef uint16_t base_type;
    typedef spatter_common::T_base_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<spatter_common::T_base_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
