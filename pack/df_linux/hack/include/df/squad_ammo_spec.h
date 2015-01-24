/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_AMMO_SPEC_H
#define DF_SQUAD_AMMO_SPEC_H
#ifndef DF_ITEM_FILTER_SPEC_H
#include "item_filter_spec.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_ammo_spec {
    df::item_filter_spec item_filter;
    int32_t amount;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t use_combat : 1;
        uint32_t use_training : 1;
      } bits;
      enum Shift {
        shift_use_combat = 0,
        shift_use_training = 1
      };
      enum Mask : uint32_t {
        mask_use_combat = 0x1U,
        mask_use_training = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    std::vector<int32_t > assigned;
    static struct_identity _identity;
  public:
    squad_ammo_spec();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<squad_ammo_spec::T_flags> {
    typedef uint32_t base_type;
    typedef squad_ammo_spec::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<squad_ammo_spec::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
