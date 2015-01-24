/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BOXST_H
#define DF_ITEM_BOXST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_boxst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_boxst(virtual_identity *_id = &item_boxst::_identity);
    friend void *df::allocator_fn<item_boxst>(void*,const void*);
  };
}
#endif
