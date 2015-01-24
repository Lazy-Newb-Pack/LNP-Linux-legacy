/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_PETST_H
#define DF_ITEM_PETST_H
#ifndef DF_ITEM_CRITTER_H
#include "item_critter.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_petst : item_critter {
    int32_t anon_1;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    item_petst(virtual_identity *_id = &item_petst::_identity);
    friend void *df::allocator_fn<item_petst>(void*,const void*);
  };
}
#endif
