/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WOUND_DAMAGE_FLAGS1_H
#define DF_WOUND_DAMAGE_FLAGS1_H
namespace df {
  union wound_damage_flags1 {
    uint32_t whole;
    struct {
      uint32_t cut : 1;
      uint32_t smashed : 1;
      uint32_t scar_cut : 1; /*!< straight scar */
      uint32_t scar_smashed : 1; /*!< huge dent */
      uint32_t tendon_bruised : 1;
      uint32_t tendon_strained : 1;
      uint32_t tendon_torn : 1;
      uint32_t ligament_bruised : 1;
      uint32_t ligament_sprained : 1;
      uint32_t ligament_torn : 1;
      uint32_t motor_nerve_severed : 1;
      uint32_t sensory_nerve_severed : 1;
      uint32_t edged_damage : 1;
      uint32_t smashed_apart : 1; /*!< ? */
      uint32_t major_artery : 1;
      uint32_t guts_spilled : 1;
      uint32_t edged_shake1 : 1;
      uint32_t scar_edged_shake1 : 1; /*!< jagged scar */
      uint32_t edged_shake2 : 1;
      uint32_t broken : 1;
      uint32_t scar_broken : 1; /*!< huge dent */
      uint32_t gouged : 1;
      uint32_t blunt_shake1 : 1;
      uint32_t scar_blunt_shake1 : 1; /*!< jagged scar */
      uint32_t blunt_shake2 : 1;
      uint32_t joint_bend1 : 1;
      uint32_t scar_joint_bend1 : 1; /*!< jagged scar */
      uint32_t joint_bend2 : 1;
      uint32_t compound_fracture : 1;
      uint32_t diagnosed : 1;
      uint32_t artery : 1;
      uint32_t overlapping_fracture : 1;
    } bits;
    enum Shift {
      shift_cut = 0,
      shift_smashed = 1,
      shift_scar_cut = 2,
      shift_scar_smashed = 3,
      shift_tendon_bruised = 4,
      shift_tendon_strained = 5,
      shift_tendon_torn = 6,
      shift_ligament_bruised = 7,
      shift_ligament_sprained = 8,
      shift_ligament_torn = 9,
      shift_motor_nerve_severed = 10,
      shift_sensory_nerve_severed = 11,
      shift_edged_damage = 12,
      shift_smashed_apart = 13,
      shift_major_artery = 14,
      shift_guts_spilled = 15,
      shift_edged_shake1 = 16,
      shift_scar_edged_shake1 = 17,
      shift_edged_shake2 = 18,
      shift_broken = 19,
      shift_scar_broken = 20,
      shift_gouged = 21,
      shift_blunt_shake1 = 22,
      shift_scar_blunt_shake1 = 23,
      shift_blunt_shake2 = 24,
      shift_joint_bend1 = 25,
      shift_scar_joint_bend1 = 26,
      shift_joint_bend2 = 27,
      shift_compound_fracture = 28,
      shift_diagnosed = 29,
      shift_artery = 30,
      shift_overlapping_fracture = 31
    };
    enum Mask : uint32_t {
      mask_cut = 0x1U,
      mask_smashed = 0x2U,
      mask_scar_cut = 0x4U,
      mask_scar_smashed = 0x8U,
      mask_tendon_bruised = 0x10U,
      mask_tendon_strained = 0x20U,
      mask_tendon_torn = 0x40U,
      mask_ligament_bruised = 0x80U,
      mask_ligament_sprained = 0x100U,
      mask_ligament_torn = 0x200U,
      mask_motor_nerve_severed = 0x400U,
      mask_sensory_nerve_severed = 0x800U,
      mask_edged_damage = 0x1000U,
      mask_smashed_apart = 0x2000U,
      mask_major_artery = 0x4000U,
      mask_guts_spilled = 0x8000U,
      mask_edged_shake1 = 0x10000U,
      mask_scar_edged_shake1 = 0x20000U,
      mask_edged_shake2 = 0x40000U,
      mask_broken = 0x80000U,
      mask_scar_broken = 0x100000U,
      mask_gouged = 0x200000U,
      mask_blunt_shake1 = 0x400000U,
      mask_scar_blunt_shake1 = 0x800000U,
      mask_blunt_shake2 = 0x1000000U,
      mask_joint_bend1 = 0x2000000U,
      mask_scar_joint_bend1 = 0x4000000U,
      mask_joint_bend2 = 0x8000000U,
      mask_compound_fracture = 0x10000000U,
      mask_diagnosed = 0x20000000U,
      mask_artery = 0x40000000U,
      mask_overlapping_fracture = 0x80000000U
    };
    wound_damage_flags1(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<wound_damage_flags1> {
    typedef uint32_t base_type;
    typedef wound_damage_flags1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<wound_damage_flags1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
