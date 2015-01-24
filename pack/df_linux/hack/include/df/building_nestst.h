/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_NESTST_H
#define DF_BUILDING_NESTST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_nestst : building_actual {
    static virtual_identity _identity;
  protected:
    building_nestst(virtual_identity *_id = &building_nestst::_identity);
    friend void *df::allocator_fn<building_nestst>(void*,const void*);
  };
}
#endif
