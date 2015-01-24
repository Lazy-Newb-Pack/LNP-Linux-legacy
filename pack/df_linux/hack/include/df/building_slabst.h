/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SLABST_H
#define DF_BUILDING_SLABST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_slabst : building_actual {
    int16_t anon_1;
    static virtual_identity _identity;
  protected:
    building_slabst(virtual_identity *_id = &building_slabst::_identity);
    friend void *df::allocator_fn<building_slabst>(void*,const void*);
  };
}
#endif
