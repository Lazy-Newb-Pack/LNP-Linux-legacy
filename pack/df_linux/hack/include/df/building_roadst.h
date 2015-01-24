/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ROADST_H
#define DF_BUILDING_ROADST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_roadst : building_actual {
    static virtual_identity _identity;
  protected:
    building_roadst(virtual_identity *_id = &building_roadst::_identity);
    friend void *df::allocator_fn<building_roadst>(void*,const void*);
  };
}
#endif
