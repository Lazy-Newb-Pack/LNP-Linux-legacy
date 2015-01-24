/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ANNOUNCEMENT_FLAGS_H
#define DF_ANNOUNCEMENT_FLAGS_H
namespace df {
  union announcement_flags {
    uint32_t whole;
    struct {
      uint32_t DO_MEGA : 1; /*!< BOX */
      uint32_t PAUSE : 1; /*!< P */
      uint32_t RECENTER : 1; /*!< R */
      uint32_t A_DISPLAY : 1; /*!< A_D */
      uint32_t D_DISPLAY : 1; /*!< D_D */
      uint32_t UNIT_COMBAT_REPORT : 1; /*!< UCR */
      uint32_t UNIT_COMBAT_REPORT_ALL_ACTIVE : 1; /*!< UCR_A */
    } bits;
    enum Shift {
      shift_DO_MEGA = 0,
      shift_PAUSE = 1,
      shift_RECENTER = 2,
      shift_A_DISPLAY = 3,
      shift_D_DISPLAY = 4,
      shift_UNIT_COMBAT_REPORT = 5,
      shift_UNIT_COMBAT_REPORT_ALL_ACTIVE = 6
    };
    enum Mask : uint32_t {
      mask_DO_MEGA = 0x1U,
      mask_PAUSE = 0x2U,
      mask_RECENTER = 0x4U,
      mask_A_DISPLAY = 0x8U,
      mask_D_DISPLAY = 0x10U,
      mask_UNIT_COMBAT_REPORT = 0x20U,
      mask_UNIT_COMBAT_REPORT_ALL_ACTIVE = 0x40U
    };
    announcement_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<announcement_flags> {
    typedef uint32_t base_type;
    typedef announcement_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<announcement_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
