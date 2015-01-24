/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_HATCHST_H
#define DF_BUILDING_HATCHST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_DOOR_FLAGS_H
#include "door_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_hatchst : building_actual {
    df::door_flags door_flags;
    int16_t close_timer;
    static virtual_identity _identity;
  protected:
    building_hatchst(virtual_identity *_id = &building_hatchst::_identity);
    friend void *df::allocator_fn<building_hatchst>(void*,const void*);
  };
}
#endif
