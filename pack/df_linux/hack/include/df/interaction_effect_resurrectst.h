/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_RESURRECTST_H
#define DF_INTERACTION_EFFECT_RESURRECTST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_resurrectst : interaction_effect {
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    static virtual_identity _identity;
  protected:
    interaction_effect_resurrectst(virtual_identity *_id = &interaction_effect_resurrectst::_identity);
    friend void *df::allocator_fn<interaction_effect_resurrectst>(void*,const void*);
  };
}
#endif
