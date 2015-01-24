/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_AMMOST_H
#define DF_ITEM_AMMOST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_ammost;
  struct DFHACK_EXPORT item_ammost : item_constructed {
    df::itemdef_ammost* subtype;
    int32_t sharpness;
    static virtual_identity _identity;
  protected:
    item_ammost(virtual_identity *_id = &item_ammost::_identity);
    friend void *df::allocator_fn<item_ammost>(void*,const void*);
  };
}
#endif
