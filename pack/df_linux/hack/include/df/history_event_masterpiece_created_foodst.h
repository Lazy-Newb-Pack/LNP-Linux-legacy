/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_FOODST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_FOODST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_foodst : history_event_masterpiece_createdst {
    int32_t unk1;
    int16_t item_subtype;
    int32_t item_id;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_foodst(virtual_identity *_id = &history_event_masterpiece_created_foodst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_foodst>(void*,const void*);
  };
}
#endif
