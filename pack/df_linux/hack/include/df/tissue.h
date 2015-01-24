/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TISSUE_H
#define DF_TISSUE_H
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
#ifndef DF_TISSUE_FLAGS_H
#include "tissue_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT tissue {
    std::string id;
    BitArray<df::tissue_flags> flags;
    std::string tissue_name_singular;
    std::string tissue_name_plural;
    std::string tissue_material_str[3];
    int16_t mat_type;
    int32_t mat_index;
    int32_t relative_thickness;
    int32_t healing_rate;
    int32_t vascular;
    int32_t pain_receptors;
    int16_t tissue_shape;
    int32_t unk1;
    int16_t insulation;
    std::string subordinate_to_tissue;
    int32_t parent_tissue;
    df::matter_state tissue_mat_state;
    uint16_t heatdam_point;
    uint16_t colddam_point;
    uint16_t ignite_point;
    uint16_t melting_point;
    uint16_t boiling_point;
    uint16_t spec_heat;
    std::string tissue_shape_str;
    static struct_identity _identity;
    typedef tissue* key_pointer_type;
    typedef std::string key_field_type;
    static int binsearch_index(const std::vector<tissue*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<tissue*> &vec, key_pointer_type key, bool exact = true);
  public:
    tissue();
  };
}
#endif
