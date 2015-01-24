/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ROOM_RENT_INFO_H
#define DF_ROOM_RENT_INFO_H
namespace df {
  struct building;
  struct DFHACK_EXPORT room_rent_info {
    std::vector<df::building* > elements;
    int32_t rent_value;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t eviction_underway : 1;
        uint32_t move_underway : 1;
      } bits;
      enum Shift {
        shift_eviction_underway = 0,
        shift_move_underway = 1
      };
      enum Mask : uint32_t {
        mask_eviction_underway = 0x1U,
        mask_move_underway = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    room_rent_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<room_rent_info::T_flags> {
    typedef uint32_t base_type;
    typedef room_rent_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<room_rent_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
