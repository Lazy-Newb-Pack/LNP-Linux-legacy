/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_MILLSTONEST_H
#define DF_ITEM_MILLSTONEST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_millstonest : item_constructed {
    static virtual_identity _identity;
  protected:
    item_millstonest(virtual_identity *_id = &item_millstonest::_identity);
    friend void *df::allocator_fn<item_millstonest>(void*,const void*);
  };
}
#endif
