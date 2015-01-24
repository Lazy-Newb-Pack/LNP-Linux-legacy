/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_FLAGS3_H
#define DF_UNIT_FLAGS3_H
namespace df {
  union unit_flags3 {
    uint32_t whole;
    struct {
      uint32_t body_part_relsize_computed : 1;
      uint32_t size_modifier_computed : 1;
      uint32_t stuck_weapon_computed : 1; /*!< cleared if removing StuckIn item to recompute wound flags. */
      uint32_t compute_health : 1; /*!< causes the health structure to be created or updated */
      uint32_t announce_titan : 1; /*!< Announces creature like an FB or titan. */
      uint32_t unk5 : 1;
      uint32_t on_crutch : 1;
      uint32_t weight_computed : 1;
      uint32_t body_temp_in_range : 1; /*!< Is set to 1 every tick for non-dead creatures. */
      uint32_t wait_until_reveal : 1; /*!< Blocks all kind of things until tile is revealed. */
      /**
       * Scuttle creature: causes creature to be killed, leaving a behind
       * corpse and generating negative thoughts like a real kill.
       */
      uint32_t scuttle : 1;
      uint32_t unk11 : 1;
      uint32_t ghostly : 1;
      uint32_t unk13 : 1;
      uint32_t unk14 : 1;
      uint32_t unk15 : 1; /*!< dropped when znew >= zold */
      uint32_t unk16 : 1; /*!< something to do with werewolves? */
      uint32_t no_meandering : 1; /*!< for active_invaders */
      uint32_t floundering : 1;
      uint32_t exit_vehicle1 : 1; /*!< trapavoid */
      uint32_t exit_vehicle2 : 1; /*!< trapavoid */
      uint32_t dangerous_terrain : 1;
      uint32_t unk22 : 1;
      uint32_t unk23 : 1;
      uint32_t unk24 : 1;
      uint32_t emotionally_overloaded : 1; /*!< v0.40.01 */
    } bits;
    enum Shift {
      shift_body_part_relsize_computed = 0,
      shift_size_modifier_computed = 1,
      shift_stuck_weapon_computed = 2,
      shift_compute_health = 3,
      shift_announce_titan = 4,
      shift_unk5 = 5,
      shift_on_crutch = 6,
      shift_weight_computed = 7,
      shift_body_temp_in_range = 8,
      shift_wait_until_reveal = 9,
      shift_scuttle = 10,
      shift_unk11 = 11,
      shift_ghostly = 12,
      shift_unk13 = 13,
      shift_unk14 = 14,
      shift_unk15 = 15,
      shift_unk16 = 16,
      shift_no_meandering = 17,
      shift_floundering = 18,
      shift_exit_vehicle1 = 19,
      shift_exit_vehicle2 = 20,
      shift_dangerous_terrain = 21,
      shift_unk22 = 22,
      shift_unk23 = 23,
      shift_unk24 = 24,
      shift_emotionally_overloaded = 25
    };
    enum Mask : uint32_t {
      mask_body_part_relsize_computed = 0x1U,
      mask_size_modifier_computed = 0x2U,
      mask_stuck_weapon_computed = 0x4U,
      mask_compute_health = 0x8U,
      mask_announce_titan = 0x10U,
      mask_unk5 = 0x20U,
      mask_on_crutch = 0x40U,
      mask_weight_computed = 0x80U,
      mask_body_temp_in_range = 0x100U,
      mask_wait_until_reveal = 0x200U,
      mask_scuttle = 0x400U,
      mask_unk11 = 0x800U,
      mask_ghostly = 0x1000U,
      mask_unk13 = 0x2000U,
      mask_unk14 = 0x4000U,
      mask_unk15 = 0x8000U,
      mask_unk16 = 0x10000U,
      mask_no_meandering = 0x20000U,
      mask_floundering = 0x40000U,
      mask_exit_vehicle1 = 0x80000U,
      mask_exit_vehicle2 = 0x100000U,
      mask_dangerous_terrain = 0x200000U,
      mask_unk22 = 0x400000U,
      mask_unk23 = 0x800000U,
      mask_unk24 = 0x1000000U,
      mask_emotionally_overloaded = 0x2000000U
    };
    unit_flags3(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_flags3> {
    typedef uint32_t base_type;
    typedef unit_flags3 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_flags3> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
