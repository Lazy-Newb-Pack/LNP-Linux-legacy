/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_REMAINSST_H
#define DF_ITEM_REMAINSST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_remainsst : item_actual {
    int16_t race;
    int16_t caste;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_remainsst(virtual_identity *_id = &item_remainsst::_identity);
    friend void *df::allocator_fn<item_remainsst>(void*,const void*);
  };
}
#endif
