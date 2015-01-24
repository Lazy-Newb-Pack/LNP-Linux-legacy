/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_HISTORICAL_EVENTST_H
#define DF_GENERAL_REF_HISTORICAL_EVENTST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_historical_eventst : general_ref {
    int32_t event_id;
    static virtual_identity _identity;
  protected:
    general_ref_historical_eventst(virtual_identity *_id = &general_ref_historical_eventst::_identity);
    friend void *df::allocator_fn<general_ref_historical_eventst>(void*,const void*);
  };
}
#endif
