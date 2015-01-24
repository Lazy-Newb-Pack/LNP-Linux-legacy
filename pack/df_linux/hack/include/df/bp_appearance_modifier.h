/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BP_APPEARANCE_MODIFIER_H
#define DF_BP_APPEARANCE_MODIFIER_H
#ifndef DF_APPEARANCE_MODIFIER_TYPE_H
#include "appearance_modifier_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT bp_appearance_modifier {
    df::appearance_modifier_type type;
    int32_t ranges[7];
    int32_t desc_range[6];
    int32_t anon_1;
    int16_t anon_2;
    int32_t anon_3;
    int32_t anon_4; /*!< 10000 */
    int32_t anon_5;
    int32_t anon_6; /*!< -1 */
    int32_t importance;
    std::string noun;
    int16_t single_plural;
    int16_t unk1;
    int32_t id1;
    std::vector<int16_t > body_parts;
    std::vector<int16_t > tissue_layer;
    int32_t id;
    static struct_identity _identity;
    typedef bp_appearance_modifier* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<bp_appearance_modifier*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<bp_appearance_modifier*> &vec, key_pointer_type key, bool exact = true);
  public:
    bp_appearance_modifier();
  };
}
#endif
