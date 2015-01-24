/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_DEEP_SPECIAL_TUBEST_H
#define DF_FEATURE_DEEP_SPECIAL_TUBEST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_deep_special_tubest : feature {
    static virtual_identity _identity;
  protected:
    feature_deep_special_tubest(virtual_identity *_id = &feature_deep_special_tubest::_identity);
    friend void *df::allocator_fn<feature_deep_special_tubest>(void*,const void*);
  };
}
#endif
