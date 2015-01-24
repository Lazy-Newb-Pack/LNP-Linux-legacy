/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_COINBATCH_H
#define DF_GENERAL_REF_COINBATCH_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_coinbatch : general_ref {
    int32_t batch;
    static virtual_identity _identity;
  protected:
    general_ref_coinbatch(virtual_identity *_id = &general_ref_coinbatch::_identity);
    friend void *df::allocator_fn<general_ref_coinbatch>(void*,const void*);
  };
}
#endif
