/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_INFO_H
#define DF_INTERACTION_TARGET_INFO_H
namespace df {
  struct DFHACK_EXPORT interaction_target_info {
    std::vector<std::string* > affected_creature_str[2];
    std::vector<int32_t > affected_creature;
    std::vector<std::string* > affected_class;
    std::vector<std::string* > immune_creature_str[2];
    std::vector<int32_t > immune_creature;
    std::vector<std::string* > immune_class;
    std::vector<std::string* > forbidden_syndrome_class;
    int32_t requires_1;
    int32_t requires_2;
    int32_t forbidden_1;
    int32_t forbidden_2;
    union T_restrictions {
      uint32_t whole;
      struct {
        uint32_t CANNOT_TARGET_IF_ALREADY_AFFECTED : 1;
      } bits;
      enum Shift {
        shift_CANNOT_TARGET_IF_ALREADY_AFFECTED = 0
      };
      enum Mask : uint32_t {
        mask_CANNOT_TARGET_IF_ALREADY_AFFECTED = 0x1U
      };
      T_restrictions(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_restrictions restrictions;
    static struct_identity _identity;
  public:
    interaction_target_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<interaction_target_info::T_restrictions> {
    typedef uint32_t base_type;
    typedef interaction_target_info::T_restrictions bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<interaction_target_info::T_restrictions> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
