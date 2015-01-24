/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_WEAPONST_H
#define DF_ITEM_WEAPONST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_weaponst;
  struct DFHACK_EXPORT item_weaponst : item_constructed {
    df::itemdef_weaponst* subtype;
    int32_t sharpness;
    static virtual_identity _identity;
  protected:
    item_weaponst(virtual_identity *_id = &item_weaponst::_identity);
    friend void *df::allocator_fn<item_weaponst>(void*,const void*);
  };
}
#endif
