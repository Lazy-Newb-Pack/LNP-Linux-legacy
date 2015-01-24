/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MACHINE_CONN_MODES_H
#define DF_MACHINE_CONN_MODES_H
namespace df {
  union machine_conn_modes {
    uint8_t whole;
    struct {
      uint8_t up : 1;
      uint8_t down : 1;
      uint8_t right : 1;
      uint8_t left : 1;
      uint8_t z_up : 1;
      uint8_t z_down : 1;
    } bits;
    enum Shift {
      shift_up = 0,
      shift_down = 1,
      shift_right = 2,
      shift_left = 3,
      shift_z_up = 4,
      shift_z_down = 5
    };
    enum Mask : uint8_t {
      mask_up = 0x1U,
      mask_down = 0x2U,
      mask_right = 0x4U,
      mask_left = 0x8U,
      mask_z_up = 0x10U,
      mask_z_down = 0x20U
    };
    machine_conn_modes(uint8_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<machine_conn_modes> {
    typedef uint8_t base_type;
    typedef machine_conn_modes bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<machine_conn_modes> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
