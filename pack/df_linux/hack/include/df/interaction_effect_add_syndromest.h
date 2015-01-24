/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_ADD_SYNDROMEST_H
#define DF_INTERACTION_EFFECT_ADD_SYNDROMEST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_add_syndromest : interaction_effect {
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    static virtual_identity _identity;
  protected:
    interaction_effect_add_syndromest(virtual_identity *_id = &interaction_effect_add_syndromest::_identity);
    friend void *df::allocator_fn<interaction_effect_add_syndromest>(void*,const void*);
  };
}
#endif
