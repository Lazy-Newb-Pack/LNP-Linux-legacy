/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BUCKETST_H
#define DF_ITEM_BUCKETST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_bucketst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_bucketst(virtual_identity *_id = &item_bucketst::_identity);
    friend void *df::allocator_fn<item_bucketst>(void*,const void*);
  };
}
#endif
