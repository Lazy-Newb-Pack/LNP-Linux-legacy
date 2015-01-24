/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_LOCATIONST_H
#define DF_GENERAL_REF_LOCATIONST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_locationst : general_ref {
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    static virtual_identity _identity;
  protected:
    general_ref_locationst(virtual_identity *_id = &general_ref_locationst::_identity);
    friend void *df::allocator_fn<general_ref_locationst>(void*,const void*);
  };
}
#endif
