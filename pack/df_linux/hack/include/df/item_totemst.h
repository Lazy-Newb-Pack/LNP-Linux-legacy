/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TOTEMST_H
#define DF_ITEM_TOTEMST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_totemst : item_constructed {
    int16_t unk_a0;
    int16_t unk_a2;
    int16_t unk_a4;
    static virtual_identity _identity;
  protected:
    item_totemst(virtual_identity *_id = &item_totemst::_identity);
    friend void *df::allocator_fn<item_totemst>(void*,const void*);
  };
}
#endif
