/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HEALTH_VIEW_BITS1_H
#define DF_HEALTH_VIEW_BITS1_H
namespace df {
  union health_view_bits1 {
    uint32_t whole;
    struct {
      uint32_t bleeding_heavy : 1;
      uint32_t bleeding : 1;
      uint32_t pale : 1;
      uint32_t blood_loss_severe : 1;
      uint32_t faint : 1;
      uint32_t blood_loss : 1;
      uint32_t paralyzed : 1;
      uint32_t paralyzed_partially : 1;
      uint32_t sluggish : 1;
      uint32_t numb_completely : 1;
      uint32_t numb_partially : 1;
      uint32_t numb_slightly : 1;
      uint32_t fever_serious : 1;
      uint32_t fever_moderate : 1;
      uint32_t fever_slight : 1;
      uint32_t pain_extreme : 1;
      uint32_t pain_moderate : 1;
      uint32_t pain_slight : 1;
      uint32_t exhausted : 1;
      uint32_t overexerted : 1;
      uint32_t tired : 1;
      uint32_t stunned : 1;
      uint32_t dizzy : 1;
      uint32_t drowning : 1;
      uint32_t winded : 1;
      uint32_t nauseous : 1;
      uint32_t drowsy_very : 1;
      uint32_t drowsy : 1;
      uint32_t dehydrated : 1;
      uint32_t thirsty : 1;
      uint32_t starving : 1;
      uint32_t hungry : 1;
    } bits;
    enum Shift {
      shift_bleeding_heavy = 0,
      shift_bleeding = 1,
      shift_pale = 2,
      shift_blood_loss_severe = 3,
      shift_faint = 4,
      shift_blood_loss = 5,
      shift_paralyzed = 6,
      shift_paralyzed_partially = 7,
      shift_sluggish = 8,
      shift_numb_completely = 9,
      shift_numb_partially = 10,
      shift_numb_slightly = 11,
      shift_fever_serious = 12,
      shift_fever_moderate = 13,
      shift_fever_slight = 14,
      shift_pain_extreme = 15,
      shift_pain_moderate = 16,
      shift_pain_slight = 17,
      shift_exhausted = 18,
      shift_overexerted = 19,
      shift_tired = 20,
      shift_stunned = 21,
      shift_dizzy = 22,
      shift_drowning = 23,
      shift_winded = 24,
      shift_nauseous = 25,
      shift_drowsy_very = 26,
      shift_drowsy = 27,
      shift_dehydrated = 28,
      shift_thirsty = 29,
      shift_starving = 30,
      shift_hungry = 31
    };
    enum Mask : uint32_t {
      mask_bleeding_heavy = 0x1U,
      mask_bleeding = 0x2U,
      mask_pale = 0x4U,
      mask_blood_loss_severe = 0x8U,
      mask_faint = 0x10U,
      mask_blood_loss = 0x20U,
      mask_paralyzed = 0x40U,
      mask_paralyzed_partially = 0x80U,
      mask_sluggish = 0x100U,
      mask_numb_completely = 0x200U,
      mask_numb_partially = 0x400U,
      mask_numb_slightly = 0x800U,
      mask_fever_serious = 0x1000U,
      mask_fever_moderate = 0x2000U,
      mask_fever_slight = 0x4000U,
      mask_pain_extreme = 0x8000U,
      mask_pain_moderate = 0x10000U,
      mask_pain_slight = 0x20000U,
      mask_exhausted = 0x40000U,
      mask_overexerted = 0x80000U,
      mask_tired = 0x100000U,
      mask_stunned = 0x200000U,
      mask_dizzy = 0x400000U,
      mask_drowning = 0x800000U,
      mask_winded = 0x1000000U,
      mask_nauseous = 0x2000000U,
      mask_drowsy_very = 0x4000000U,
      mask_drowsy = 0x8000000U,
      mask_dehydrated = 0x10000000U,
      mask_thirsty = 0x20000000U,
      mask_starving = 0x40000000U,
      mask_hungry = 0x80000000U
    };
    health_view_bits1(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<health_view_bits1> {
    typedef uint32_t base_type;
    typedef health_view_bits1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<health_view_bits1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
