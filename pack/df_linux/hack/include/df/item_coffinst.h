/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_COFFINST_H
#define DF_ITEM_COFFINST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_coffinst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_coffinst(virtual_identity *_id = &item_coffinst::_identity);
    friend void *df::allocator_fn<item_coffinst>(void*,const void*);
  };
}
#endif
