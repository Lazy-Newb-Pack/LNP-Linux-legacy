/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_Z_LEVEL_FLAGS_H
#define DF_Z_LEVEL_FLAGS_H
namespace df {
  union z_level_flags {
    uint32_t whole;
    struct {
      uint32_t update : 1;
      uint32_t can_stop : 1;
      uint32_t update_twice : 1;
    } bits;
    enum Shift {
      shift_update = 0,
      shift_can_stop = 1,
      shift_update_twice = 2
    };
    enum Mask : uint32_t {
      mask_update = 0x1U,
      mask_can_stop = 0x2U,
      mask_update_twice = 0x4U
    };
    z_level_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<z_level_flags> {
    typedef uint32_t base_type;
    typedef z_level_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<z_level_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
