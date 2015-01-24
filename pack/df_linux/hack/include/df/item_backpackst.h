/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BACKPACKST_H
#define DF_ITEM_BACKPACKST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_backpackst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_backpackst(virtual_identity *_id = &item_backpackst::_identity);
    friend void *df::allocator_fn<item_backpackst>(void*,const void*);
  };
}
#endif
