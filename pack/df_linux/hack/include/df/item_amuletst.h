/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_AMULETST_H
#define DF_ITEM_AMULETST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_amuletst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_amuletst(virtual_identity *_id = &item_amuletst::_identity);
    friend void *df::allocator_fn<item_amuletst>(void*,const void*);
  };
}
#endif
