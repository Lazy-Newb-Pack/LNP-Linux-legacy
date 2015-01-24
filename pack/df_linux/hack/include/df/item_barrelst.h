/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BARRELST_H
#define DF_ITEM_BARRELST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
#ifndef DF_ITEM_STOCKPILE_REF_H
#include "item_stockpile_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_barrelst : item_constructed {
    df::item_stockpile_ref stockpile;
    static virtual_identity _identity;
  protected:
    item_barrelst(virtual_identity *_id = &item_barrelst::_identity);
    friend void *df::allocator_fn<item_barrelst>(void*,const void*);
  };
}
#endif
