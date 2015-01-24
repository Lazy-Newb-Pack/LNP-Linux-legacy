/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FLASKST_H
#define DF_ITEM_FLASKST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_flaskst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_flaskst(virtual_identity *_id = &item_flaskst::_identity);
    friend void *df::allocator_fn<item_flaskst>(void*,const void*);
  };
}
#endif
