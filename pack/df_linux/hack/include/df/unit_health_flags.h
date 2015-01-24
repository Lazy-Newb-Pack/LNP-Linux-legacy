/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_HEALTH_FLAGS_H
#define DF_UNIT_HEALTH_FLAGS_H
namespace df {
  union unit_health_flags {
    uint32_t whole;
    struct {
      uint32_t rq_diagnosis : 1;
      uint32_t needs_recovery : 1; /*!< needs diagnosis but cannot walk */
      uint32_t needs_healthcare : 1; /*!< ???; set when rq_diagnosis is, and not blocked by having a diagnosis */
      uint32_t rq_immobilize : 1;
      uint32_t rq_dressing : 1;
      uint32_t rq_cleaning : 1;
      uint32_t rq_surgery : 1;
      uint32_t rq_suture : 1;
      uint32_t rq_setting : 1;
      uint32_t rq_traction : 1;
      uint32_t rq_crutch : 1;
    } bits;
    enum Shift {
      shift_rq_diagnosis = 0,
      shift_needs_recovery = 1,
      shift_needs_healthcare = 2,
      shift_rq_immobilize = 3,
      shift_rq_dressing = 4,
      shift_rq_cleaning = 5,
      shift_rq_surgery = 6,
      shift_rq_suture = 7,
      shift_rq_setting = 8,
      shift_rq_traction = 9,
      shift_rq_crutch = 10
    };
    enum Mask : uint32_t {
      mask_rq_diagnosis = 0x1U,
      mask_needs_recovery = 0x2U,
      mask_needs_healthcare = 0x4U,
      mask_rq_immobilize = 0x8U,
      mask_rq_dressing = 0x10U,
      mask_rq_cleaning = 0x20U,
      mask_rq_surgery = 0x40U,
      mask_rq_suture = 0x80U,
      mask_rq_setting = 0x100U,
      mask_rq_traction = 0x200U,
      mask_rq_crutch = 0x400U
    };
    unit_health_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_health_flags> {
    typedef uint32_t base_type;
    typedef unit_health_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_health_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
