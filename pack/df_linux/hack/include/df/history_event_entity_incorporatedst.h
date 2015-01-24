/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ENTITY_INCORPORATEDST_H
#define DF_HISTORY_EVENT_ENTITY_INCORPORATEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_entity_incorporatedst : history_event {
    int32_t migrant_entity;
    int32_t join_entity;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_entity_incorporatedst(virtual_identity *_id = &history_event_entity_incorporatedst::_identity);
    friend void *df::allocator_fn<history_event_entity_incorporatedst>(void*,const void*);
  };
}
#endif
