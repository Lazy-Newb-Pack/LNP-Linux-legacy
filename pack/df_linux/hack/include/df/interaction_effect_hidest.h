/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_HIDEST_H
#define DF_INTERACTION_EFFECT_HIDEST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_hidest : interaction_effect {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_effect_hidest(virtual_identity *_id = &interaction_effect_hidest::_identity);
    friend void *df::allocator_fn<interaction_effect_hidest>(void*,const void*);
  };
}
#endif
