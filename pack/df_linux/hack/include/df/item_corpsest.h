/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CORPSEST_H
#define DF_ITEM_CORPSEST_H
#ifndef DF_ITEM_BODY_COMPONENT_H
#include "item_body_component.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_corpsest : item_body_component {
    static virtual_identity _identity;
  protected:
    item_corpsest(virtual_identity *_id = &item_corpsest::_identity);
    friend void *df::allocator_fn<item_corpsest>(void*,const void*);
  };
}
#endif
