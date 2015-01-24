/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_THREADST_H
#define DF_ITEM_THREADST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_threadst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int16_t dye_mat_type;
    int32_t dye_mat_index;
    int32_t unk_88;
    int32_t unk_8c;
    int16_t dye_quality;
    int16_t unk_92;
    int32_t unk_94;
    int8_t unk_98;
    int32_t dimension;
    static virtual_identity _identity;
  protected:
    item_threadst(virtual_identity *_id = &item_threadst::_identity);
    friend void *df::allocator_fn<item_threadst>(void*,const void*);
  };
}
#endif
