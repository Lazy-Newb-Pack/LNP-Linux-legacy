/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_GEMST_H
#define DF_ITEM_GEMST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_gemst : item_constructed {
    int32_t shape;
    static virtual_identity _identity;
  protected:
    item_gemst(virtual_identity *_id = &item_gemst::_identity);
    friend void *df::allocator_fn<item_gemst>(void*,const void*);
  };
}
#endif
