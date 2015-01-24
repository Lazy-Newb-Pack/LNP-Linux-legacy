/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_BODY_MAT_INTERACTIONST_H
#define DF_CREATURE_INTERACTION_EFFECT_BODY_MAT_INTERACTIONST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_body_mat_interactionst : creature_interaction_effect {
    std::string unk_6c;
    int32_t unk_88;
    int32_t unk_8c;
    int32_t unk_90;
    std::string unk_94;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_body_mat_interactionst(virtual_identity *_id = &creature_interaction_effect_body_mat_interactionst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_body_mat_interactionst>(void*,const void*);
  };
}
#endif
