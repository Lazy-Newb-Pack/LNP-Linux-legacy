/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_DISPLAY_NAMEST_H
#define DF_CREATURE_INTERACTION_EFFECT_DISPLAY_NAMEST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_display_namest : creature_interaction_effect {
    std::string name;
    std::string name_plural;
    std::string name_adj;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_display_namest(virtual_identity *_id = &creature_interaction_effect_display_namest::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_display_namest>(void*,const void*);
  };
}
#endif
