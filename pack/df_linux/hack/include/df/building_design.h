/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DESIGN_H
#define DF_BUILDING_DESIGN_H
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_design {
    int32_t architect;
    int32_t unk2;
    int16_t design_skill;
    int32_t builder1;
    int32_t unk5;
    int16_t build_skill;
    int16_t build_timer1; /*!< +1 per 10 frames while building */
    int32_t builder2;
    int16_t build_timer2;
    df::item_quality quality1;
    df::item_quality quality2;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t rough : 1; /*!< rough gabbro road */
        uint32_t built : 1;
        uint32_t designed : 1;
      } bits;
      enum Shift {
        shift_rough = 0,
        shift_built = 1,
        shift_designed = 2
      };
      enum Mask : uint32_t {
        mask_rough = 0x1U,
        mask_built = 0x2U,
        mask_designed = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t hitpoints;
    int32_t max_hitpoints;
    static struct_identity _identity;
  public:
    building_design();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_design::T_flags> {
    typedef uint32_t base_type;
    typedef building_design::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_design::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
