/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_REMOVE_SIMPLE_FLAGST_H
#define DF_CREATURE_INTERACTION_EFFECT_REMOVE_SIMPLE_FLAGST_H
#ifndef DF_CIE_ADD_TAG_MASK1_H
#include "cie_add_tag_mask1.h"
#endif
#ifndef DF_CIE_ADD_TAG_MASK2_H
#include "cie_add_tag_mask2.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_remove_simple_flagst : creature_interaction_effect {
    df::cie_add_tag_mask1 tags1;
    df::cie_add_tag_mask2 tags2;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_remove_simple_flagst(virtual_identity *_id = &creature_interaction_effect_remove_simple_flagst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_remove_simple_flagst>(void*,const void*);
  };
}
#endif
