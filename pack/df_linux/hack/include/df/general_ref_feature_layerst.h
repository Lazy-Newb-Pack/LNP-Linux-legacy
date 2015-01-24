/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_FEATURE_LAYERST_H
#define DF_GENERAL_REF_FEATURE_LAYERST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_feature_layerst : general_ref {
    int32_t underground_region_id;
    static virtual_identity _identity;
  protected:
    general_ref_feature_layerst(virtual_identity *_id = &general_ref_feature_layerst::_identity);
    friend void *df::allocator_fn<general_ref_feature_layerst>(void*,const void*);
  };
}
#endif
