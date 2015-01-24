/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_PANTSST_H
#define DF_ITEM_PANTSST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_pantsst;
  struct DFHACK_EXPORT item_pantsst : item_constructed {
    df::itemdef_pantsst* subtype;
    static virtual_identity _identity;
  protected:
    item_pantsst(virtual_identity *_id = &item_pantsst::_identity);
    friend void *df::allocator_fn<item_pantsst>(void*,const void*);
  };
}
#endif
