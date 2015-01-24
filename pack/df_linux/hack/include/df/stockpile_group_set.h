/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOCKPILE_GROUP_SET_H
#define DF_STOCKPILE_GROUP_SET_H
namespace df {
  union stockpile_group_set {
    uint32_t whole;
    struct {
      uint32_t animals : 1;
      uint32_t food : 1;
      uint32_t furniture : 1;
      uint32_t corpses : 1;
      uint32_t refuse : 1;
      uint32_t stone : 1;
      uint32_t ammo : 1;
      uint32_t coins : 1;
      uint32_t bars_blocks : 1;
      uint32_t gems : 1;
      uint32_t finished_goods : 1;
      uint32_t leather : 1;
      uint32_t cloth : 1;
      uint32_t wood : 1;
      uint32_t weapons : 1;
      uint32_t armor : 1;
    } bits;
    enum Shift {
      shift_animals = 0,
      shift_food = 1,
      shift_furniture = 2,
      shift_corpses = 3,
      shift_refuse = 4,
      shift_stone = 5,
      shift_ammo = 6,
      shift_coins = 7,
      shift_bars_blocks = 8,
      shift_gems = 9,
      shift_finished_goods = 10,
      shift_leather = 11,
      shift_cloth = 12,
      shift_wood = 13,
      shift_weapons = 14,
      shift_armor = 15
    };
    enum Mask : uint32_t {
      mask_animals = 0x1U,
      mask_food = 0x2U,
      mask_furniture = 0x4U,
      mask_corpses = 0x8U,
      mask_refuse = 0x10U,
      mask_stone = 0x20U,
      mask_ammo = 0x40U,
      mask_coins = 0x80U,
      mask_bars_blocks = 0x100U,
      mask_gems = 0x200U,
      mask_finished_goods = 0x400U,
      mask_leather = 0x800U,
      mask_cloth = 0x1000U,
      mask_wood = 0x2000U,
      mask_weapons = 0x4000U,
      mask_armor = 0x8000U
    };
    stockpile_group_set(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<stockpile_group_set> {
    typedef uint32_t base_type;
    typedef stockpile_group_set bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<stockpile_group_set> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
