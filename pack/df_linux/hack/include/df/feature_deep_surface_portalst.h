/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_DEEP_SURFACE_PORTALST_H
#define DF_FEATURE_DEEP_SURFACE_PORTALST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_deep_surface_portalst : feature {
    static virtual_identity _identity;
  protected:
    feature_deep_surface_portalst(virtual_identity *_id = &feature_deep_surface_portalst::_identity);
    friend void *df::allocator_fn<feature_deep_surface_portalst>(void*,const void*);
  };
}
#endif
