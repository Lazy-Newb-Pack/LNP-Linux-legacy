/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ENTITY_RAZED_BUILDINGST_H
#define DF_HISTORY_EVENT_ENTITY_RAZED_BUILDINGST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_entity_razed_buildingst : history_event {
    int32_t civ;
    int32_t site;
    int32_t structure;
    static virtual_identity _identity;
  protected:
    history_event_entity_razed_buildingst(virtual_identity *_id = &history_event_entity_razed_buildingst::_identity);
    friend void *df::allocator_fn<history_event_entity_razed_buildingst>(void*,const void*);
  };
}
#endif
