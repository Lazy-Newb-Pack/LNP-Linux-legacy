/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CREATE_ENTITY_POSITIONST_H
#define DF_HISTORY_EVENT_CREATE_ENTITY_POSITIONST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_create_entity_positionst : history_event {
    int32_t histfig;
    int32_t civ;
    int32_t site_civ;
    int32_t position;
    int16_t reason;
    static virtual_identity _identity;
  protected:
    history_event_create_entity_positionst(virtual_identity *_id = &history_event_create_entity_positionst::_identity);
    friend void *df::allocator_fn<history_event_create_entity_positionst>(void*,const void*);
  };
}
#endif
