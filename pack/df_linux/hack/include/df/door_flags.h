/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DOOR_FLAGS_H
#define DF_DOOR_FLAGS_H
namespace df {
  union door_flags {
    uint16_t whole;
    struct {
      uint16_t forbidden : 1;
      uint16_t internal : 1;
      uint16_t taken_by_invaders : 1;
      uint16_t used_by_intruder : 1;
      uint16_t closed : 1;
      uint16_t operated_by_mechanisms : 1;
      uint16_t pet_passable : 1;
    } bits;
    enum Shift {
      shift_forbidden = 0,
      shift_internal = 1,
      shift_taken_by_invaders = 2,
      shift_used_by_intruder = 3,
      shift_closed = 4,
      shift_operated_by_mechanisms = 5,
      shift_pet_passable = 6
    };
    enum Mask : uint16_t {
      mask_forbidden = 0x1U,
      mask_internal = 0x2U,
      mask_taken_by_invaders = 0x4U,
      mask_used_by_intruder = 0x8U,
      mask_closed = 0x10U,
      mask_operated_by_mechanisms = 0x20U,
      mask_pet_passable = 0x40U
    };
    door_flags(uint16_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<door_flags> {
    typedef uint16_t base_type;
    typedef door_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<door_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
