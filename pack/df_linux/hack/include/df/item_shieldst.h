/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SHIELDST_H
#define DF_ITEM_SHIELDST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_shieldst;
  struct DFHACK_EXPORT item_shieldst : item_constructed {
    df::itemdef_shieldst* subtype;
    static virtual_identity _identity;
  protected:
    item_shieldst(virtual_identity *_id = &item_shieldst::_identity);
    friend void *df::allocator_fn<item_shieldst>(void*,const void*);
  };
}
#endif
