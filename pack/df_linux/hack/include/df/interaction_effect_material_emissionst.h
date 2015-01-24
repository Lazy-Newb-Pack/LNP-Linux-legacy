/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_MATERIAL_EMISSIONST_H
#define DF_INTERACTION_EFFECT_MATERIAL_EMISSIONST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_material_emissionst : interaction_effect {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_effect_material_emissionst(virtual_identity *_id = &interaction_effect_material_emissionst::_identity);
    friend void *df::allocator_fn<interaction_effect_material_emissionst>(void*,const void*);
  };
}
#endif
