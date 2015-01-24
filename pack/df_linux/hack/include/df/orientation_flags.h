/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ORIENTATION_FLAGS_H
#define DF_ORIENTATION_FLAGS_H
namespace df {
  union orientation_flags {
    uint32_t whole;
    struct {
      uint32_t anon_1 : 1;
      uint32_t romance_male : 1;
      uint32_t marry_male : 1;
      uint32_t romance_female : 1;
      uint32_t marry_female : 1;
    } bits;
    enum Shift {
      shift_anon_1 = 0,
      shift_romance_male = 1,
      shift_marry_male = 2,
      shift_romance_female = 3,
      shift_marry_female = 4
    };
    enum Mask : uint32_t {
      mask_anon_1 = 0x1U,
      mask_romance_male = 0x2U,
      mask_marry_male = 0x4U,
      mask_romance_female = 0x8U,
      mask_marry_female = 0x10U
    };
    orientation_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<orientation_flags> {
    typedef uint32_t base_type;
    typedef orientation_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<orientation_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
