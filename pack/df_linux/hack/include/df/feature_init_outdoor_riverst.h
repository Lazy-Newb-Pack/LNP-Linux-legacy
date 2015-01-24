/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_OUTDOOR_RIVERST_H
#define DF_FEATURE_INIT_OUTDOOR_RIVERST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_outdoor_riverst;
  struct DFHACK_EXPORT feature_init_outdoor_riverst : feature_init {
    df::feature_outdoor_riverst* feature;
    static virtual_identity _identity;
  protected:
    feature_init_outdoor_riverst(virtual_identity *_id = &feature_init_outdoor_riverst::_identity);
    friend void *df::allocator_fn<feature_init_outdoor_riverst>(void*,const void*);
  };
}
#endif
