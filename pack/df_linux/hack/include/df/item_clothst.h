/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CLOTHST_H
#define DF_ITEM_CLOTHST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_clothst : item_constructed {
    int32_t dimension;
    static virtual_identity _identity;
  protected:
    item_clothst(virtual_identity *_id = &item_clothst::_identity);
    friend void *df::allocator_fn<item_clothst>(void*,const void*);
  };
}
#endif
