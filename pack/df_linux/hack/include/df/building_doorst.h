/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DOORST_H
#define DF_BUILDING_DOORST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_DOOR_FLAGS_H
#include "door_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_doorst : building_actual {
    df::door_flags door_flags;
    int16_t close_timer;
    static virtual_identity _identity;
  protected:
    building_doorst(virtual_identity *_id = &building_doorst::_identity);
    friend void *df::allocator_fn<building_doorst>(void*,const void*);
  };
}
#endif
