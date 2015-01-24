/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_BEATEEST_H
#define DF_GENERAL_REF_UNIT_BEATEEST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit_beateest : general_ref_unit {
    static virtual_identity _identity;
  protected:
    general_ref_unit_beateest(virtual_identity *_id = &general_ref_unit_beateest::_identity);
    friend void *df::allocator_fn<general_ref_unit_beateest>(void*,const void*);
  };
}
#endif
