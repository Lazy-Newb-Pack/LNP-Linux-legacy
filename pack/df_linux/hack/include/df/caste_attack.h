/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CASTE_ATTACK_H
#define DF_CASTE_ATTACK_H
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
namespace df {
  struct DFHACK_EXPORT caste_attack {
    std::string name;
    std::string verb_3rd;
    std::string verb_2nd;
    union T_flags {
      uint16_t whole;
      struct {
        uint16_t with : 1;
        uint16_t latch : 1;
        uint16_t main : 1;
        uint16_t edge : 1;
      } bits;
      enum Shift {
        shift_with = 0,
        shift_latch = 1,
        shift_main = 2,
        shift_edge = 3
      };
      enum Mask : uint16_t {
        mask_with = 0x1U,
        mask_latch = 0x2U,
        mask_main = 0x4U,
        mask_edge = 0x8U
      };
      T_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    std::vector<int32_t > specialattack_type; /*!< 0 = inject extract, 1 = suck blood, 2 = perform interaction */
    std::vector<int16_t > specialattack_mat_type; /*!< extract injected */
    std::vector<int32_t > specialattack_mat_index;
    std::vector<df::matter_state > specialattack_mat_state;
    std::vector<std::string* > specialattack_temp_mat[3]; /*!< parsed during second pass */
    std::vector<int32_t > specialattack_min; /*!< amount of extract injected or blood sucked */
    std::vector<int32_t > specialattack_max;
    int32_t contact_perc;
    int32_t penetration_perc;
    int16_t unk_v40_1; /*!< v0.40.1 */
    int16_t unk_v40_2; /*!< v0.40.1 */
    std::vector<int16_t > body_part_idx;
    std::vector<int16_t > tissue_layer_idx;
    df::job_skill skill;
    int32_t velocity_modifier;
    std::vector<std::string* > specialattack_interaction_tmp_name; /*!< parsed during second pass */
    std::vector<int32_t > specialattack_interaction_id;
    int32_t unk_v40_3; /*!< v0.40.1 */
    int32_t unk_v40_4; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    caste_attack();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<caste_attack::T_flags> {
    typedef uint16_t base_type;
    typedef caste_attack::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<caste_attack::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
