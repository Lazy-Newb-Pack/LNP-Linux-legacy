/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_createdst : history_event {
    int32_t maker;
    int32_t maker_entity;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_createdst(virtual_identity *_id = &history_event_masterpiece_createdst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_createdst>(void*,const void*);
  };
}
#endif
