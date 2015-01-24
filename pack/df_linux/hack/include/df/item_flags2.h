/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FLAGS2_H
#define DF_ITEM_FLAGS2_H
namespace df {
  union item_flags2 {
    uint32_t whole;
    struct {
      uint32_t has_rider : 1; /*!< vehicle with a rider */
      uint32_t unk1 : 1;
      uint32_t grown : 1;
    } bits;
    enum Shift {
      shift_has_rider = 0,
      shift_unk1 = 1,
      shift_grown = 2
    };
    enum Mask : uint32_t {
      mask_has_rider = 0x1U,
      mask_unk1 = 0x2U,
      mask_grown = 0x4U
    };
    item_flags2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<item_flags2> {
    typedef uint32_t base_type;
    typedef item_flags2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<item_flags2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
