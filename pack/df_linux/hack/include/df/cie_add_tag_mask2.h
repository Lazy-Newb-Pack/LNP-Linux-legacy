/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CIE_ADD_TAG_MASK2_H
#define DF_CIE_ADD_TAG_MASK2_H
namespace df {
  union cie_add_tag_mask2 {
    uint32_t whole;
    struct {
      uint32_t NO_AGING : 1;
      uint32_t MORTAL : 1;
      uint32_t STERILE : 1;
      uint32_t FIT_FOR_ANIMATION : 1;
      uint32_t FIT_FOR_RESURRECTION : 1;
    } bits;
    enum Shift {
      shift_NO_AGING = 0,
      shift_MORTAL = 1,
      shift_STERILE = 2,
      shift_FIT_FOR_ANIMATION = 3,
      shift_FIT_FOR_RESURRECTION = 4
    };
    enum Mask : uint32_t {
      mask_NO_AGING = 0x1U,
      mask_MORTAL = 0x2U,
      mask_STERILE = 0x4U,
      mask_FIT_FOR_ANIMATION = 0x8U,
      mask_FIT_FOR_RESURRECTION = 0x10U
    };
    cie_add_tag_mask2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<cie_add_tag_mask2> {
    typedef uint32_t base_type;
    typedef cie_add_tag_mask2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<cie_add_tag_mask2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
