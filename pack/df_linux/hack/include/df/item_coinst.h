/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_COINST_H
#define DF_ITEM_COINST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_coinst : item_constructed {
    int16_t coin_batch;
    static virtual_identity _identity;
  protected:
    item_coinst(virtual_identity *_id = &item_coinst::_identity);
    friend void *df::allocator_fn<item_coinst>(void*,const void*);
  };
}
#endif
