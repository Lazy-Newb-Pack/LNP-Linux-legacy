/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CRUTCHST_H
#define DF_ITEM_CRUTCHST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_crutchst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_crutchst(virtual_identity *_id = &item_crutchst::_identity);
    friend void *df::allocator_fn<item_crutchst>(void*,const void*);
  };
}
#endif
