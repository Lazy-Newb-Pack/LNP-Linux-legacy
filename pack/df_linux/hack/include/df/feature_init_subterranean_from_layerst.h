/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_SUBTERRANEAN_FROM_LAYERST_H
#define DF_FEATURE_INIT_SUBTERRANEAN_FROM_LAYERST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_subterranean_from_layerst;
  struct DFHACK_EXPORT feature_init_subterranean_from_layerst : feature_init {
    int32_t layer;
    df::feature_subterranean_from_layerst* feature;
    static virtual_identity _identity;
  protected:
    feature_init_subterranean_from_layerst(virtual_identity *_id = &feature_init_subterranean_from_layerst::_identity);
    friend void *df::allocator_fn<feature_init_subterranean_from_layerst>(void*,const void*);
  };
}
#endif
