/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BEDST_H
#define DF_ITEM_BEDST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_bedst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_bedst(virtual_identity *_id = &item_bedst::_identity);
    friend void *df::allocator_fn<item_bedst>(void*,const void*);
  };
}
#endif
