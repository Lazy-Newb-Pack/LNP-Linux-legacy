/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIFORM_FLAGS_H
#define DF_UNIFORM_FLAGS_H
namespace df {
  union uniform_flags {
    uint32_t whole;
    struct {
      uint32_t replace_clothing : 1;
      uint32_t exact_matches : 1;
    } bits;
    enum Shift {
      shift_replace_clothing = 0,
      shift_exact_matches = 1
    };
    enum Mask : uint32_t {
      mask_replace_clothing = 0x1U,
      mask_exact_matches = 0x2U
    };
    uniform_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<uniform_flags> {
    typedef uint32_t base_type;
    typedef uniform_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<uniform_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
