/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_MATSTATE_H
#define DF_ITEM_MATSTATE_H
namespace df {
  union item_matstate {
    uint32_t whole;
    struct {
      uint32_t no_auto_clean : 1; /*!< isAutoClean returns false */
      uint32_t pressed : 1;
      uint32_t paste : 1;
    } bits;
    enum Shift {
      shift_no_auto_clean = 0,
      shift_pressed = 1,
      shift_paste = 2
    };
    enum Mask : uint32_t {
      mask_no_auto_clean = 0x1U,
      mask_pressed = 0x2U,
      mask_paste = 0x4U
    };
    item_matstate(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<item_matstate> {
    typedef uint32_t base_type;
    typedef item_matstate bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<item_matstate> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
