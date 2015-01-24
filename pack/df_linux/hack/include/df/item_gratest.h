/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_GRATEST_H
#define DF_ITEM_GRATEST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_gratest : item_constructed {
    static virtual_identity _identity;
  protected:
    item_gratest(virtual_identity *_id = &item_gratest::_identity);
    friend void *df::allocator_fn<item_gratest>(void*,const void*);
  };
}
#endif
