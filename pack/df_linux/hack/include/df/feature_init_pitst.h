/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_PITST_H
#define DF_FEATURE_INIT_PITST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_pitst;
  struct DFHACK_EXPORT feature_init_pitst : feature_init {
    df::feature_pitst* feature;
    static virtual_identity _identity;
  protected:
    feature_init_pitst(virtual_identity *_id = &feature_init_pitst::_identity);
    friend void *df::allocator_fn<feature_init_pitst>(void*,const void*);
  };
}
#endif
