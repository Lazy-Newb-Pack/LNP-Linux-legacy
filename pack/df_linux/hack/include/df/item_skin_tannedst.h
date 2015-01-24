/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SKIN_TANNEDST_H
#define DF_ITEM_SKIN_TANNEDST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_skin_tannedst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t unk_80;
    static virtual_identity _identity;
  protected:
    item_skin_tannedst(virtual_identity *_id = &item_skin_tannedst::_identity);
    friend void *df::allocator_fn<item_skin_tannedst>(void*,const void*);
  };
}
#endif
