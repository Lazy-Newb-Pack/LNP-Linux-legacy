/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ENTITY_ACTIONST_H
#define DF_HISTORY_EVENT_ENTITY_ACTIONST_H
#ifndef DF_ENTITY_ACTION_TYPE_H
#include "entity_action_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_entity_actionst : history_event {
    int32_t entity;
    int32_t site;
    int32_t structure;
    df::entity_action_type action;
    static virtual_identity _identity;
  protected:
    history_event_entity_actionst(virtual_identity *_id = &history_event_entity_actionst::_identity);
    friend void *df::allocator_fn<history_event_entity_actionst>(void*,const void*);
  };
}
#endif
