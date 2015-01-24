/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ROAD_DIRTST_H
#define DF_BUILDING_ROAD_DIRTST_H
#ifndef DF_BUILDING_ROADST_H
#include "building_roadst.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_road_dirtst : building_roadst {
    int32_t material_amount;
    static virtual_identity _identity;
  protected:
    building_road_dirtst(virtual_identity *_id = &building_road_dirtst::_identity);
    friend void *df::allocator_fn<building_road_dirtst>(void*,const void*);
  };
}
#endif
