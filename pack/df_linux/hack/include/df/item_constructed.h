/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CONSTRUCTED_H
#define DF_ITEM_CONSTRUCTED_H
#ifndef DF_ITEM_CRAFTED_H
#include "item_crafted.h"
#endif
namespace df {
  struct itemimprovement;
  struct DFHACK_EXPORT item_constructed : item_crafted {
    std::vector<df::itemimprovement* > improvements;
    static virtual_identity _identity;
  protected:
    item_constructed(virtual_identity *_id = &item_constructed::_identity);
    friend void *df::allocator_fn<item_constructed>(void*,const void*);
  };
}
#endif
