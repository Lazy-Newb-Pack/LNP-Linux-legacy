/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_DRINKST_H
#define DF_ITEM_DRINKST_H
#ifndef DF_ITEM_LIQUID_H
#include "item_liquid.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_drinkst : item_liquid {
    static virtual_identity _identity;
  protected:
    item_drinkst(virtual_identity *_id = &item_drinkst::_identity);
    friend void *df::allocator_fn<item_drinkst>(void*,const void*);
  };
}
#endif
