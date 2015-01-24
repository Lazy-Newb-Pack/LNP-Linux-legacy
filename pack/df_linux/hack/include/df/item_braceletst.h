/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BRACELETST_H
#define DF_ITEM_BRACELETST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_braceletst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_braceletst(virtual_identity *_id = &item_braceletst::_identity);
    friend void *df::allocator_fn<item_braceletst>(void*,const void*);
  };
}
#endif
