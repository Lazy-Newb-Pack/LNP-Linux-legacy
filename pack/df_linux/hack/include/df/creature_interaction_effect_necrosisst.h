/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_NECROSISST_H
#define DF_CREATURE_INTERACTION_EFFECT_NECROSISST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_H
#include "creature_interaction_effect_target.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_necrosisst : creature_interaction_effect {
    int32_t sev;
    df::creature_interaction_effect_target target;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_necrosisst(virtual_identity *_id = &creature_interaction_effect_necrosisst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_necrosisst>(void*,const void*);
  };
}
#endif
