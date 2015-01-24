/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_DEEP_SURFACE_PORTALST_H
#define DF_FEATURE_INIT_DEEP_SURFACE_PORTALST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_deep_surface_portalst;
  struct DFHACK_EXPORT feature_init_deep_surface_portalst : feature_init {
    int16_t mat_type;
    int32_t mat_index;
    df::feature_deep_surface_portalst* feature;
    static virtual_identity _identity;
  protected:
    feature_init_deep_surface_portalst(virtual_identity *_id = &feature_init_deep_surface_portalst::_identity);
    friend void *df::allocator_fn<feature_init_deep_surface_portalst>(void*,const void*);
  };
}
#endif
