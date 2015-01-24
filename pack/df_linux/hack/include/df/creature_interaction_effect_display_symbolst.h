/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_DISPLAY_SYMBOLST_H
#define DF_CREATURE_INTERACTION_EFFECT_DISPLAY_SYMBOLST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_display_symbolst : creature_interaction_effect {
    int32_t tile;
    int32_t color;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_display_symbolst(virtual_identity *_id = &creature_interaction_effect_display_symbolst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_display_symbolst>(void*,const void*);
  };
}
#endif
