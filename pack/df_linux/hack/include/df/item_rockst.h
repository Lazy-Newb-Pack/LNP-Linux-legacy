/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ROCKST_H
#define DF_ITEM_ROCKST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_rockst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t sharpness;
    int32_t unk_84;
    static virtual_identity _identity;
  protected:
    item_rockst(virtual_identity *_id = &item_rockst::_identity);
    friend void *df::allocator_fn<item_rockst>(void*,const void*);
  };
}
#endif
