/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ROLLERSST_H
#define DF_BUILDING_ROLLERSST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
#ifndef DF_SCREW_PUMP_DIRECTION_H
#include "screw_pump_direction.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_rollersst : building_actual {
    df::machine_info machine;
    enum_field<df::screw_pump_direction,int32_t> direction;
    int32_t speed;
    static virtual_identity _identity;
  protected:
    building_rollersst(virtual_identity *_id = &building_rollersst::_identity);
    friend void *df::allocator_fn<building_rollersst>(void*,const void*);
  };
}
#endif
