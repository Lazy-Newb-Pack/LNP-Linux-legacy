/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_GROWTH_H
#define DF_PLANT_GROWTH_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct plant_growth_print;
  struct DFHACK_EXPORT plant_growth {
    std::string id;
    std::string name;
    std::string name_plural;
    std::string str_growth_item[5];
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    std::vector<df::plant_growth_print* > prints;
    int32_t timing_1;
    int32_t timing_2;
    union T_locations {
      uint32_t whole;
      struct {
        uint32_t twigs : 1;
        uint32_t light_branches : 1;
        uint32_t heavy_branches : 1;
        uint32_t trunk : 1;
        uint32_t roots : 1;
        uint32_t cap : 1;
        uint32_t sapling : 1;
      } bits;
      enum Shift {
        shift_twigs = 0,
        shift_light_branches = 1,
        shift_heavy_branches = 2,
        shift_trunk = 3,
        shift_roots = 4,
        shift_cap = 5,
        shift_sapling = 6
      };
      enum Mask : uint32_t {
        mask_twigs = 0x1U,
        mask_light_branches = 0x2U,
        mask_heavy_branches = 0x4U,
        mask_trunk = 0x8U,
        mask_roots = 0x10U,
        mask_cap = 0x20U,
        mask_sapling = 0x40U
      };
      T_locations(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_locations locations;
    int32_t density;
    union T_behavior {
      uint32_t whole;
      struct {
        uint32_t drops_off : 1;
        uint32_t no_cloud : 1;
        uint32_t has_seed : 1;
      } bits;
      enum Shift {
        shift_drops_off = 0,
        shift_no_cloud = 1,
        shift_has_seed = 2
      };
      enum Mask : uint32_t {
        mask_drops_off = 0x1U,
        mask_no_cloud = 0x2U,
        mask_has_seed = 0x4U
      };
      T_behavior(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_behavior behavior;
    int32_t trunk_height_perc_1;
    int32_t trunk_height_perc_2;
    static struct_identity _identity;
  public:
    plant_growth();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<plant_growth::T_locations> {
    typedef uint32_t base_type;
    typedef plant_growth::T_locations bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<plant_growth::T_locations> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<plant_growth::T_behavior> {
    typedef uint32_t base_type;
    typedef plant_growth::T_behavior bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<plant_growth::T_behavior> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
