/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TABLEST_H
#define DF_ITEM_TABLEST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_tablest : item_constructed {
    static virtual_identity _identity;
  protected:
    item_tablest(virtual_identity *_id = &item_tablest::_identity);
    friend void *df::allocator_fn<item_tablest>(void*,const void*);
  };
}
#endif
