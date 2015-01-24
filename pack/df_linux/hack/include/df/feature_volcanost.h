/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_VOLCANOST_H
#define DF_FEATURE_VOLCANOST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_volcanost : feature {
    int32_t magma_fill_z;
    static virtual_identity _identity;
  protected:
    feature_volcanost(virtual_identity *_id = &feature_volcanost::_identity);
    friend void *df::allocator_fn<feature_volcanost>(void*,const void*);
  };
}
#endif
