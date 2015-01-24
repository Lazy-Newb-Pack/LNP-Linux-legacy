/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BLOCKSST_H
#define DF_ITEM_BLOCKSST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_blocksst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    item_blocksst(virtual_identity *_id = &item_blocksst::_identity);
    friend void *df::allocator_fn<item_blocksst>(void*,const void*);
  };
}
#endif
