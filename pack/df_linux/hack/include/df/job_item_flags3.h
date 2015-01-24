/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_FLAGS3_H
#define DF_JOB_ITEM_FLAGS3_H
namespace df {
  union job_item_flags3 {
    uint32_t whole;
    struct {
      uint32_t unimproved : 1; /*!< vtable[176] */
      uint32_t any_raw_material : 1; /*!< itemtype BAR, BOULDER, POWDER_MISC, or GLOB */
      uint32_t non_absorbent : 1; /*!< vtable[215] */
      uint32_t non_pressed : 1; /*!< vtable[91] */
      uint32_t allow_liquid_powder : 1;
      uint32_t any_craft : 1; /*!< FIGURINE, AMULET, SCEPTER, CROWN, RING, EARRING, BRACLET */
      uint32_t hard : 1; /*!< check for material flag ITEMS_HARD */
      uint32_t food_storage : 1; /*!< vtable[15] */
    } bits;
    enum Shift {
      shift_unimproved = 0,
      shift_any_raw_material = 1,
      shift_non_absorbent = 2,
      shift_non_pressed = 3,
      shift_allow_liquid_powder = 4,
      shift_any_craft = 5,
      shift_hard = 6,
      shift_food_storage = 7
    };
    enum Mask : uint32_t {
      mask_unimproved = 0x1U,
      mask_any_raw_material = 0x2U,
      mask_non_absorbent = 0x4U,
      mask_non_pressed = 0x8U,
      mask_allow_liquid_powder = 0x10U,
      mask_any_craft = 0x20U,
      mask_hard = 0x40U,
      mask_food_storage = 0x80U
    };
    job_item_flags3(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<job_item_flags3> {
    typedef uint32_t base_type;
    typedef job_item_flags3 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<job_item_flags3> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
