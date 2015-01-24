/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TOYST_H
#define DF_ITEM_TOYST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_toyst;
  struct DFHACK_EXPORT item_toyst : item_constructed {
    df::itemdef_toyst* subtype;
    static virtual_identity _identity;
  protected:
    item_toyst(virtual_identity *_id = &item_toyst::_identity);
    friend void *df::allocator_fn<item_toyst>(void*,const void*);
  };
}
#endif
