/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_HISTORICAL_FIGUREST_H
#define DF_GENERAL_REF_HISTORICAL_FIGUREST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_historical_figurest : general_ref {
    int32_t hist_figure_id;
    static virtual_identity _identity;
  protected:
    general_ref_historical_figurest(virtual_identity *_id = &general_ref_historical_figurest::_identity);
    friend void *df::allocator_fn<general_ref_historical_figurest>(void*,const void*);
  };
}
#endif
