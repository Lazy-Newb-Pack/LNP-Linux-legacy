/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_FARMPLOTST_H
#define DF_BUILDING_FARMPLOTST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_farmplotst : building_actual {
    int16_t plant_id[4];
    int32_t material_amount;
    int32_t seasonal_fertilize;
    int8_t anon_1;
    int32_t current_fertilization;
    int32_t max_fertilization;
    int16_t terrain_purge_timer;
    static virtual_identity _identity;
  protected:
    building_farmplotst(virtual_identity *_id = &building_farmplotst::_identity);
    friend void *df::allocator_fn<building_farmplotst>(void*,const void*);
  };
}
#endif
