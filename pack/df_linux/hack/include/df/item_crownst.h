/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CROWNST_H
#define DF_ITEM_CROWNST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_crownst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_crownst(virtual_identity *_id = &item_crownst::_identity);
    friend void *df::allocator_fn<item_crownst>(void*,const void*);
  };
}
#endif
