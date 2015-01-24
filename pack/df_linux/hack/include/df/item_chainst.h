/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CHAINST_H
#define DF_ITEM_CHAINST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_chainst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_chainst(virtual_identity *_id = &item_chainst::_identity);
    friend void *df::allocator_fn<item_chainst>(void*,const void*);
  };
}
#endif
