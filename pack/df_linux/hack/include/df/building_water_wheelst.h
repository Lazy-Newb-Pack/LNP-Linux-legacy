/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WATER_WHEELST_H
#define DF_BUILDING_WATER_WHEELST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_water_wheelst : building_actual {
    df::machine_info machine;
    bool is_vertical;
    bool gives_power;
    static virtual_identity _identity;
  protected:
    building_water_wheelst(virtual_identity *_id = &building_water_wheelst::_identity);
    friend void *df::allocator_fn<building_water_wheelst>(void*,const void*);
  };
}
#endif
