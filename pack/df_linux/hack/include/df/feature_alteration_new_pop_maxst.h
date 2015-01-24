/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_ALTERATION_NEW_POP_MAXST_H
#define DF_FEATURE_ALTERATION_NEW_POP_MAXST_H
#ifndef DF_FEATURE_ALTERATION_H
#include "feature_alteration.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_alteration_new_pop_maxst : feature_alteration {
    int32_t anon_1;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    feature_alteration_new_pop_maxst(virtual_identity *_id = &feature_alteration_new_pop_maxst::_identity);
    friend void *df::allocator_fn<feature_alteration_new_pop_maxst>(void*,const void*);
  };
}
#endif
