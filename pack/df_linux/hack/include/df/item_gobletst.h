/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_GOBLETST_H
#define DF_ITEM_GOBLETST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_gobletst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_gobletst(virtual_identity *_id = &item_gobletst::_identity);
    friend void *df::allocator_fn<item_gobletst>(void*,const void*);
  };
}
#endif
