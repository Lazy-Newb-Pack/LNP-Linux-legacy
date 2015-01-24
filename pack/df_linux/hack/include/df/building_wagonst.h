/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WAGONST_H
#define DF_BUILDING_WAGONST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_wagonst : building_actual {
    static virtual_identity _identity;
  protected:
    building_wagonst(virtual_identity *_id = &building_wagonst::_identity);
    friend void *df::allocator_fn<building_wagonst>(void*,const void*);
  };
}
#endif
