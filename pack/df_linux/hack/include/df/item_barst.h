/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BARST_H
#define DF_ITEM_BARST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_barst : item_actual {
    int16_t subtype;
    int16_t mat_type;
    int32_t mat_index;
    int32_t dimension;
    static virtual_identity _identity;
  protected:
    item_barst(virtual_identity *_id = &item_barst::_identity);
    friend void *df::allocator_fn<item_barst>(void*,const void*);
  };
}
#endif
