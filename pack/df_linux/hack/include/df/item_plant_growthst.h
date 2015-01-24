/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_PLANT_GROWTHST_H
#define DF_ITEM_PLANT_GROWTHST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_plant_growthst : item_actual {
    int16_t subtype;
    int32_t anon_1;
    int16_t mat_type;
    int32_t mat_index;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_plant_growthst(virtual_identity *_id = &item_plant_growthst::_identity);
    friend void *df::allocator_fn<item_plant_growthst>(void*,const void*);
  };
}
#endif
