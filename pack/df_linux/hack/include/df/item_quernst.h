/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_QUERNST_H
#define DF_ITEM_QUERNST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_quernst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_quernst(virtual_identity *_id = &item_quernst::_identity);
    friend void *df::allocator_fn<item_quernst>(void*,const void*);
  };
}
#endif
