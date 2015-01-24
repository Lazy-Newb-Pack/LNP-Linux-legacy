/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_BP_APPEARANCE_MODIFIERST_H
#define DF_CREATURE_INTERACTION_EFFECT_BP_APPEARANCE_MODIFIERST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_H
#include "creature_interaction_effect_target.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_bp_appearance_modifierst : creature_interaction_effect {
    int16_t unk_6c;
    int32_t value;
    df::creature_interaction_effect_target target;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_bp_appearance_modifierst(virtual_identity *_id = &creature_interaction_effect_bp_appearance_modifierst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_bp_appearance_modifierst>(void*,const void*);
  };
}
#endif
