/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BALLISTAARROWHEADST_H
#define DF_ITEM_BALLISTAARROWHEADST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_ballistaarrowheadst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t sharpness; /*!< v0.40.15 */
    static virtual_identity _identity;
  protected:
    item_ballistaarrowheadst(virtual_identity *_id = &item_ballistaarrowheadst::_identity);
    friend void *df::allocator_fn<item_ballistaarrowheadst>(void*,const void*);
  };
}
#endif
