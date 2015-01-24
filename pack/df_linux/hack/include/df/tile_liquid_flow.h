/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_LIQUID_FLOW_H
#define DF_TILE_LIQUID_FLOW_H
#ifndef DF_TILE_LIQUID_FLOW_DIR_H
#include "tile_liquid_flow_dir.h"
#endif
namespace df {
  union tile_liquid_flow {
    uint16_t whole;
    struct {
      uint16_t temp_flow_timer : 3; /*!< set when water sloshes around, counts down to zero */
      uint16_t unk_1 : 3;
      df::tile_liquid_flow_dir perm_flow_dir : 4;
      uint16_t unk_2 : 6; /*!< periodically set whenever perm_flow_dir is nonzero */
    } bits;
    enum Shift {
      shift_temp_flow_timer = 0,
      shift_unk_1 = 3,
      shift_perm_flow_dir = 6,
      shift_unk_2 = 10
    };
    enum Mask : uint16_t {
      mask_temp_flow_timer = 0x7U,
      mask_unk_1 = 0x38U,
      mask_perm_flow_dir = 0x3c0U,
      mask_unk_2 = 0xfc00U
    };
    tile_liquid_flow(uint16_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<tile_liquid_flow> {
    typedef uint16_t base_type;
    typedef tile_liquid_flow bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<tile_liquid_flow> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
