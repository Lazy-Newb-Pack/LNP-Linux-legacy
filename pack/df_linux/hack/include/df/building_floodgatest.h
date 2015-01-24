/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_FLOODGATEST_H
#define DF_BUILDING_FLOODGATEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_GATE_FLAGS_H
#include "gate_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_floodgatest : building_actual {
    df::gate_flags gate_flags;
    int8_t timer;
    static virtual_identity _identity;
  protected:
    building_floodgatest(virtual_identity *_id = &building_floodgatest::_identity);
    friend void *df::allocator_fn<building_floodgatest>(void*,const void*);
  };
}
#endif
