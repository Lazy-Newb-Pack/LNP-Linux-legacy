/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_REUSE_POOL_H
#define DF_FLOW_REUSE_POOL_H
namespace df {
  struct DFHACK_EXPORT flow_reuse_pool {
    int32_t reuse_idx;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t active : 1;
      } bits;
      enum Shift {
        shift_active = 0
      };
      enum Mask : uint32_t {
        mask_active = 0x1U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static struct_identity _identity;
  public:
    flow_reuse_pool();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<flow_reuse_pool::T_flags> {
    typedef uint32_t base_type;
    typedef flow_reuse_pool::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<flow_reuse_pool::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
