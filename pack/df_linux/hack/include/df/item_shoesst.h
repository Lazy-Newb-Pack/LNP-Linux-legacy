/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SHOESST_H
#define DF_ITEM_SHOESST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_shoesst;
  struct DFHACK_EXPORT item_shoesst : item_constructed {
    df::itemdef_shoesst* subtype;
    static virtual_identity _identity;
  protected:
    item_shoesst(virtual_identity *_id = &item_shoesst::_identity);
    friend void *df::allocator_fn<item_shoesst>(void*,const void*);
  };
}
#endif
