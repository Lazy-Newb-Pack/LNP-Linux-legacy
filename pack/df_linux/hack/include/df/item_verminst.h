/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_VERMINST_H
#define DF_ITEM_VERMINST_H
#ifndef DF_ITEM_CRITTER_H
#include "item_critter.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_verminst : item_critter {
    static virtual_identity _identity;
  protected:
    item_verminst(virtual_identity *_id = &item_verminst::_identity);
    friend void *df::allocator_fn<item_verminst>(void*,const void*);
  };
}
#endif
