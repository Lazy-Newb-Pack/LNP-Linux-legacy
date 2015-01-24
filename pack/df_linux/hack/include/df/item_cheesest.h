/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CHEESEST_H
#define DF_ITEM_CHEESEST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_cheesest : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_cheesest(virtual_identity *_id = &item_cheesest::_identity);
    friend void *df::allocator_fn<item_cheesest>(void*,const void*);
  };
}
#endif
