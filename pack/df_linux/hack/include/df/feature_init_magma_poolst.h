/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_MAGMA_POOLST_H
#define DF_FEATURE_INIT_MAGMA_POOLST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_magma_poolst;
  struct DFHACK_EXPORT feature_init_magma_poolst : feature_init {
    df::feature_magma_poolst* feature;
    static virtual_identity _identity;
  protected:
    feature_init_magma_poolst(virtual_identity *_id = &feature_init_magma_poolst::_identity);
    friend void *df::allocator_fn<feature_init_magma_poolst>(void*,const void*);
  };
}
#endif
