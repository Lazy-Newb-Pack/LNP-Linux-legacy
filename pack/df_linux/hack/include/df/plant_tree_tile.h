/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_TREE_TILE_H
#define DF_PLANT_TREE_TILE_H
namespace df {
  union plant_tree_tile {
    uint8_t whole;
    struct {
      uint8_t trunk : 1;
      uint8_t thick_branches_1 : 1;
      uint8_t thick_branches_2 : 1;
      uint8_t thick_branches_3 : 1;
      uint8_t thick_branches_4 : 1;
      uint8_t branches : 1;
      uint8_t twigs : 1;
      uint8_t blocked : 1; /*!< e.g. by other tree */
    } bits;
    enum Shift {
      shift_trunk = 0,
      shift_thick_branches_1 = 1,
      shift_thick_branches_2 = 2,
      shift_thick_branches_3 = 3,
      shift_thick_branches_4 = 4,
      shift_branches = 5,
      shift_twigs = 6,
      shift_blocked = 7
    };
    enum Mask : uint8_t {
      mask_trunk = 0x1U,
      mask_thick_branches_1 = 0x2U,
      mask_thick_branches_2 = 0x4U,
      mask_thick_branches_3 = 0x8U,
      mask_thick_branches_4 = 0x10U,
      mask_branches = 0x20U,
      mask_twigs = 0x40U,
      mask_blocked = 0x80U
    };
    plant_tree_tile(uint8_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<plant_tree_tile> {
    typedef uint8_t base_type;
    typedef plant_tree_tile bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<plant_tree_tile> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
