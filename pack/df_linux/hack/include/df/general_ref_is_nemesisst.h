/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_IS_NEMESISST_H
#define DF_GENERAL_REF_IS_NEMESISST_H
#ifndef DF_GENERAL_REF_NEMESIS_H
#include "general_ref_nemesis.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_is_nemesisst : general_ref_nemesis {
    static virtual_identity _identity;
  protected:
    general_ref_is_nemesisst(virtual_identity *_id = &general_ref_is_nemesisst::_identity);
    friend void *df::allocator_fn<general_ref_is_nemesisst>(void*,const void*);
  };
}
#endif
