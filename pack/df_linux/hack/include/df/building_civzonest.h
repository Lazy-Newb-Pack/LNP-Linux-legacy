/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_CIVZONEST_H
#define DF_BUILDING_CIVZONEST_H
#ifndef DF_BUILDING_H
#include "building.h"
#endif
#ifndef DF_CIVZONE_TYPE_H
#include "civzone_type.h"
#endif
#ifndef DF_HOSPITAL_SUPPLIES_H
#include "hospital_supplies.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_civzonest : building {
    std::vector<int32_t > assigned_units;
    std::vector<int32_t > assigned_items;
    enum_field<df::civzone_type,int32_t> type; /*!< only saved as int16 */
    union T_zone_flags {
      uint32_t whole;
      struct {
        uint32_t water_source : 1;
        uint32_t garbage_dump : 1;
        uint32_t sand : 1;
        uint32_t active : 1;
        uint32_t fishing : 1;
        uint32_t pit_pond : 1;
        uint32_t meeting_area : 1;
        uint32_t hospital : 1;
        uint32_t pen_pasture : 1;
        uint32_t clay : 1;
        uint32_t animal_training : 1;
        uint32_t gather : 1;
      } bits;
      enum Shift {
        shift_water_source = 0,
        shift_garbage_dump = 1,
        shift_sand = 2,
        shift_active = 3,
        shift_fishing = 4,
        shift_pit_pond = 5,
        shift_meeting_area = 6,
        shift_hospital = 7,
        shift_pen_pasture = 8,
        shift_clay = 9,
        shift_animal_training = 10,
        shift_gather = 11
      };
      enum Mask : uint32_t {
        mask_water_source = 0x1U,
        mask_garbage_dump = 0x2U,
        mask_sand = 0x4U,
        mask_active = 0x8U,
        mask_fishing = 0x10U,
        mask_pit_pond = 0x20U,
        mask_meeting_area = 0x40U,
        mask_hospital = 0x80U,
        mask_pen_pasture = 0x100U,
        mask_clay = 0x200U,
        mask_animal_training = 0x400U,
        mask_gather = 0x800U
      };
      T_zone_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_zone_flags zone_flags;
    int32_t anon_1;
    int32_t abstract_building_id;
    int32_t anon_2;
    int32_t anon_3;
    int32_t zone_num;
    int32_t anon_4;
    union T_pit_flags {
      uint32_t whole;
      struct {
        uint32_t is_pond : 1;
        uint32_t anon_1 : 1;
      } bits;
      enum Shift {
        shift_is_pond = 0,
        shift_anon_1 = 1
      };
      enum Mask : uint32_t {
        mask_is_pond = 0x1U,
        mask_anon_1 = 0x2U
      };
      T_pit_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_pit_flags pit_flags;
    int16_t fill_timer;
    df::hospital_supplies hospital;
    /**
     * v0.40.14
     */
    union T_gather_flags {
      uint32_t whole;
      struct {
        uint32_t pick_trees : 1;
        uint32_t pick_shrubs : 1;
        uint32_t gather_fallen : 1;
      } bits;
      enum Shift {
        shift_pick_trees = 0,
        shift_pick_shrubs = 1,
        shift_gather_fallen = 2
      };
      enum Mask : uint32_t {
        mask_pick_trees = 0x1U,
        mask_pick_shrubs = 0x2U,
        mask_gather_fallen = 0x4U
      };
      T_gather_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_gather_flags gather_flags; /*!< v0.40.14 */
    int32_t unk_v4014_1; /*!< v0.40.14 */
    static virtual_identity _identity;
  protected:
    building_civzonest(virtual_identity *_id = &building_civzonest::_identity);
    friend void *df::allocator_fn<building_civzonest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_civzonest::T_zone_flags> {
    typedef uint32_t base_type;
    typedef building_civzonest::T_zone_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_civzonest::T_zone_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_civzonest::T_pit_flags> {
    typedef uint32_t base_type;
    typedef building_civzonest::T_pit_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_civzonest::T_pit_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_civzonest::T_gather_flags> {
    typedef uint32_t base_type;
    typedef building_civzonest::T_gather_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_civzonest::T_gather_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
