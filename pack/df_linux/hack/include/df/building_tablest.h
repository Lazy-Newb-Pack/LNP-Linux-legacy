/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_TABLEST_H
#define DF_BUILDING_TABLEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_BUILDING_USERS_H
#include "building_users.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_tablest : building_actual {
    union T_table_flags {
      int16_t whole;
      struct {
        int16_t meeting_hall : 1;
      } bits;
      enum Shift {
        shift_meeting_hall = 0
      };
      enum Mask : int16_t {
        mask_meeting_hall = 0x1U
      };
      T_table_flags(int16_t whole_ = 0) : whole(whole_) {};
    };
    T_table_flags table_flags;
    df::building_users users;
    static virtual_identity _identity;
  protected:
    building_tablest(virtual_identity *_id = &building_tablest::_identity);
    friend void *df::allocator_fn<building_tablest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_tablest::T_table_flags> {
    typedef int16_t base_type;
    typedef building_tablest::T_table_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_tablest::T_table_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
