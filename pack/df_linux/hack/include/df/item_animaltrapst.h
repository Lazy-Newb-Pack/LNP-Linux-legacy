/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ANIMALTRAPST_H
#define DF_ITEM_ANIMALTRAPST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_animaltrapst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_animaltrapst(virtual_identity *_id = &item_animaltrapst::_identity);
    friend void *df::allocator_fn<item_animaltrapst>(void*,const void*);
  };
}
#endif
