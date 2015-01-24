/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WINDMILLST_H
#define DF_BUILDING_WINDMILLST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_windmillst : building_actual {
    df::machine_info machine;
    int16_t orient_angle;
    int16_t orient_mode;
    int16_t is_working;
    bool visual_rotated;
    int16_t rotate_timer;
    int16_t orient_timer;
    static virtual_identity _identity;
  protected:
    building_windmillst(virtual_identity *_id = &building_windmillst::_identity);
    friend void *df::allocator_fn<building_windmillst>(void*,const void*);
  };
}
#endif
