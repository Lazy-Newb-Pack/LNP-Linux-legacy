/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_RINGST_H
#define DF_ITEM_RINGST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_ringst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_ringst(virtual_identity *_id = &item_ringst::_identity);
    friend void *df::allocator_fn<item_ringst>(void*,const void*);
  };
}
#endif
