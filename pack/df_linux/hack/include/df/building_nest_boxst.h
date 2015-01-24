/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_NEST_BOXST_H
#define DF_BUILDING_NEST_BOXST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_nest_boxst : building_actual {
    int32_t claimed_by;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    building_nest_boxst(virtual_identity *_id = &building_nest_boxst::_identity);
    friend void *df::allocator_fn<building_nest_boxst>(void*,const void*);
  };
}
#endif
