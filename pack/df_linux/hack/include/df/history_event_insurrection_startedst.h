/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_INSURRECTION_STARTEDST_H
#define DF_HISTORY_EVENT_INSURRECTION_STARTEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_insurrection_startedst : history_event {
    int32_t target_civ;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_insurrection_startedst(virtual_identity *_id = &history_event_insurrection_startedst::_identity);
    friend void *df::allocator_fn<history_event_insurrection_startedst>(void*,const void*);
  };
}
#endif
