/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_RAW_H
#define DF_BODY_PART_RAW_H
#ifndef DF_BODY_PART_RAW_FLAGS_H
#include "body_part_raw_flags.h"
#endif
namespace df {
  struct body_part_layer_raw;
  struct DFHACK_EXPORT body_part_raw {
    std::string token;
    std::string category;
    int16_t con_part_id;
    BitArray<df::body_part_raw_flags> flags;
    std::vector<df::body_part_layer_raw* > layers;
    int32_t fraction_total;
    int32_t fraction_base;
    int32_t fraction_fat;
    int32_t fraction_muscle;
    int32_t relsize;
    int32_t number;
    int16_t unk7b;
    std::vector<std::string* > name_singular;
    std::vector<std::string* > name_plural;
    std::vector<int16_t >* bp_relation_part_id;
    std::vector<int16_t >* bp_relation_code;
    std::vector<int16_t >* bp_relation_coverage;
    uint16_t min_temp;
    uint16_t max_temp;
    uint16_t temp_factor;
    int32_t numbered_idx; /*!< defined only if number field nonzero */
    int16_t insulation_fat;
    int16_t insulation_muscle;
    int16_t insulation_base;
    int32_t clothing_item_id; /*!< v0.34.06 */
    static struct_identity _identity;
  public:
    body_part_raw();
  };
}
#endif
