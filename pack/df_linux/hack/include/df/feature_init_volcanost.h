/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_VOLCANOST_H
#define DF_FEATURE_INIT_VOLCANOST_H
#ifndef DF_FEATURE_INIT_H
#include "feature_init.h"
#endif
namespace df {
  struct feature_volcanost;
  struct DFHACK_EXPORT feature_init_volcanost : feature_init {
    df::feature_volcanost* feature;
    static virtual_identity _identity;
  protected:
    feature_init_volcanost(virtual_identity *_id = &feature_init_volcanost::_identity);
    friend void *df::allocator_fn<feature_init_volcanost>(void*,const void*);
  };
}
#endif
