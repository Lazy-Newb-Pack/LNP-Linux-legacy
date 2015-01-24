/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_LAYER_STATUS_H
#define DF_BODY_LAYER_STATUS_H
namespace df {
  union body_layer_status {
    uint32_t whole;
    struct {
      uint32_t gone : 1;
      uint32_t leaking : 1;
    } bits;
    enum Shift {
      shift_gone = 0,
      shift_leaking = 1
    };
    enum Mask : uint32_t {
      mask_gone = 0x1U,
      mask_leaking = 0x2U
    };
    body_layer_status(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<body_layer_status> {
    typedef uint32_t base_type;
    typedef body_layer_status bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<body_layer_status> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
