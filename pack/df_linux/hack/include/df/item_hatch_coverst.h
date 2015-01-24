/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_HATCH_COVERST_H
#define DF_ITEM_HATCH_COVERST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_hatch_coverst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_hatch_coverst(virtual_identity *_id = &item_hatch_coverst::_identity);
    friend void *df::allocator_fn<item_hatch_coverst>(void*,const void*);
  };
}
#endif
