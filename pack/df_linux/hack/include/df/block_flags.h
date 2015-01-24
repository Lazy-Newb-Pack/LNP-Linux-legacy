/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_FLAGS_H
#define DF_BLOCK_FLAGS_H
namespace df {
  union block_flags {
    uint32_t whole;
    struct {
      uint32_t designated : 1; /*!< for jobs etc */
      uint32_t update_temperature : 1;
      uint32_t update_liquid : 1;
      uint32_t update_liquid_twice : 1; /*!< Protects UpdateLiquid from being cleared the first time. */
      uint32_t repath_on_freeze : 1; /*!< reindex_pathfinding set and flag cleared if temperature below 10000 */
      uint32_t repath_on_melt : 1; /*!< reindex_pathfinding set and flag cleared if temperature above 10000 */
      uint32_t has_aquifer : 1; /*!< has actual aquifer tiles (?) */
      uint32_t check_aquifer : 1; /*!< has tiles that may get flooded by an adjacent aquifer */
    } bits;
    enum Shift {
      shift_designated = 0,
      shift_update_temperature = 1,
      shift_update_liquid = 2,
      shift_update_liquid_twice = 3,
      shift_repath_on_freeze = 4,
      shift_repath_on_melt = 5,
      shift_has_aquifer = 6,
      shift_check_aquifer = 7
    };
    enum Mask : uint32_t {
      mask_designated = 0x1U,
      mask_update_temperature = 0x2U,
      mask_update_liquid = 0x4U,
      mask_update_liquid_twice = 0x8U,
      mask_repath_on_freeze = 0x10U,
      mask_repath_on_melt = 0x20U,
      mask_has_aquifer = 0x40U,
      mask_check_aquifer = 0x80U
    };
    block_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<block_flags> {
    typedef uint32_t base_type;
    typedef block_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<block_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
