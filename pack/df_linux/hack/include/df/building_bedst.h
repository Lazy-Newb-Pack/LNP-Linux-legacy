/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_BEDST_H
#define DF_BUILDING_BEDST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_BUILDING_USERS_H
#include "building_users.h"
#endif
namespace df {
  struct building_squad_use;
  struct DFHACK_EXPORT building_bedst : building_actual {
    union T_anon_1 {
      uint16_t whole;
      struct {
        uint16_t barracks : 1;
        uint16_t dormitory : 1;
      } bits;
      enum Shift {
        shift_barracks = 0,
        shift_dormitory = 1
      };
      enum Mask : uint16_t {
        mask_barracks = 0x1U,
        mask_dormitory = 0x2U
      };
      T_anon_1(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_anon_1 anon_1;
    std::vector<df::building_squad_use* > squads;
    int32_t specific_squad;
    int32_t specific_position;
    df::building_users users;
    static virtual_identity _identity;
  protected:
    building_bedst(virtual_identity *_id = &building_bedst::_identity);
    friend void *df::allocator_fn<building_bedst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_bedst::T_anon_1> {
    typedef uint16_t base_type;
    typedef building_bedst::T_anon_1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_bedst::T_anon_1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
