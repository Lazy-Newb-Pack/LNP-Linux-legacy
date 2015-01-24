/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_PITST_H
#define DF_FEATURE_PITST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_pitst : feature {
    static virtual_identity _identity;
  protected:
    feature_pitst(virtual_identity *_id = &feature_pitst::_identity);
    friend void *df::allocator_fn<feature_pitst>(void*,const void*);
  };
}
#endif
