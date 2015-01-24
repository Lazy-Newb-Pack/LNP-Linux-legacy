/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_WINDOWST_H
#define DF_ITEM_WINDOWST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_windowst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_windowst(virtual_identity *_id = &item_windowst::_identity);
    friend void *df::allocator_fn<item_windowst>(void*,const void*);
  };
}
#endif
