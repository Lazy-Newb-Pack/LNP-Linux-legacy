/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_REAGENT_FLAGS_H
#define DF_REACTION_REAGENT_FLAGS_H
namespace df {
  union reaction_reagent_flags {
    uint32_t whole;
    struct {
      uint32_t PRESERVE_REAGENT : 1;
      uint32_t IN_CONTAINER : 1;
      uint32_t DOES_NOT_DETERMINE_PRODUCT_AMOUNT : 1;
    } bits;
    enum Shift {
      shift_PRESERVE_REAGENT = 0,
      shift_IN_CONTAINER = 1,
      shift_DOES_NOT_DETERMINE_PRODUCT_AMOUNT = 2
    };
    enum Mask : uint32_t {
      mask_PRESERVE_REAGENT = 0x1U,
      mask_IN_CONTAINER = 0x2U,
      mask_DOES_NOT_DETERMINE_PRODUCT_AMOUNT = 0x4U
    };
    reaction_reagent_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<reaction_reagent_flags> {
    typedef uint32_t base_type;
    typedef reaction_reagent_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<reaction_reagent_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
