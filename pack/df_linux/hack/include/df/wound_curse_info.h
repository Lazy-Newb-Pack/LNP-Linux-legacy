/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WOUND_CURSE_INFO_H
#define DF_WOUND_CURSE_INFO_H
#ifndef DF_CIE_ADD_TAG_MASK1_H
#include "cie_add_tag_mask1.h"
#endif
#ifndef DF_CIE_ADD_TAG_MASK2_H
#include "cie_add_tag_mask2.h"
#endif
namespace df {
  struct curse_attr_change;
  struct DFHACK_EXPORT wound_curse_info {
    int32_t unk_v40_1; /*!< v0.40.01 */
    df::cie_add_tag_mask1 add_tags1;
    df::cie_add_tag_mask1 rem_tags1;
    df::cie_add_tag_mask2 add_tags2;
    df::cie_add_tag_mask2 rem_tags2;
    bool name_visible;
    std::string name;
    std::string name_plural;
    std::string name_adjective;
    uint32_t sym_and_color1;
    uint32_t sym_and_color2;
    uint32_t flash_period;
    uint32_t flash_time2;
    uint32_t speed_add;
    uint32_t speed_mul_percent;
    df::curse_attr_change* attr_change;
    uint32_t luck_mul_percent;
    std::vector<int32_t > interaction_id;
    std::vector<int32_t > interaction_time;
    int32_t time_counter;
    int32_t were_race;
    int32_t were_caste;
    std::vector<int32_t > body_appearance;
    std::vector<int32_t > bp_appearance;
    static struct_identity _identity;
  public:
    wound_curse_info();
  };
}
#endif
