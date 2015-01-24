/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CATAPULTPARTSST_H
#define DF_ITEM_CATAPULTPARTSST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_catapultpartsst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_catapultpartsst(virtual_identity *_id = &item_catapultpartsst::_identity);
    friend void *df::allocator_fn<item_catapultpartsst>(void*,const void*);
  };
}
#endif
