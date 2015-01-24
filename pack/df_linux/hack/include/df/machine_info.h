/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MACHINE_INFO_H
#define DF_MACHINE_INFO_H
namespace df {
  struct DFHACK_EXPORT machine_info {
    int32_t machine_id;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t frozen : 1;
      } bits;
      enum Shift {
        shift_frozen = 0
      };
      enum Mask : uint32_t {
        mask_frozen = 0x1U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    machine_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<machine_info::T_flags> {
    typedef uint32_t base_type;
    typedef machine_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<machine_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
