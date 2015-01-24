/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FISH_RAWST_H
#define DF_ITEM_FISH_RAWST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_fish_rawst : item_actual {
    int16_t race;
    int16_t caste;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_fish_rawst(virtual_identity *_id = &item_fish_rawst::_identity);
    friend void *df::allocator_fn<item_fish_rawst>(void*,const void*);
  };
}
#endif
