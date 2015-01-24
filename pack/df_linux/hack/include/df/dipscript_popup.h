/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DIPSCRIPT_POPUP_H
#define DF_DIPSCRIPT_POPUP_H
namespace df {
  struct activity_info;
  struct unit;
  struct DFHACK_EXPORT dipscript_popup {
    df::unit* meeting_holder;
    df::activity_info* activity;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t close_screen : 1;
        uint32_t new_screen : 1;
      } bits;
      enum Shift {
        shift_close_screen = 0,
        shift_new_screen = 1
      };
      enum Mask : uint32_t {
        mask_close_screen = 0x1U,
        mask_new_screen = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    dipscript_popup();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<dipscript_popup::T_flags> {
    typedef uint32_t base_type;
    typedef dipscript_popup::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<dipscript_popup::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
