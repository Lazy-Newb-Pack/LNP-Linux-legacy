/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_AXLE_HORIZONTALST_H
#define DF_BUILDING_AXLE_HORIZONTALST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_axle_horizontalst : building_actual {
    df::machine_info machine;
    bool is_vertical;
    static virtual_identity _identity;
  protected:
    building_axle_horizontalst(virtual_identity *_id = &building_axle_horizontalst::_identity);
    friend void *df::allocator_fn<building_axle_horizontalst>(void*,const void*);
  };
}
#endif
