/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_TRAPST_H
#define DF_BUILDING_TRAPST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_PRESSURE_PLATE_INFO_H
#include "pressure_plate_info.h"
#endif
#ifndef DF_STOCKPILE_LINKS_H
#include "stockpile_links.h"
#endif
#ifndef DF_TRAP_TYPE_H
#include "trap_type.h"
#endif
#ifndef DF_WORKSHOP_PROFILE_H
#include "workshop_profile.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT building_trapst : building_actual {
    df::trap_type trap_type;
    uint8_t state; /*!< !=0 = pulled, tripped/needs reloading */
    int16_t ready_timeout; /*!< plate not active if > 0 */
    int16_t fill_timer;
    union T_stop_flags {
      uint16_t whole;
      struct {
        uint16_t disabled : 1;
        uint16_t disabling : 1;
        uint16_t enabling : 1;
      } bits;
      enum Shift {
        shift_disabled = 0,
        shift_disabling = 1,
        shift_enabling = 2
      };
      enum Mask : uint16_t {
        mask_disabled = 0x1U,
        mask_disabling = 0x2U,
        mask_enabling = 0x4U
      };
      T_stop_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_stop_flags stop_flags;
    std::vector<df::item* > linked_mechanisms;
    std::vector<int32_t > observed_by_civs;
    df::workshop_profile profile;
    df::stockpile_links links;
    df::pressure_plate_info plate_info;
    int32_t friction; /*!< v0.34.08 */
    int32_t use_dump; /*!< v0.34.08 */
    int32_t dump_x_shift; /*!< v0.34.08 */
    int32_t dump_y_shift; /*!< v0.34.08 */
    int8_t stop_trigger_timer; /*!< v0.34.08 */
    static virtual_identity _identity;
  protected:
    building_trapst(virtual_identity *_id = &building_trapst::_identity);
    friend void *df::allocator_fn<building_trapst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_trapst::T_stop_flags> {
    typedef uint16_t base_type;
    typedef building_trapst::T_stop_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_trapst::T_stop_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
