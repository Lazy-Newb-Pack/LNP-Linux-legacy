/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_BARS_VERTICALST_H
#define DF_BUILDING_BARS_VERTICALST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_GATE_FLAGS_H
#include "gate_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_bars_verticalst : building_actual {
    df::gate_flags gate_flags;
    int8_t timer;
    static virtual_identity _identity;
  protected:
    building_bars_verticalst(virtual_identity *_id = &building_bars_verticalst::_identity);
    friend void *df::allocator_fn<building_bars_verticalst>(void*,const void*);
  };
}
#endif
