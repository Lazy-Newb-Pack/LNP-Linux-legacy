/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SEEDSST_H
#define DF_ITEM_SEEDSST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_seedsst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t grow_counter;
    int32_t planting_skill;
    static virtual_identity _identity;
  protected:
    item_seedsst(virtual_identity *_id = &item_seedsst::_identity);
    friend void *df::allocator_fn<item_seedsst>(void*,const void*);
  };
}
#endif
