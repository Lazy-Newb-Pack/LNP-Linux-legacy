/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HEALTH_VIEW_BITS3_H
#define DF_HEALTH_VIEW_BITS3_H
namespace df {
  union health_view_bits3 {
    uint32_t whole;
    struct {
      uint32_t pain_minor : 1;
      uint32_t swell_extreme : 1;
      uint32_t swell_medium : 1;
      uint32_t swell_minor : 1;
      uint32_t infection : 1;
      uint32_t rq_diagnosis : 1;
      uint32_t rq_crutch : 1;
      uint32_t inoperable_rot : 1;
      uint32_t rq_cleaning : 1;
      uint32_t rq_surgery : 1;
      uint32_t rq_suture : 1;
      uint32_t rq_setting : 1;
      uint32_t rq_dressing : 1;
      uint32_t rq_traction : 1;
      uint32_t rq_immobilize : 1;
    } bits;
    enum Shift {
      shift_pain_minor = 0,
      shift_swell_extreme = 1,
      shift_swell_medium = 2,
      shift_swell_minor = 3,
      shift_infection = 4,
      shift_rq_diagnosis = 5,
      shift_rq_crutch = 6,
      shift_inoperable_rot = 7,
      shift_rq_cleaning = 8,
      shift_rq_surgery = 9,
      shift_rq_suture = 10,
      shift_rq_setting = 11,
      shift_rq_dressing = 12,
      shift_rq_traction = 13,
      shift_rq_immobilize = 14
    };
    enum Mask : uint32_t {
      mask_pain_minor = 0x1U,
      mask_swell_extreme = 0x2U,
      mask_swell_medium = 0x4U,
      mask_swell_minor = 0x8U,
      mask_infection = 0x10U,
      mask_rq_diagnosis = 0x20U,
      mask_rq_crutch = 0x40U,
      mask_inoperable_rot = 0x80U,
      mask_rq_cleaning = 0x100U,
      mask_rq_surgery = 0x200U,
      mask_rq_suture = 0x400U,
      mask_rq_setting = 0x800U,
      mask_rq_dressing = 0x1000U,
      mask_rq_traction = 0x2000U,
      mask_rq_immobilize = 0x4000U
    };
    health_view_bits3(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<health_view_bits3> {
    typedef uint32_t base_type;
    typedef health_view_bits3 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<health_view_bits3> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
