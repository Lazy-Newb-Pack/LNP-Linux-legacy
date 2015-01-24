/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_FEVERST_H
#define DF_CREATURE_INTERACTION_EFFECT_FEVERST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_feverst : creature_interaction_effect {
    int32_t sev;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_feverst(virtual_identity *_id = &creature_interaction_effect_feverst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_feverst>(void*,const void*);
  };
}
#endif
