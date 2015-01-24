/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ARMORSTANDST_H
#define DF_ITEM_ARMORSTANDST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_armorstandst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_armorstandst(virtual_identity *_id = &item_armorstandst::_identity);
    friend void *df::allocator_fn<item_armorstandst>(void*,const void*);
  };
}
#endif
