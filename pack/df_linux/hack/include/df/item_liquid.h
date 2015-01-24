/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_LIQUID_H
#define DF_ITEM_LIQUID_H
#ifndef DF_ITEM_LIQUIPOWDER_H
#include "item_liquipowder.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_liquid : item_liquipowder {
    static virtual_identity _identity;
  protected:
    item_liquid(virtual_identity *_id = &item_liquid::_identity);
    friend void *df::allocator_fn<item_liquid>(void*,const void*);
  };
}
#endif
