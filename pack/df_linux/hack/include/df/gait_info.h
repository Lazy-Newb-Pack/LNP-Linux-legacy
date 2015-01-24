/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GAIT_INFO_H
#define DF_GAIT_INFO_H
namespace df {
  struct DFHACK_EXPORT gait_info {
    int32_t action_string_idx;
    int32_t full_speed;
    int32_t buildup_time;
    int32_t turn_max;
    int32_t start_speed;
    int32_t energy_use;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t layers_slow : 1;
        uint32_t strength : 1;
        uint32_t agility : 1;
      } bits;
      enum Shift {
        shift_layers_slow = 0,
        shift_strength = 1,
        shift_agility = 2
      };
      enum Mask : uint32_t {
        mask_layers_slow = 0x1U,
        mask_strength = 0x2U,
        mask_agility = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t stealth_slows;
    static struct_identity _identity;
  public:
    gait_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<gait_info::T_flags> {
    typedef uint32_t base_type;
    typedef gait_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<gait_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
