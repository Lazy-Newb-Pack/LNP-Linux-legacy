/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_POWDER_MISCST_H
#define DF_ITEM_POWDER_MISCST_H
#ifndef DF_ITEM_POWDER_H
#include "item_powder.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_powder_miscst : item_powder {
    static virtual_identity _identity;
  protected:
    item_powder_miscst(virtual_identity *_id = &item_powder_miscst::_identity);
    friend void *df::allocator_fn<item_powder_miscst>(void*,const void*);
  };
}
#endif
