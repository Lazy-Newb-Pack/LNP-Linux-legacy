/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SCEPTERST_H
#define DF_ITEM_SCEPTERST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_scepterst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_scepterst(virtual_identity *_id = &item_scepterst::_identity);
    friend void *df::allocator_fn<item_scepterst>(void*,const void*);
  };
}
#endif
