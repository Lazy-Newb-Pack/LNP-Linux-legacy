/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_DEEP_SPECIAL_TUBEST_H
#define DF_FEATURE_INIT_DEEP_SPECIAL_TUBEST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_deep_special_tubest;
  struct DFHACK_EXPORT feature_init_deep_special_tubest : feature_init {
    int16_t mat_type;
    int32_t mat_index;
    df::feature_deep_special_tubest* feature;
    static virtual_identity _identity;
  protected:
    feature_init_deep_special_tubest(virtual_identity *_id = &feature_init_deep_special_tubest::_identity);
    friend void *df::allocator_fn<feature_init_deep_special_tubest>(void*,const void*);
  };
}
#endif
