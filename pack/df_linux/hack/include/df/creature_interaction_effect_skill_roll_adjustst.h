/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_SKILL_ROLL_ADJUSTST_H
#define DF_CREATURE_INTERACTION_EFFECT_SKILL_ROLL_ADJUSTST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_skill_roll_adjustst : creature_interaction_effect {
    int32_t multiplier; /*!< % change for skill */
    int32_t chance; /*!< % probability per roll */
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_skill_roll_adjustst(virtual_identity *_id = &creature_interaction_effect_skill_roll_adjustst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_skill_roll_adjustst>(void*,const void*);
  };
}
#endif
