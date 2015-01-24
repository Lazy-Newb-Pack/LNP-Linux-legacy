/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CASTE_BODY_INFO_H
#define DF_CASTE_BODY_INFO_H
#ifndef DF_BREATH_ATTACK_TYPE_H
#include "breath_attack_type.h"
#endif
#ifndef DF_INTERACTION_EFFECT_LOCATION_HINT_H
#include "interaction_effect_location_hint.h"
#endif
#ifndef DF_INTERACTION_SOURCE_USAGE_HINT_H
#include "interaction_source_usage_hint.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
namespace df {
  struct body_part_raw;
  struct caste_attack;
  struct gait_info;
  struct DFHACK_EXPORT caste_body_info {
    std::vector<df::body_part_raw* > body_parts;
    std::vector<df::caste_attack* > attacks;
    struct DFHACK_EXPORT T_interactions {
      int32_t type; /*!< 0 = RETRACT_INTO_BP, 1 = CAN_DO_INTERACTION */
      struct DFHACK_EXPORT T_unk {
        std::vector<std::string* > bp_required_type;
        std::vector<std::string* > bp_required_name;
        std::string anon_1;
        std::string anon_2;
        std::string material_str0;
        std::string material_str1;
        std::string material_str2;
        df::breath_attack_type material_breath;
        std::string verb_2nd;
        std::string verb_3rd;
        std::string verb_ext;
        std::string anon_3;
        std::string anon_4;
        std::string anon_5;
        std::string anon_6;
        std::string interaction_type;
        int32_t anon_7;
        std::vector<df::interaction_source_usage_hint > usage_hint;
        std::vector<df::interaction_effect_location_hint > location_hint;
        int32_t anon_8;
        std::vector<void* > anon_9;
        std::vector<int32_t > anon_10;
        std::vector<int32_t > anon_11;
        std::vector<void* > anon_12;
        std::vector<int32_t > anon_13;
        std::vector<void* > anon_14;
        std::vector<void* > anon_15;
        std::string adv_name;
        int32_t wait_period;
        static struct_identity _identity;
      public:
        T_unk();
      };
      T_unk unk;
      static struct_identity _identity;
    public:
      T_interactions();
    };
    std::vector<T_interactions* > interactions;
    struct DFHACK_EXPORT T_extra_butcher_objects {
      int16_t anon_1;
      std::string anon_2;
      int32_t anon_3;
      std::string anon_4;
      std::string anon_5;
      std::string anon_6;
      std::string anon_7;
      std::string anon_8;
      int16_t anon_9;
      int16_t anon_10;
      int16_t anon_11;
      int32_t anon_12;
      int32_t anon_13;
      static struct_identity _identity;
    public:
      T_extra_butcher_objects();
    };
    std::vector<T_extra_butcher_objects* > extra_butcher_objects;
    int32_t total_relsize; /*!< unless INTERNAL or EMBEDDED */
    std::vector<int16_t > layer_part;
    std::vector<int16_t > layer_idx;
    std::vector<uint32_t > numbered_masks; /*!< 1 bit per instance of a numbered body part */
    std::vector<int32_t > layer_nonsolid;
    std::vector<int32_t > nonsolid_layers;
    /**
     * v0.34.01
     */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t unk0 : 1;
      } bits;
      enum Shift {
        shift_unk0 = 0
      };
      enum Mask : uint32_t {
        mask_unk0 = 0x1U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags; /*!< v0.34.01 */
    std::vector<df::gait_info* > gait_info[5];
    df::material_vec_ref materials;
    int32_t fraction_total;
    int32_t fraction_base;
    int32_t fraction_fat;
    int32_t fraction_muscle;
    int32_t unk_v40_2[11]; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    caste_body_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<caste_body_info::T_flags> {
    typedef uint32_t base_type;
    typedef caste_body_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<caste_body_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
