/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_CAVEST_H
#define DF_FEATURE_INIT_CAVEST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_cavest;
  struct DFHACK_EXPORT feature_init_cavest : feature_init {
    df::feature_cavest* feature;
    static virtual_identity _identity;
  protected:
    feature_init_cavest(virtual_identity *_id = &feature_init_cavest::_identity);
    friend void *df::allocator_fn<feature_init_cavest>(void*,const void*);
  };
}
#endif
