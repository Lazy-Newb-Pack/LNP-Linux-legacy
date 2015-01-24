/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REGION_MAP_ENTRY_H
#define DF_REGION_MAP_ENTRY_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_REGION_MAP_ENTRY_FLAGS_H
#include "region_map_entry_flags.h"
#endif
namespace df {
  struct world_site;
  struct DFHACK_EXPORT region_map_entry {
    int32_t unk_0;
    int32_t finder_rank;
    std::vector<df::world_site* > sites;
    BitArray<df::region_map_entry_flags> flags;
    int16_t elevation; /*!< ~40 ocean -> ~100 plains -> ~200 mointains */
    int16_t rainfall;
    int16_t vegetation;
    int16_t temperature;
    int16_t evilness;
    int16_t drainage;
    int16_t volcanism;
    int16_t savagery;
    int16_t unk_30; /*!< 3 */
    int16_t unk_32;
    int16_t unk_34;
    union T_clouds {
      uint16_t whole;
      struct {
        uint16_t anon_1 : 1;
        uint16_t anon_2 : 1;
        uint16_t density : 2;
        uint16_t striped : 1;
        uint16_t darkness : 2;
        uint16_t fog : 2;
        uint16_t anon_3 : 4; /*!< maybe moisture content */
      } bits;
      enum Shift {
        shift_anon_1 = 0,
        shift_anon_2 = 1,
        shift_density = 2,
        shift_striped = 4,
        shift_darkness = 5,
        shift_fog = 7,
        shift_anon_3 = 9
      };
      enum Mask : uint16_t {
        mask_anon_1 = 0x1U,
        mask_anon_2 = 0x2U,
        mask_density = 0xcU,
        mask_striped = 0x10U,
        mask_darkness = 0x60U,
        mask_fog = 0x180U,
        mask_anon_3 = 0x1e00U
      };
      T_clouds(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_clouds clouds;
    /**
     * blows toward direction in morning
     */
    union T_wind {
      uint16_t whole;
      struct {
        uint16_t north_1 : 1;
        uint16_t south_1 : 1;
        uint16_t east_1 : 1;
        uint16_t west_1 : 1;
        uint16_t north_2 : 1;
        uint16_t south_2 : 1;
        uint16_t east_2 : 1;
        uint16_t west_2 : 1;
      } bits;
      enum Shift {
        shift_north_1 = 0,
        shift_south_1 = 1,
        shift_east_1 = 2,
        shift_west_1 = 3,
        shift_north_2 = 4,
        shift_south_2 = 5,
        shift_east_2 = 6,
        shift_west_2 = 7
      };
      enum Mask : uint16_t {
        mask_north_1 = 0x1U,
        mask_south_1 = 0x2U,
        mask_east_1 = 0x4U,
        mask_west_1 = 0x8U,
        mask_north_2 = 0x10U,
        mask_south_2 = 0x20U,
        mask_east_2 = 0x40U,
        mask_west_2 = 0x80U
      };
      T_wind(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_wind wind; /*!< blows toward direction in morning */
    int16_t unk_3a; /*!< 0-5000, humidity? */
    int16_t salinity;
    df::coord unk_3e;
    df::coord unk_44;
    df::coord unk_4a;
    int32_t region_id;
    int32_t landmass_id;
    int16_t geo_index;
    static struct_identity _identity;
  public:
    region_map_entry();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<region_map_entry::T_clouds> {
    typedef uint16_t base_type;
    typedef region_map_entry::T_clouds bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<region_map_entry::T_clouds> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<region_map_entry::T_wind> {
    typedef uint16_t base_type;
    typedef region_map_entry::T_wind bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<region_map_entry::T_wind> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
