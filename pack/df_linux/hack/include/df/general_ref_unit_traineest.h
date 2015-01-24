/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_TRAINEEST_H
#define DF_GENERAL_REF_UNIT_TRAINEEST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit_traineest : general_ref_unit {
    static virtual_identity _identity;
  protected:
    general_ref_unit_traineest(virtual_identity *_id = &general_ref_unit_traineest::_identity);
    friend void *df::allocator_fn<general_ref_unit_traineest>(void*,const void*);
  };
}
#endif
