/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CAGEST_H
#define DF_ITEM_CAGEST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_cagest : item_constructed {
    static virtual_identity _identity;
  protected:
    item_cagest(virtual_identity *_id = &item_cagest::_identity);
    friend void *df::allocator_fn<item_cagest>(void*,const void*);
  };
}
#endif
