/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WEAPON_ATTACK_H
#define DF_WEAPON_ATTACK_H
namespace df {
  struct DFHACK_EXPORT weapon_attack {
    bool edged;
    int32_t contact;
    int32_t penetration;
    int32_t velocity_mult;
    std::string verb_2nd;
    std::string verb_3rd;
    std::string noun;
    int32_t prepare; /*!< v0.40.1 */
    int32_t recover; /*!< v0.40.1 */
    /**
     * v0.40.1
     */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t anon_1 : 1;
        uint32_t bad_multiattack : 1;
      } bits;
      enum Shift {
        shift_anon_1 = 0,
        shift_bad_multiattack = 1
      };
      enum Mask : uint32_t {
        mask_anon_1 = 0x1U,
        mask_bad_multiattack = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    weapon_attack();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<weapon_attack::T_flags> {
    typedef uint32_t base_type;
    typedef weapon_attack::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<weapon_attack::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
