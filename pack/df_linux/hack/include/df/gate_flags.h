/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GATE_FLAGS_H
#define DF_GATE_FLAGS_H
namespace df {
  union gate_flags {
    uint16_t whole;
    struct {
      uint16_t closed : 1;
      uint16_t closing : 1;
      uint16_t opening : 1;
      uint16_t collapsing : 1; /*!< ?; bridge */
      uint16_t has_support : 1; /*!< bridge */
    } bits;
    enum Shift {
      shift_closed = 0,
      shift_closing = 1,
      shift_opening = 2,
      shift_collapsing = 3,
      shift_has_support = 4
    };
    enum Mask : uint16_t {
      mask_closed = 0x1U,
      mask_closing = 0x2U,
      mask_opening = 0x4U,
      mask_collapsing = 0x8U,
      mask_has_support = 0x10U
    };
    gate_flags(uint16_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<gate_flags> {
    typedef uint16_t base_type;
    typedef gate_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<gate_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
