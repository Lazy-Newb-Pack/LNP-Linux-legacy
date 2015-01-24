/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_GLOVESST_H
#define DF_ITEM_GLOVESST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_glovesst;
  struct DFHACK_EXPORT item_glovesst : item_constructed {
    df::itemdef_glovesst* subtype;
    BitArray<int> handedness; /*!< 1 right, 2 left */
    static virtual_identity _identity;
  protected:
    item_glovesst(virtual_identity *_id = &item_glovesst::_identity);
    friend void *df::allocator_fn<item_glovesst>(void*,const void*);
  };
}
#endif
