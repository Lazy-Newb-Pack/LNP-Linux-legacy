/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ROAD_PAVEDST_H
#define DF_BUILDING_ROAD_PAVEDST_H
#ifndef DF_BUILDING_ROADST_H
#include "building_roadst.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_road_pavedst : building_roadst {
    int32_t material_amount;
    int16_t terrain_purge_timer;
    static virtual_identity _identity;
  protected:
    building_road_pavedst(virtual_identity *_id = &building_road_pavedst::_identity);
    friend void *df::allocator_fn<building_road_pavedst>(void*,const void*);
  };
}
#endif
