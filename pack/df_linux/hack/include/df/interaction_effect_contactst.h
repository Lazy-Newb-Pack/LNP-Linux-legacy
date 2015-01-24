/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_CONTACTST_H
#define DF_INTERACTION_EFFECT_CONTACTST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_contactst : interaction_effect {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_effect_contactst(virtual_identity *_id = &interaction_effect_contactst::_identity);
    friend void *df::allocator_fn<interaction_effect_contactst>(void*,const void*);
  };
}
#endif
