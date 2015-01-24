/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_FLAGS_H
#define DF_BUILDING_FLAGS_H
namespace df {
  union building_flags {
    uint32_t whole;
    struct {
      uint32_t exists : 1; /*!< actually built, not just ordered */
      uint32_t site_blocked : 1; /*!< items on ground on site */
      uint32_t room_collision : 1; /*!< major intersection with another room? */
      uint32_t anon_1 : 1;
      uint32_t justice : 1;
      uint32_t almost_deleted : 1; /*!< when requesting delete while in_update */
      uint32_t in_update : 1;
      uint32_t from_worldgen : 1;
    } bits;
    enum Shift {
      shift_exists = 0,
      shift_site_blocked = 1,
      shift_room_collision = 2,
      shift_anon_1 = 3,
      shift_justice = 4,
      shift_almost_deleted = 5,
      shift_in_update = 6,
      shift_from_worldgen = 7
    };
    enum Mask : uint32_t {
      mask_exists = 0x1U,
      mask_site_blocked = 0x2U,
      mask_room_collision = 0x4U,
      mask_anon_1 = 0x8U,
      mask_justice = 0x10U,
      mask_almost_deleted = 0x20U,
      mask_in_update = 0x40U,
      mask_from_worldgen = 0x80U
    };
    building_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_flags> {
    typedef uint32_t base_type;
    typedef building_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
