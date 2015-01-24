/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_FLAGS_H
#define DF_CREATURE_INTERACTION_EFFECT_FLAGS_H
namespace df {
  union creature_interaction_effect_flags {
    uint32_t whole;
    struct {
      uint32_t SIZE_DELAYS : 1;
      uint32_t SIZE_DILUTES : 1;
      uint32_t VASCULAR_ONLY : 1;
      uint32_t MUSCULAR_ONLY : 1;
      uint32_t RESISTABLE : 1;
      uint32_t LOCALIZED : 1;
      uint32_t MOON_PHASE : 1;
      uint32_t COUNTER_TRIGGER : 1;
    } bits;
    enum Shift {
      shift_SIZE_DELAYS = 0,
      shift_SIZE_DILUTES = 1,
      shift_VASCULAR_ONLY = 2,
      shift_MUSCULAR_ONLY = 3,
      shift_RESISTABLE = 4,
      shift_LOCALIZED = 5,
      shift_MOON_PHASE = 6,
      shift_COUNTER_TRIGGER = 7
    };
    enum Mask : uint32_t {
      mask_SIZE_DELAYS = 0x1U,
      mask_SIZE_DILUTES = 0x2U,
      mask_VASCULAR_ONLY = 0x4U,
      mask_MUSCULAR_ONLY = 0x8U,
      mask_RESISTABLE = 0x10U,
      mask_LOCALIZED = 0x20U,
      mask_MOON_PHASE = 0x40U,
      mask_COUNTER_TRIGGER = 0x80U
    };
    creature_interaction_effect_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<creature_interaction_effect_flags> {
    typedef uint32_t base_type;
    typedef creature_interaction_effect_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<creature_interaction_effect_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
