/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BOOKST_H
#define DF_ITEM_BOOKST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_bookst : item_constructed {
    std::string title;
    static virtual_identity _identity;
  protected:
    item_bookst(virtual_identity *_id = &item_bookst::_identity);
    friend void *df::allocator_fn<item_bookst>(void*,const void*);
  };
}
#endif
