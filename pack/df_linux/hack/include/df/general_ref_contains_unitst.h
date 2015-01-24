/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_CONTAINS_UNITST_H
#define DF_GENERAL_REF_CONTAINS_UNITST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_contains_unitst : general_ref_unit {
    static virtual_identity _identity;
  protected:
    general_ref_contains_unitst(virtual_identity *_id = &general_ref_contains_unitst::_identity);
    friend void *df::allocator_fn<general_ref_contains_unitst>(void*,const void*);
  };
}
#endif
