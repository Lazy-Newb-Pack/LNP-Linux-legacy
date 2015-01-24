/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HEALTH_VIEW_BITS2_H
#define DF_HEALTH_VIEW_BITS2_H
namespace df {
  union health_view_bits2 {
    uint32_t whole;
    struct {
      uint32_t breathe_cant : 1;
      uint32_t breathe_trouble : 1;
      uint32_t vision_lost : 1;
      uint32_t vision_impaired : 1;
      uint32_t vision_impaired2 : 1;
      uint32_t stand_cant : 1;
      uint32_t stand_impaired : 1;
      uint32_t grasp_cant : 1;
      uint32_t grasp_impaired : 1;
      uint32_t fly_cant : 1;
      uint32_t fly_impaired : 1;
      uint32_t motor_nerve : 1;
      uint32_t sensory_nerve : 1;
      uint32_t spilled : 1;
      uint32_t artery_major : 1;
      uint32_t artery : 1;
      uint32_t tendon_torn : 1;
      uint32_t tendon_strain : 1;
      uint32_t tendon_bruise : 1;
      uint32_t ligament_torn : 1;
      uint32_t ligament_sprain : 1;
      uint32_t ligament_bruise : 1;
      uint32_t fracture_compound : 1;
      uint32_t fracture_overlap : 1;
      uint32_t need_setting : 1;
      uint32_t tissue_broken : 1;
      uint32_t tissue_part_broken : 1;
      uint32_t damage_heavy : 1;
      uint32_t damage_moderate : 1;
      uint32_t damage_light : 1;
      uint32_t pain_extreme : 1;
      uint32_t pain_moderate : 1;
    } bits;
    enum Shift {
      shift_breathe_cant = 0,
      shift_breathe_trouble = 1,
      shift_vision_lost = 2,
      shift_vision_impaired = 3,
      shift_vision_impaired2 = 4,
      shift_stand_cant = 5,
      shift_stand_impaired = 6,
      shift_grasp_cant = 7,
      shift_grasp_impaired = 8,
      shift_fly_cant = 9,
      shift_fly_impaired = 10,
      shift_motor_nerve = 11,
      shift_sensory_nerve = 12,
      shift_spilled = 13,
      shift_artery_major = 14,
      shift_artery = 15,
      shift_tendon_torn = 16,
      shift_tendon_strain = 17,
      shift_tendon_bruise = 18,
      shift_ligament_torn = 19,
      shift_ligament_sprain = 20,
      shift_ligament_bruise = 21,
      shift_fracture_compound = 22,
      shift_fracture_overlap = 23,
      shift_need_setting = 24,
      shift_tissue_broken = 25,
      shift_tissue_part_broken = 26,
      shift_damage_heavy = 27,
      shift_damage_moderate = 28,
      shift_damage_light = 29,
      shift_pain_extreme = 30,
      shift_pain_moderate = 31
    };
    enum Mask : uint32_t {
      mask_breathe_cant = 0x1U,
      mask_breathe_trouble = 0x2U,
      mask_vision_lost = 0x4U,
      mask_vision_impaired = 0x8U,
      mask_vision_impaired2 = 0x10U,
      mask_stand_cant = 0x20U,
      mask_stand_impaired = 0x40U,
      mask_grasp_cant = 0x80U,
      mask_grasp_impaired = 0x100U,
      mask_fly_cant = 0x200U,
      mask_fly_impaired = 0x400U,
      mask_motor_nerve = 0x800U,
      mask_sensory_nerve = 0x1000U,
      mask_spilled = 0x2000U,
      mask_artery_major = 0x4000U,
      mask_artery = 0x8000U,
      mask_tendon_torn = 0x10000U,
      mask_tendon_strain = 0x20000U,
      mask_tendon_bruise = 0x40000U,
      mask_ligament_torn = 0x80000U,
      mask_ligament_sprain = 0x100000U,
      mask_ligament_bruise = 0x200000U,
      mask_fracture_compound = 0x400000U,
      mask_fracture_overlap = 0x800000U,
      mask_need_setting = 0x1000000U,
      mask_tissue_broken = 0x2000000U,
      mask_tissue_part_broken = 0x4000000U,
      mask_damage_heavy = 0x8000000U,
      mask_damage_moderate = 0x10000000U,
      mask_damage_light = 0x20000000U,
      mask_pain_extreme = 0x40000000U,
      mask_pain_moderate = 0x80000000U
    };
    health_view_bits2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<health_view_bits2> {
    typedef uint32_t base_type;
    typedef health_view_bits2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<health_view_bits2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
