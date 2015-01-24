/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_MAGMA_POOLST_H
#define DF_FEATURE_MAGMA_POOLST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_magma_poolst : feature {
    int32_t magma_fill_z;
    static virtual_identity _identity;
  protected:
    feature_magma_poolst(virtual_identity *_id = &feature_magma_poolst::_identity);
    friend void *df::allocator_fn<feature_magma_poolst>(void*,const void*);
  };
}
#endif
