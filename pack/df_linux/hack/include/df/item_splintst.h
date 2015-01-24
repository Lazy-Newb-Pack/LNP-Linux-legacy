/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SPLINTST_H
#define DF_ITEM_SPLINTST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_splintst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_splintst(virtual_identity *_id = &item_splintst::_identity);
    friend void *df::allocator_fn<item_splintst>(void*,const void*);
  };
}
#endif
