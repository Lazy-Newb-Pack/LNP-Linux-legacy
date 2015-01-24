/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_USE_FLAGS_H
#define DF_SQUAD_USE_FLAGS_H
namespace df {
  union squad_use_flags {
    uint32_t whole;
    struct {
      uint32_t sleep : 1;
      uint32_t train : 1;
      uint32_t indiv_eq : 1;
      uint32_t squad_eq : 1;
    } bits;
    enum Shift {
      shift_sleep = 0,
      shift_train = 1,
      shift_indiv_eq = 2,
      shift_squad_eq = 3
    };
    enum Mask : uint32_t {
      mask_sleep = 0x1U,
      mask_train = 0x2U,
      mask_indiv_eq = 0x4U,
      mask_squad_eq = 0x8U
    };
    squad_use_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<squad_use_flags> {
    typedef uint32_t base_type;
    typedef squad_use_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<squad_use_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
