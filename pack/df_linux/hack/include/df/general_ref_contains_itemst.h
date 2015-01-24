/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_CONTAINS_ITEMST_H
#define DF_GENERAL_REF_CONTAINS_ITEMST_H
#ifndef DF_GENERAL_REF_ITEM_H
#include "general_ref_item.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_contains_itemst : general_ref_item {
    static virtual_identity _identity;
  protected:
    general_ref_contains_itemst(virtual_identity *_id = &general_ref_contains_itemst::_identity);
    friend void *df::allocator_fn<general_ref_contains_itemst>(void*,const void*);
  };
}
#endif
