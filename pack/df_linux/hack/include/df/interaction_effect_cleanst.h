/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_CLEANST_H
#define DF_INTERACTION_EFFECT_CLEANST_H
#ifndef DF_INTERACTION_EFFECT_H
#include "interaction_effect.h"
#endif
#ifndef DF_SYNDROME_FLAGS_H
#include "syndrome_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect_cleanst : interaction_effect {
    int32_t grime_level;
    df::syndrome_flags syndrome_tag;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_effect_cleanst(virtual_identity *_id = &interaction_effect_cleanst::_identity);
    friend void *df::allocator_fn<interaction_effect_cleanst>(void*,const void*);
  };
}
#endif
