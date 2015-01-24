/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CIE_ADD_TAG_MASK1_H
#define DF_CIE_ADD_TAG_MASK1_H
namespace df {
  union cie_add_tag_mask1 {
    uint32_t whole;
    struct {
      uint32_t EXTRAVISION : 1;
      uint32_t OPPOSED_TO_LIFE : 1;
      uint32_t NOT_LIVING : 1;
      uint32_t NOEXERT : 1;
      uint32_t NOPAIN : 1;
      uint32_t NOBREATHE : 1;
      uint32_t HAS_BLOOD : 1;
      uint32_t NOSTUN : 1;
      uint32_t NONAUSEA : 1;
      uint32_t NO_DIZZINESS : 1;
      uint32_t NO_FEVERS : 1;
      uint32_t TRANCES : 1;
      uint32_t NOEMOTION : 1;
      uint32_t LIKES_FIGHTING : 1;
      uint32_t PARALYZEIMMUNE : 1;
      uint32_t NOFEAR : 1;
      uint32_t NO_EAT : 1;
      uint32_t NO_DRINK : 1;
      uint32_t NO_SLEEP : 1;
      uint32_t MISCHIEVOUS : 1;
      uint32_t NO_PHYS_ATT_GAIN : 1;
      uint32_t NO_PHYS_ATT_RUST : 1;
      uint32_t NOTHOUGHT : 1;
      uint32_t NO_THOUGHT_CENTER_FOR_MOVEMENT : 1;
      uint32_t CAN_SPEAK : 1;
      uint32_t CAN_LEARN : 1;
      uint32_t UTTERANCES : 1;
      uint32_t CRAZED : 1;
      uint32_t BLOODSUCKER : 1;
      uint32_t NO_CONNECTIONS_FOR_MOVEMENT : 1;
      uint32_t SUPERNATURAL : 1;
      uint32_t anon_1 : 1;
    } bits;
    enum Shift {
      shift_EXTRAVISION = 0,
      shift_OPPOSED_TO_LIFE = 1,
      shift_NOT_LIVING = 2,
      shift_NOEXERT = 3,
      shift_NOPAIN = 4,
      shift_NOBREATHE = 5,
      shift_HAS_BLOOD = 6,
      shift_NOSTUN = 7,
      shift_NONAUSEA = 8,
      shift_NO_DIZZINESS = 9,
      shift_NO_FEVERS = 10,
      shift_TRANCES = 11,
      shift_NOEMOTION = 12,
      shift_LIKES_FIGHTING = 13,
      shift_PARALYZEIMMUNE = 14,
      shift_NOFEAR = 15,
      shift_NO_EAT = 16,
      shift_NO_DRINK = 17,
      shift_NO_SLEEP = 18,
      shift_MISCHIEVOUS = 19,
      shift_NO_PHYS_ATT_GAIN = 20,
      shift_NO_PHYS_ATT_RUST = 21,
      shift_NOTHOUGHT = 22,
      shift_NO_THOUGHT_CENTER_FOR_MOVEMENT = 23,
      shift_CAN_SPEAK = 24,
      shift_CAN_LEARN = 25,
      shift_UTTERANCES = 26,
      shift_CRAZED = 27,
      shift_BLOODSUCKER = 28,
      shift_NO_CONNECTIONS_FOR_MOVEMENT = 29,
      shift_SUPERNATURAL = 30,
      shift_anon_1 = 31
    };
    enum Mask : uint32_t {
      mask_EXTRAVISION = 0x1U,
      mask_OPPOSED_TO_LIFE = 0x2U,
      mask_NOT_LIVING = 0x4U,
      mask_NOEXERT = 0x8U,
      mask_NOPAIN = 0x10U,
      mask_NOBREATHE = 0x20U,
      mask_HAS_BLOOD = 0x40U,
      mask_NOSTUN = 0x80U,
      mask_NONAUSEA = 0x100U,
      mask_NO_DIZZINESS = 0x200U,
      mask_NO_FEVERS = 0x400U,
      mask_TRANCES = 0x800U,
      mask_NOEMOTION = 0x1000U,
      mask_LIKES_FIGHTING = 0x2000U,
      mask_PARALYZEIMMUNE = 0x4000U,
      mask_NOFEAR = 0x8000U,
      mask_NO_EAT = 0x10000U,
      mask_NO_DRINK = 0x20000U,
      mask_NO_SLEEP = 0x40000U,
      mask_MISCHIEVOUS = 0x80000U,
      mask_NO_PHYS_ATT_GAIN = 0x100000U,
      mask_NO_PHYS_ATT_RUST = 0x200000U,
      mask_NOTHOUGHT = 0x400000U,
      mask_NO_THOUGHT_CENTER_FOR_MOVEMENT = 0x800000U,
      mask_CAN_SPEAK = 0x1000000U,
      mask_CAN_LEARN = 0x2000000U,
      mask_UTTERANCES = 0x4000000U,
      mask_CRAZED = 0x8000000U,
      mask_BLOODSUCKER = 0x10000000U,
      mask_NO_CONNECTIONS_FOR_MOVEMENT = 0x20000000U,
      mask_SUPERNATURAL = 0x40000000U,
      mask_anon_1 = 0x80000000U
    };
    cie_add_tag_mask1(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<cie_add_tag_mask1> {
    typedef uint32_t base_type;
    typedef cie_add_tag_mask1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<cie_add_tag_mask1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
