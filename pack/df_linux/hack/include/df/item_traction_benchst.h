/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TRACTION_BENCHST_H
#define DF_ITEM_TRACTION_BENCHST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_traction_benchst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_traction_benchst(virtual_identity *_id = &item_traction_benchst::_identity);
    friend void *df::allocator_fn<item_traction_benchst>(void*,const void*);
  };
}
#endif
