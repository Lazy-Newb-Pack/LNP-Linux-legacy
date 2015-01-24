/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORICAL_KILLS_H
#define DF_HISTORICAL_KILLS_H
namespace df {
  struct DFHACK_EXPORT historical_kills {
    std::vector<int32_t > events;
    std::vector<int16_t > killed_race;
    std::vector<int16_t > killed_caste;
    std::vector<int32_t > unk_30; /*!< -1 */
    std::vector<int32_t > unk_40; /*!< -1 */
    std::vector<int32_t > killed_site;
    union T_killed_undead {
      uint16_t whole;
      struct {
        uint16_t skeletal : 1;
        uint16_t zombie : 1;
        uint16_t ghostly : 1;
      } bits;
      enum Shift {
        shift_skeletal = 0,
        shift_zombie = 1,
        shift_ghostly = 2
      };
      enum Mask : uint16_t {
        mask_skeletal = 0x1U,
        mask_zombie = 0x2U,
        mask_ghostly = 0x4U
      };
      T_killed_undead(uint16_t whole_ = 0) : whole(whole_) {};
    };
    std::vector<T_killed_undead > killed_undead;
    std::vector<int32_t > killed_count;
    static struct_identity _identity;
  public:
    historical_kills();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<historical_kills::T_killed_undead> {
    typedef uint16_t base_type;
    typedef historical_kills::T_killed_undead bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<historical_kills::T_killed_undead> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
