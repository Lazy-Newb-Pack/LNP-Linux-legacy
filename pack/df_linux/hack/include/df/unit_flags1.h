/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_FLAGS1_H
#define DF_UNIT_FLAGS1_H
namespace df {
  union unit_flags1 {
    uint32_t whole;
    struct {
      uint32_t move_state : 1; /*!< Can the dwarf move or are they waiting for their movement timer */
      uint32_t dead : 1; /*!< Dead (might also be set for incoming/leaving critters that are alive) */
      uint32_t has_mood : 1; /*!< Currently in mood */
      uint32_t had_mood : 1; /*!< Had a mood already */
      uint32_t marauder : 1; /*!< wide class of invader/inside creature attackers */
      uint32_t drowning : 1; /*!< Is currently drowning */
      uint32_t merchant : 1; /*!< An active merchant */
      uint32_t forest : 1; /*!< used for units no longer linked to merchant/diplomacy, they just try to leave mostly */
      uint32_t left : 1; /*!< left the map */
      uint32_t rider : 1; /*!< Is riding an another creature */
      uint32_t incoming : 1;
      uint32_t diplomat : 1;
      uint32_t zombie : 1;
      uint32_t skeleton : 1;
      uint32_t can_swap : 1; /*!< Can swap tiles during movement (prevents multiple swaps) */
      uint32_t on_ground : 1; /*!< The creature is laying on the floor, can be conscious */
      uint32_t projectile : 1; /*!< Launched into the air? Funny. */
      uint32_t active_invader : 1; /*!< Active invader (for organized ones) */
      uint32_t hidden_in_ambush : 1;
      uint32_t invader_origin : 1; /*!< Invader origin (could be inactive and fleeing) */
      uint32_t coward : 1; /*!< Will flee if invasion turns around */
      uint32_t hidden_ambusher : 1; /*!< Active marauder/invader moving inward? */
      uint32_t invades : 1; /*!< Marauder resident/invader moving in all the way */
      uint32_t check_flows : 1; /*!< Check against flows next time you get a chance */
      uint32_t ridden : 1;
      uint32_t caged : 1;
      uint32_t tame : 1;
      uint32_t chained : 1;
      uint32_t royal_guard : 1;
      uint32_t fortress_guard : 1;
      uint32_t suppress_wield : 1;
      uint32_t important_historical_figure : 1; /*!< Is an important historical figure */
    } bits;
    enum Shift {
      shift_move_state = 0,
      shift_dead = 1,
      shift_has_mood = 2,
      shift_had_mood = 3,
      shift_marauder = 4,
      shift_drowning = 5,
      shift_merchant = 6,
      shift_forest = 7,
      shift_left = 8,
      shift_rider = 9,
      shift_incoming = 10,
      shift_diplomat = 11,
      shift_zombie = 12,
      shift_skeleton = 13,
      shift_can_swap = 14,
      shift_on_ground = 15,
      shift_projectile = 16,
      shift_active_invader = 17,
      shift_hidden_in_ambush = 18,
      shift_invader_origin = 19,
      shift_coward = 20,
      shift_hidden_ambusher = 21,
      shift_invades = 22,
      shift_check_flows = 23,
      shift_ridden = 24,
      shift_caged = 25,
      shift_tame = 26,
      shift_chained = 27,
      shift_royal_guard = 28,
      shift_fortress_guard = 29,
      shift_suppress_wield = 30,
      shift_important_historical_figure = 31
    };
    enum Mask : uint32_t {
      mask_move_state = 0x1U,
      mask_dead = 0x2U,
      mask_has_mood = 0x4U,
      mask_had_mood = 0x8U,
      mask_marauder = 0x10U,
      mask_drowning = 0x20U,
      mask_merchant = 0x40U,
      mask_forest = 0x80U,
      mask_left = 0x100U,
      mask_rider = 0x200U,
      mask_incoming = 0x400U,
      mask_diplomat = 0x800U,
      mask_zombie = 0x1000U,
      mask_skeleton = 0x2000U,
      mask_can_swap = 0x4000U,
      mask_on_ground = 0x8000U,
      mask_projectile = 0x10000U,
      mask_active_invader = 0x20000U,
      mask_hidden_in_ambush = 0x40000U,
      mask_invader_origin = 0x80000U,
      mask_coward = 0x100000U,
      mask_hidden_ambusher = 0x200000U,
      mask_invades = 0x400000U,
      mask_check_flows = 0x800000U,
      mask_ridden = 0x1000000U,
      mask_caged = 0x2000000U,
      mask_tame = 0x4000000U,
      mask_chained = 0x8000000U,
      mask_royal_guard = 0x10000000U,
      mask_fortress_guard = 0x20000000U,
      mask_suppress_wield = 0x40000000U,
      mask_important_historical_figure = 0x80000000U
    };
    unit_flags1(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_flags1> {
    typedef uint32_t base_type;
    typedef unit_flags1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_flags1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
