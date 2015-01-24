/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_SLAUGHTEREEST_H
#define DF_GENERAL_REF_UNIT_SLAUGHTEREEST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit_slaughtereest : general_ref_unit {
    static virtual_identity _identity;
  protected:
    general_ref_unit_slaughtereest(virtual_identity *_id = &general_ref_unit_slaughtereest::_identity);
    friend void *df::allocator_fn<general_ref_unit_slaughtereest>(void*,const void*);
  };
}
#endif
