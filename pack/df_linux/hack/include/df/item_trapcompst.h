/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TRAPCOMPST_H
#define DF_ITEM_TRAPCOMPST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_trapcompst;
  struct DFHACK_EXPORT item_trapcompst : item_constructed {
    df::itemdef_trapcompst* subtype;
    int32_t sharpness;
    static virtual_identity _identity;
  protected:
    item_trapcompst(virtual_identity *_id = &item_trapcompst::_identity);
    friend void *df::allocator_fn<item_trapcompst>(void*,const void*);
  };
}
#endif
