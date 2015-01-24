/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENGRAVING_FLAGS_H
#define DF_ENGRAVING_FLAGS_H
namespace df {
  union engraving_flags {
    uint32_t whole;
    struct {
      uint32_t floor : 1;
      uint32_t west : 1;
      uint32_t east : 1;
      uint32_t north : 1;
      uint32_t south : 1;
      uint32_t hidden : 1;
      uint32_t northwest : 1;
      uint32_t northeast : 1;
      uint32_t southwest : 1;
      uint32_t southeast : 1;
    } bits;
    enum Shift {
      shift_floor = 0,
      shift_west = 1,
      shift_east = 2,
      shift_north = 3,
      shift_south = 4,
      shift_hidden = 5,
      shift_northwest = 6,
      shift_northeast = 7,
      shift_southwest = 8,
      shift_southeast = 9
    };
    enum Mask : uint32_t {
      mask_floor = 0x1U,
      mask_west = 0x2U,
      mask_east = 0x4U,
      mask_north = 0x8U,
      mask_south = 0x10U,
      mask_hidden = 0x20U,
      mask_northwest = 0x40U,
      mask_northeast = 0x80U,
      mask_southwest = 0x100U,
      mask_southeast = 0x200U
    };
    engraving_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<engraving_flags> {
    typedef uint32_t base_type;
    typedef engraving_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<engraving_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
