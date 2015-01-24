/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_WEAPONRACKST_H
#define DF_ITEM_WEAPONRACKST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_weaponrackst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_weaponrackst(virtual_identity *_id = &item_weaponrackst::_identity);
    friend void *df::allocator_fn<item_weaponrackst>(void*,const void*);
  };
}
#endif
