/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJECTILE_FLAGS_H
#define DF_PROJECTILE_FLAGS_H
namespace df {
  union projectile_flags {
    uint32_t whole;
    struct {
      uint32_t no_impact_destroy : 1;
      uint32_t has_hit_ground : 1;
      uint32_t bouncing : 1;
      uint32_t high_flying : 1;
      uint32_t piercing : 1;
      uint32_t to_be_deleted : 1;
      uint32_t unk6 : 1;
      uint32_t unk7 : 1;
      uint32_t parabolic : 1;
      uint32_t unk9 : 1;
      uint32_t unk10 : 1;
      uint32_t no_collide : 1;
    } bits;
    enum Shift {
      shift_no_impact_destroy = 0,
      shift_has_hit_ground = 1,
      shift_bouncing = 2,
      shift_high_flying = 3,
      shift_piercing = 4,
      shift_to_be_deleted = 5,
      shift_unk6 = 6,
      shift_unk7 = 7,
      shift_parabolic = 8,
      shift_unk9 = 9,
      shift_unk10 = 10,
      shift_no_collide = 11
    };
    enum Mask : uint32_t {
      mask_no_impact_destroy = 0x1U,
      mask_has_hit_ground = 0x2U,
      mask_bouncing = 0x4U,
      mask_high_flying = 0x8U,
      mask_piercing = 0x10U,
      mask_to_be_deleted = 0x20U,
      mask_unk6 = 0x40U,
      mask_unk7 = 0x80U,
      mask_parabolic = 0x100U,
      mask_unk9 = 0x200U,
      mask_unk10 = 0x400U,
      mask_no_collide = 0x800U
    };
    projectile_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<projectile_flags> {
    typedef uint32_t base_type;
    typedef projectile_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<projectile_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
