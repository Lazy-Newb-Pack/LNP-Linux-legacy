/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ARMORST_H
#define DF_ITEM_ARMORST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_armorst;
  struct DFHACK_EXPORT item_armorst : item_constructed {
    df::itemdef_armorst* subtype;
    static virtual_identity _identity;
  protected:
    item_armorst(virtual_identity *_id = &item_armorst::_identity);
    friend void *df::allocator_fn<item_armorst>(void*,const void*);
  };
}
#endif
