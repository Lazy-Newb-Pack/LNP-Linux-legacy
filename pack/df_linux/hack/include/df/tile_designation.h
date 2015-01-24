/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_DESIGNATION_H
#define DF_TILE_DESIGNATION_H
#ifndef DF_TILE_DIG_DESIGNATION_H
#include "tile_dig_designation.h"
#endif
#ifndef DF_TILE_LIQUID_H
#include "tile_liquid.h"
#endif
#ifndef DF_TILE_TRAFFIC_H
#include "tile_traffic.h"
#endif
namespace df {
  union tile_designation {
    uint32_t whole;
    struct {
      uint32_t flow_size : 3; /*!< liquid amount */
      uint32_t pile : 1; /*!< stockpile? */
      df::tile_dig_designation dig : 3;
      uint32_t smooth : 2;
      uint32_t hidden : 1;
      uint32_t geolayer_index : 4;
      uint32_t light : 1;
      uint32_t subterranean : 1;
      uint32_t outside : 1;
      uint32_t biome : 4;
      df::tile_liquid liquid_type : 1;
      uint32_t water_table : 1; /*!< aquifer */
      uint32_t rained : 1;
      df::tile_traffic traffic : 2;
      uint32_t flow_forbid : 1;
      uint32_t liquid_static : 1;
      uint32_t feature_local : 1;
      uint32_t feature_global : 1;
      uint32_t water_stagnant : 1;
      uint32_t water_salt : 1;
    } bits;
    enum Shift {
      shift_flow_size = 0,
      shift_pile = 3,
      shift_dig = 4,
      shift_smooth = 7,
      shift_hidden = 9,
      shift_geolayer_index = 10,
      shift_light = 14,
      shift_subterranean = 15,
      shift_outside = 16,
      shift_biome = 17,
      shift_liquid_type = 21,
      shift_water_table = 22,
      shift_rained = 23,
      shift_traffic = 24,
      shift_flow_forbid = 26,
      shift_liquid_static = 27,
      shift_feature_local = 28,
      shift_feature_global = 29,
      shift_water_stagnant = 30,
      shift_water_salt = 31
    };
    enum Mask : uint32_t {
      mask_flow_size = 0x7U,
      mask_pile = 0x8U,
      mask_dig = 0x70U,
      mask_smooth = 0x180U,
      mask_hidden = 0x200U,
      mask_geolayer_index = 0x3c00U,
      mask_light = 0x4000U,
      mask_subterranean = 0x8000U,
      mask_outside = 0x10000U,
      mask_biome = 0x1e0000U,
      mask_liquid_type = 0x200000U,
      mask_water_table = 0x400000U,
      mask_rained = 0x800000U,
      mask_traffic = 0x3000000U,
      mask_flow_forbid = 0x4000000U,
      mask_liquid_static = 0x8000000U,
      mask_feature_local = 0x10000000U,
      mask_feature_global = 0x20000000U,
      mask_water_stagnant = 0x40000000U,
      mask_water_salt = 0x80000000U
    };
    tile_designation(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<tile_designation> {
    typedef uint32_t base_type;
    typedef tile_designation bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<tile_designation> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
