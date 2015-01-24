/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SMALLGEMST_H
#define DF_ITEM_SMALLGEMST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_smallgemst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t shape;
    static virtual_identity _identity;
  protected:
    item_smallgemst(virtual_identity *_id = &item_smallgemst::_identity);
    friend void *df::allocator_fn<item_smallgemst>(void*,const void*);
  };
}
#endif
