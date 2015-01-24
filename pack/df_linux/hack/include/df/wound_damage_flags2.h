/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WOUND_DAMAGE_FLAGS2_H
#define DF_WOUND_DAMAGE_FLAGS2_H
namespace df {
  union wound_damage_flags2 {
    uint32_t whole;
    struct {
      uint32_t needs_setting : 1;
      uint32_t entire_surface : 1;
      uint32_t gelded : 1;
    } bits;
    enum Shift {
      shift_needs_setting = 0,
      shift_entire_surface = 1,
      shift_gelded = 2
    };
    enum Mask : uint32_t {
      mask_needs_setting = 0x1U,
      mask_entire_surface = 0x2U,
      mask_gelded = 0x4U
    };
    wound_damage_flags2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<wound_damage_flags2> {
    typedef uint32_t base_type;
    typedef wound_damage_flags2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<wound_damage_flags2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
