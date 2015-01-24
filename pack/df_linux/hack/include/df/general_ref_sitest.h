/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_SITEST_H
#define DF_GENERAL_REF_SITEST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_sitest : general_ref {
    int32_t site_id;
    static virtual_identity _identity;
  protected:
    general_ref_sitest(virtual_identity *_id = &general_ref_sitest::_identity);
    friend void *df::allocator_fn<general_ref_sitest>(void*,const void*);
  };
}
#endif
