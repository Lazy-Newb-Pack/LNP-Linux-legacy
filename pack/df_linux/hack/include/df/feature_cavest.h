/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_CAVEST_H
#define DF_FEATURE_CAVEST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_cavest : feature {
    static virtual_identity _identity;
  protected:
    feature_cavest(virtual_identity *_id = &feature_cavest::_identity);
    friend void *df::allocator_fn<feature_cavest>(void*,const void*);
  };
}
#endif
