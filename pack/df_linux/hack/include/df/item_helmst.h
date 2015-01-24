/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_HELMST_H
#define DF_ITEM_HELMST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_helmst;
  struct DFHACK_EXPORT item_helmst : item_constructed {
    df::itemdef_helmst* subtype;
    static virtual_identity _identity;
  protected:
    item_helmst(virtual_identity *_id = &item_helmst::_identity);
    friend void *df::allocator_fn<item_helmst>(void*,const void*);
  };
}
#endif
