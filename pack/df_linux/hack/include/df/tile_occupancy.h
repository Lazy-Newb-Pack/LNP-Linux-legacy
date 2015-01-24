/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_OCCUPANCY_H
#define DF_TILE_OCCUPANCY_H
#ifndef DF_TILE_BUILDING_OCC_H
#include "tile_building_occ.h"
#endif
namespace df {
  union tile_occupancy {
    uint32_t whole;
    struct {
      df::tile_building_occ building : 3;
      uint32_t unit : 1; /*!< standing */
      uint32_t unit_grounded : 1; /*!< prone */
      uint32_t item : 1;
      uint32_t edge_flow_in : 1; /*!< if set on an edge tile, water or magma will flow in */
      uint32_t moss : 1;
      uint32_t arrow_color : 4;
      uint32_t arrow_variant : 1;
      uint32_t unk13_noncitizen_unit : 1; /*!< when noncitizen moves in, something happens and it is cleared */
      uint32_t monster_lair : 1; /*!< A monster lair. Items placed wont be moved. */
      uint32_t no_grow : 1; /*!< seems to be set on terrain tiles where grass growth is impossible */
      uint32_t unk16 : 1;
      uint32_t unk17 : 1;
      uint32_t carve_track_north : 1;
      uint32_t carve_track_south : 1;
      uint32_t carve_track_east : 1;
      uint32_t carve_track_west : 1;
      uint32_t unk22 : 1;
      uint32_t unk23 : 1;
      uint32_t dig_marked : 1;
      uint32_t dig_auto : 1;
    } bits;
    enum Shift {
      shift_building = 0,
      shift_unit = 3,
      shift_unit_grounded = 4,
      shift_item = 5,
      shift_edge_flow_in = 6,
      shift_moss = 7,
      shift_arrow_color = 8,
      shift_arrow_variant = 12,
      shift_unk13_noncitizen_unit = 13,
      shift_monster_lair = 14,
      shift_no_grow = 15,
      shift_unk16 = 16,
      shift_unk17 = 17,
      shift_carve_track_north = 18,
      shift_carve_track_south = 19,
      shift_carve_track_east = 20,
      shift_carve_track_west = 21,
      shift_unk22 = 22,
      shift_unk23 = 23,
      shift_dig_marked = 24,
      shift_dig_auto = 25
    };
    enum Mask : uint32_t {
      mask_building = 0x7U,
      mask_unit = 0x8U,
      mask_unit_grounded = 0x10U,
      mask_item = 0x20U,
      mask_edge_flow_in = 0x40U,
      mask_moss = 0x80U,
      mask_arrow_color = 0xf00U,
      mask_arrow_variant = 0x1000U,
      mask_unk13_noncitizen_unit = 0x2000U,
      mask_monster_lair = 0x4000U,
      mask_no_grow = 0x8000U,
      mask_unk16 = 0x10000U,
      mask_unk17 = 0x20000U,
      mask_carve_track_north = 0x40000U,
      mask_carve_track_south = 0x80000U,
      mask_carve_track_east = 0x100000U,
      mask_carve_track_west = 0x200000U,
      mask_unk22 = 0x400000U,
      mask_unk23 = 0x800000U,
      mask_dig_marked = 0x1000000U,
      mask_dig_auto = 0x2000000U
    };
    tile_occupancy(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<tile_occupancy> {
    typedef uint32_t base_type;
    typedef tile_occupancy bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<tile_occupancy> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
