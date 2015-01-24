/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_FLAGS_H
#define DF_PLANT_FLAGS_H
namespace df {
  union plant_flags {
    uint16_t whole;
    struct {
      uint16_t watery : 1;
      uint16_t is_shrub : 1; /*!< If it is not a shrub, then it is a tree */
    } bits;
    enum Shift {
      shift_watery = 0,
      shift_is_shrub = 1
    };
    enum Mask : uint16_t {
      mask_watery = 0x1U,
      mask_is_shrub = 0x2U
    };
    plant_flags(uint16_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<plant_flags> {
    typedef uint16_t base_type;
    typedef plant_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<plant_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
