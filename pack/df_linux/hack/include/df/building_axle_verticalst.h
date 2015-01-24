/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_AXLE_VERTICALST_H
#define DF_BUILDING_AXLE_VERTICALST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_axle_verticalst : building_actual {
    df::machine_info machine;
    static virtual_identity _identity;
  protected:
    building_axle_verticalst(virtual_identity *_id = &building_axle_verticalst::_identity);
    friend void *df::allocator_fn<building_axle_verticalst>(void*,const void*);
  };
}
#endif
