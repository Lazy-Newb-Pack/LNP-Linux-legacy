/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_INTERACTIONST_H
#define DF_GENERAL_REF_INTERACTIONST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_interactionst : general_ref {
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    static virtual_identity _identity;
  protected:
    general_ref_interactionst(virtual_identity *_id = &general_ref_interactionst::_identity);
    friend void *df::allocator_fn<general_ref_interactionst>(void*,const void*);
  };
}
#endif
