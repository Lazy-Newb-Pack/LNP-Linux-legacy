/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CORPSEPIECEST_H
#define DF_ITEM_CORPSEPIECEST_H
#ifndef DF_ITEM_BODY_COMPONENT_H
#include "item_body_component.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_corpsepiecest : item_body_component {
    static virtual_identity _identity;
  protected:
    item_corpsepiecest(virtual_identity *_id = &item_corpsepiecest::_identity);
    friend void *df::allocator_fn<item_corpsepiecest>(void*,const void*);
  };
}
#endif
