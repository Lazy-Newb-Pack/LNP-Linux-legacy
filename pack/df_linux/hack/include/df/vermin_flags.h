/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VERMIN_FLAGS_H
#define DF_VERMIN_FLAGS_H
namespace df {
  union vermin_flags {
    uint32_t whole;
    struct {
      uint32_t anon_1 : 1;
      uint32_t is_colony : 1; /*!< A vermin colony. For example an anthill or bee hive. */
      uint32_t anon_2 : 1;
      uint32_t anon_3 : 1;
      uint32_t anon_4 : 1;
    } bits;
    enum Shift {
      shift_anon_1 = 0,
      shift_is_colony = 1,
      shift_anon_2 = 2,
      shift_anon_3 = 3,
      shift_anon_4 = 4
    };
    enum Mask : uint32_t {
      mask_anon_1 = 0x1U,
      mask_is_colony = 0x2U,
      mask_anon_2 = 0x4U,
      mask_anon_3 = 0x8U,
      mask_anon_4 = 0x10U
    };
    vermin_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<vermin_flags> {
    typedef uint32_t base_type;
    typedef vermin_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<vermin_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
