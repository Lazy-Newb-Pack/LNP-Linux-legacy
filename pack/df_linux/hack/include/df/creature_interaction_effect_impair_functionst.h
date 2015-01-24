/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_IMPAIR_FUNCTIONST_H
#define DF_CREATURE_INTERACTION_EFFECT_IMPAIR_FUNCTIONST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_H
#include "creature_interaction_effect_target.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_impair_functionst : creature_interaction_effect {
    int32_t sev;
    df::creature_interaction_effect_target target;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_impair_functionst(virtual_identity *_id = &creature_interaction_effect_impair_functionst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_impair_functionst>(void*,const void*);
  };
}
#endif
