/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BALLISTAPARTSST_H
#define DF_ITEM_BALLISTAPARTSST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_ballistapartsst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_ballistapartsst(virtual_identity *_id = &item_ballistapartsst::_identity);
    friend void *df::allocator_fn<item_ballistapartsst>(void*,const void*);
  };
}
#endif
