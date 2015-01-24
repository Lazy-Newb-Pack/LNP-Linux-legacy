/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SYNDROME_FLAGS_H
#define DF_SYNDROME_FLAGS_H
namespace df {
  union syndrome_flags {
    uint32_t whole;
    struct {
      uint32_t SYN_INJECTED : 1;
      uint32_t SYN_CONTACT : 1;
      uint32_t SYN_INHALED : 1;
      uint32_t anon_1 : 1;
      uint32_t SYN_INGESTED : 1;
    } bits;
    enum Shift {
      shift_SYN_INJECTED = 0,
      shift_SYN_CONTACT = 1,
      shift_SYN_INHALED = 2,
      shift_anon_1 = 3,
      shift_SYN_INGESTED = 4
    };
    enum Mask : uint32_t {
      mask_SYN_INJECTED = 0x1U,
      mask_SYN_CONTACT = 0x2U,
      mask_SYN_INHALED = 0x4U,
      mask_anon_1 = 0x8U,
      mask_SYN_INGESTED = 0x10U
    };
    syndrome_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<syndrome_flags> {
    typedef uint32_t base_type;
    typedef syndrome_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<syndrome_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
