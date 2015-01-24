/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_EARRINGST_H
#define DF_ITEM_EARRINGST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_earringst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_earringst(virtual_identity *_id = &item_earringst::_identity);
    friend void *df::allocator_fn<item_earringst>(void*,const void*);
  };
}
#endif
