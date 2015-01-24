/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_LAYER_RAW_H
#define DF_BODY_PART_LAYER_RAW_H
#ifndef DF_BODY_PART_LAYER_FLAGS_H
#include "body_part_layer_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT body_part_layer_raw {
    std::string layer_name;
    int32_t tissue_id;
    BitArray<df::body_part_layer_flags> flags;
    int32_t part_fraction; /*!< total 1000 */
    int32_t healing_rate;
    int32_t vascular;
    int32_t pain_receptors;
    int32_t unk6;
    int16_t unk7;
    std::vector<int32_t > bp_modifiers;
    int32_t layer_id; /*!< across all body parts */
    int32_t parent_idx;
    int32_t parent_layer_id;
    int32_t layer_depth; /*!< -1 for skin and internal organs */
    int32_t leak_barrier_id; /*!< layer that stops TISSUE_LEAKS, but unused and broken */
    int32_t nonsolid_id;
    int32_t styleable_id;
    static struct_identity _identity;
  public:
    body_part_layer_raw();
  };
}
#endif
