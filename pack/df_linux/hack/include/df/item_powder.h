/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_POWDER_H
#define DF_ITEM_POWDER_H
#ifndef DF_ITEM_LIQUIPOWDER_H
#include "item_liquipowder.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_powder : item_liquipowder {
    static virtual_identity _identity;
  protected:
    item_powder(virtual_identity *_id = &item_powder::_identity);
    friend void *df::allocator_fn<item_powder>(void*,const void*);
  };
}
#endif
