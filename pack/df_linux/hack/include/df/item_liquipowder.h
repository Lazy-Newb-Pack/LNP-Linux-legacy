/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_LIQUIPOWDER_H
#define DF_ITEM_LIQUIPOWDER_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
#ifndef DF_ITEM_MATSTATE_H
#include "item_matstate.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_liquipowder : item_actual {
    df::item_matstate mat_state;
    int32_t dimension;
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    item_liquipowder(virtual_identity *_id = &item_liquipowder::_identity);
    friend void *df::allocator_fn<item_liquipowder>(void*,const void*);
  };
}
#endif
