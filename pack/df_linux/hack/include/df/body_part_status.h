/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_STATUS_H
#define DF_BODY_PART_STATUS_H
namespace df {
  union body_part_status {
    uint32_t whole;
    struct {
      uint32_t on_fire : 1;
      uint32_t missing : 1;
      uint32_t organ_loss : 1; /*!< cyan */
      uint32_t organ_damage : 1; /*!< yellow */
      uint32_t muscle_loss : 1; /*!< red */
      uint32_t muscle_damage : 1; /*!< yellow */
      uint32_t bone_loss : 1; /*!< red */
      uint32_t bone_damage : 1; /*!< yellow */
      uint32_t skin_damage : 1; /*!< brown */
      uint32_t motor_nerve_severed : 1;
      uint32_t sensory_nerve_severed : 1;
      uint32_t spilled_guts : 1;
      uint32_t has_splint : 1;
      uint32_t has_bandage : 1;
      uint32_t has_plaster_cast : 1;
      uint32_t grime : 3;
      uint32_t severed_or_jammed : 1; /*!< seen e.g. on ribs smashed by blunt attack, but quickly disappeared */
      uint32_t under_shell : 1;
      uint32_t is_shell : 1;
      uint32_t unk19 : 1; /*!< on zombified head */
      uint32_t unk20 : 1; /*!< on zombified head */
    } bits;
    enum Shift {
      shift_on_fire = 0,
      shift_missing = 1,
      shift_organ_loss = 2,
      shift_organ_damage = 3,
      shift_muscle_loss = 4,
      shift_muscle_damage = 5,
      shift_bone_loss = 6,
      shift_bone_damage = 7,
      shift_skin_damage = 8,
      shift_motor_nerve_severed = 9,
      shift_sensory_nerve_severed = 10,
      shift_spilled_guts = 11,
      shift_has_splint = 12,
      shift_has_bandage = 13,
      shift_has_plaster_cast = 14,
      shift_grime = 15,
      shift_severed_or_jammed = 18,
      shift_under_shell = 19,
      shift_is_shell = 20,
      shift_unk19 = 21,
      shift_unk20 = 22
    };
    enum Mask : uint32_t {
      mask_on_fire = 0x1U,
      mask_missing = 0x2U,
      mask_organ_loss = 0x4U,
      mask_organ_damage = 0x8U,
      mask_muscle_loss = 0x10U,
      mask_muscle_damage = 0x20U,
      mask_bone_loss = 0x40U,
      mask_bone_damage = 0x80U,
      mask_skin_damage = 0x100U,
      mask_motor_nerve_severed = 0x200U,
      mask_sensory_nerve_severed = 0x400U,
      mask_spilled_guts = 0x800U,
      mask_has_splint = 0x1000U,
      mask_has_bandage = 0x2000U,
      mask_has_plaster_cast = 0x4000U,
      mask_grime = 0x38000U,
      mask_severed_or_jammed = 0x40000U,
      mask_under_shell = 0x80000U,
      mask_is_shell = 0x100000U,
      mask_unk19 = 0x200000U,
      mask_unk20 = 0x400000U
    };
    body_part_status(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<body_part_status> {
    typedef uint32_t base_type;
    typedef body_part_status bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<body_part_status> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
