/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CHAIRST_H
#define DF_ITEM_CHAIRST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_chairst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_chairst(virtual_identity *_id = &item_chairst::_identity);
    friend void *df::allocator_fn<item_chairst>(void*,const void*);
  };
}
#endif
