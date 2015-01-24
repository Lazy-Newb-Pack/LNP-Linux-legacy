/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ANVILST_H
#define DF_ITEM_ANVILST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_anvilst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_anvilst(virtual_identity *_id = &item_anvilst::_identity);
    friend void *df::allocator_fn<item_anvilst>(void*,const void*);
  };
}
#endif
