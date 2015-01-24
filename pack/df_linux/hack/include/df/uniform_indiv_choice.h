/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIFORM_INDIV_CHOICE_H
#define DF_UNIFORM_INDIV_CHOICE_H
namespace df {
  union uniform_indiv_choice {
    uint32_t whole;
    struct {
      uint32_t any : 1;
      uint32_t melee : 1;
      uint32_t ranged : 1;
    } bits;
    enum Shift {
      shift_any = 0,
      shift_melee = 1,
      shift_ranged = 2
    };
    enum Mask : uint32_t {
      mask_any = 0x1U,
      mask_melee = 0x2U,
      mask_ranged = 0x4U
    };
    uniform_indiv_choice(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<uniform_indiv_choice> {
    typedef uint32_t base_type;
    typedef uniform_indiv_choice bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<uniform_indiv_choice> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
