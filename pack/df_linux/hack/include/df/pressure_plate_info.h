/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PRESSURE_PLATE_INFO_H
#define DF_PRESSURE_PLATE_INFO_H
namespace df {
  struct DFHACK_EXPORT pressure_plate_info {
    int32_t unit_min;
    int32_t unit_max;
    int8_t water_min;
    int8_t water_max;
    int8_t magma_min;
    int8_t magma_max;
    int32_t track_min; /*!< v0.34.08 */
    int32_t track_max; /*!< v0.34.08 */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t units : 1;
        uint32_t water : 1;
        uint32_t magma : 1;
        uint32_t citizens : 1;
        uint32_t resets : 1;
        uint32_t track : 1;
      } bits;
      enum Shift {
        shift_units = 0,
        shift_water = 1,
        shift_magma = 2,
        shift_citizens = 3,
        shift_resets = 4,
        shift_track = 5
      };
      enum Mask : uint32_t {
        mask_units = 0x1U,
        mask_water = 0x2U,
        mask_magma = 0x4U,
        mask_citizens = 0x8U,
        mask_resets = 0x10U,
        mask_track = 0x20U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    pressure_plate_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<pressure_plate_info::T_flags> {
    typedef uint32_t base_type;
    typedef pressure_plate_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<pressure_plate_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
