/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_OUTDOOR_RIVERST_H
#define DF_FEATURE_OUTDOOR_RIVERST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_outdoor_riverst : feature {
    static virtual_identity _identity;
  protected:
    feature_outdoor_riverst(virtual_identity *_id = &feature_outdoor_riverst::_identity);
    friend void *df::allocator_fn<feature_outdoor_riverst>(void*,const void*);
  };
}
#endif
