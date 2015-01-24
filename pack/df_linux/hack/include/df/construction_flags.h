/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CONSTRUCTION_FLAGS_H
#define DF_CONSTRUCTION_FLAGS_H
namespace df {
  union construction_flags {
    uint8_t whole;
    struct {
      uint8_t no_build_item : 1; /*!< build item is created from scratch upon removing construction, does not exist beforehand */
      uint8_t top_of_wall : 1; /*!< used on the floors above constructed walls so you cannot remove them */
    } bits;
    enum Shift {
      shift_no_build_item = 0,
      shift_top_of_wall = 1
    };
    enum Mask : uint8_t {
      mask_no_build_item = 0x1U,
      mask_top_of_wall = 0x2U
    };
    construction_flags(uint8_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<construction_flags> {
    typedef uint8_t base_type;
    typedef construction_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<construction_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
