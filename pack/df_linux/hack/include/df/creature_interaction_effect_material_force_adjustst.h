/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_MATERIAL_FORCE_ADJUSTST_H
#define DF_CREATURE_INTERACTION_EFFECT_MATERIAL_FORCE_ADJUSTST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_material_force_adjustst : creature_interaction_effect {
    std::string unk_6c;
    std::string unk_88;
    std::string unk_a4;
    int16_t mat_type;
    int32_t mat_index;
    int32_t fraction_mul;
    int32_t fraction_div;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_material_force_adjustst(virtual_identity *_id = &creature_interaction_effect_material_force_adjustst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_material_force_adjustst>(void*,const void*);
  };
}
#endif
