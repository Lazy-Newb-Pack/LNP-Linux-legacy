/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ITEM_H
#define DF_GENERAL_REF_ITEM_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_item : general_ref {
    int32_t item_id;
    static virtual_identity _identity;
  protected:
    general_ref_item(virtual_identity *_id = &general_ref_item::_identity);
    friend void *df::allocator_fn<general_ref_item>(void*,const void*);
  };
}
#endif
