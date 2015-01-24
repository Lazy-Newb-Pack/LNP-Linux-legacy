/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SCREW_PUMPST_H
#define DF_BUILDING_SCREW_PUMPST_H
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
  struct DFHACK_EXPORT building_screw_pumpst : building_actual {
    df::machine_info machine;
    uint8_t pump_energy; /*!< decreases by 1 every frame. powering or manually pumping maintains near 100 */
    df::screw_pump_direction direction;
    bool pump_manually;
    static virtual_identity _identity;
  protected:
    building_screw_pumpst(virtual_identity *_id = &building_screw_pumpst::_identity);
    friend void *df::allocator_fn<building_screw_pumpst>(void*,const void*);
  };
}
#endif
