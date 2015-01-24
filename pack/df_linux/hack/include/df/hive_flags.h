/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HIVE_FLAGS_H
#define DF_HIVE_FLAGS_H
namespace df {
  union hive_flags {
    uint32_t whole;
    struct {
      uint32_t do_install : 1;
      uint32_t do_gather : 1;
      uint32_t ready_split : 1;
    } bits;
    enum Shift {
      shift_do_install = 0,
      shift_do_gather = 1,
      shift_ready_split = 2
    };
    enum Mask : uint32_t {
      mask_do_install = 0x1U,
      mask_do_gather = 0x2U,
      mask_ready_split = 0x4U
    };
    hive_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<hive_flags> {
    typedef uint32_t base_type;
    typedef hive_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<hive_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
