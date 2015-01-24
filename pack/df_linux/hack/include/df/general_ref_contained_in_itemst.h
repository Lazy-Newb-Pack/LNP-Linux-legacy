/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_CONTAINED_IN_ITEMST_H
#define DF_GENERAL_REF_CONTAINED_IN_ITEMST_H
#ifndef DF_GENERAL_REF_ITEM_H
#include "general_ref_item.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_contained_in_itemst : general_ref_item {
    static virtual_identity _identity;
  protected:
    general_ref_contained_in_itemst(virtual_identity *_id = &general_ref_contained_in_itemst::_identity);
    friend void *df::allocator_fn<general_ref_contained_in_itemst>(void*,const void*);
  };
}
#endif
