/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_LIQUID_MISCST_H
#define DF_ITEM_LIQUID_MISCST_H
#ifndef DF_ITEM_LIQUID_H
#include "item_liquid.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_liquid_miscst : item_liquid {
    int32_t unk_88;
    static virtual_identity _identity;
  protected:
    item_liquid_miscst(virtual_identity *_id = &item_liquid_miscst::_identity);
    friend void *df::allocator_fn<item_liquid_miscst>(void*,const void*);
  };
}
#endif
