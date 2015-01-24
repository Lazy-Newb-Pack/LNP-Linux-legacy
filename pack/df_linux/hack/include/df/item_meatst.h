/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_MEATST_H
#define DF_ITEM_MEATST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_meatst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_meatst(virtual_identity *_id = &item_meatst::_identity);
    friend void *df::allocator_fn<item_meatst>(void*,const void*);
  };
}
#endif
