/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_BP_HEALTH_FLAGS_H
#define DF_UNIT_BP_HEALTH_FLAGS_H
namespace df {
  union unit_bp_health_flags {
    uint32_t whole;
    struct {
      uint32_t rq_immobilize : 1;
      uint32_t rq_dressing : 1;
      uint32_t rq_cleaning : 1;
      uint32_t rq_surgery : 1;
      uint32_t rq_suture : 1;
      uint32_t rq_setting : 1;
      uint32_t rq_traction : 1;
      uint32_t inoperable_rot : 1;
      uint32_t needs_bandage : 1; /*!< used to remove once not needed */
      uint32_t needs_cast : 1; /*!< used to remove once not needed */
    } bits;
    enum Shift {
      shift_rq_immobilize = 0,
      shift_rq_dressing = 1,
      shift_rq_cleaning = 2,
      shift_rq_surgery = 3,
      shift_rq_suture = 4,
      shift_rq_setting = 5,
      shift_rq_traction = 6,
      shift_inoperable_rot = 7,
      shift_needs_bandage = 8,
      shift_needs_cast = 9
    };
    enum Mask : uint32_t {
      mask_rq_immobilize = 0x1U,
      mask_rq_dressing = 0x2U,
      mask_rq_cleaning = 0x4U,
      mask_rq_surgery = 0x8U,
      mask_rq_suture = 0x10U,
      mask_rq_setting = 0x20U,
      mask_rq_traction = 0x40U,
      mask_inoperable_rot = 0x80U,
      mask_needs_bandage = 0x100U,
      mask_needs_cast = 0x200U
    };
    unit_bp_health_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_bp_health_flags> {
    typedef uint32_t base_type;
    typedef unit_bp_health_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_bp_health_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
