/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FLOODGATEST_H
#define DF_ITEM_FLOODGATEST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_floodgatest : item_constructed {
    static virtual_identity _identity;
  protected:
    item_floodgatest(virtual_identity *_id = &item_floodgatest::_identity);
    friend void *df::allocator_fn<item_floodgatest>(void*,const void*);
  };
}
#endif
