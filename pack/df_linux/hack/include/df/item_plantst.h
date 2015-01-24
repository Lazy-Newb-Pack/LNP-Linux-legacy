/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_PLANTST_H
#define DF_ITEM_PLANTST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_plantst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_plantst(virtual_identity *_id = &item_plantst::_identity);
    friend void *df::allocator_fn<item_plantst>(void*,const void*);
  };
}
#endif
