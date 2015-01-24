/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_WOODST_H
#define DF_ITEM_WOODST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_woodst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    item_woodst(virtual_identity *_id = &item_woodst::_identity);
    friend void *df::allocator_fn<item_woodst>(void*,const void*);
  };
}
#endif
