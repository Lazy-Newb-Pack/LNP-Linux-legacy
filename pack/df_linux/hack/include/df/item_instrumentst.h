/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_INSTRUMENTST_H
#define DF_ITEM_INSTRUMENTST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_instrumentst;
  struct DFHACK_EXPORT item_instrumentst : item_constructed {
    df::itemdef_instrumentst* subtype;
    static virtual_identity _identity;
  protected:
    item_instrumentst(virtual_identity *_id = &item_instrumentst::_identity);
    friend void *df::allocator_fn<item_instrumentst>(void*,const void*);
  };
}
#endif
