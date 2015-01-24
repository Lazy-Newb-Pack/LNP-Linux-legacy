/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_SUBREGIONST_H
#define DF_GENERAL_REF_SUBREGIONST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_subregionst : general_ref {
    int32_t region_id;
    static virtual_identity _identity;
  protected:
    general_ref_subregionst(virtual_identity *_id = &general_ref_subregionst::_identity);
    friend void *df::allocator_fn<general_ref_subregionst>(void*,const void*);
  };
}
#endif
