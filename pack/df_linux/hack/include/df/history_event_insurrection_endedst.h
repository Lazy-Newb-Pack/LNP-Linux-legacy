/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_INSURRECTION_ENDEDST_H
#define DF_HISTORY_EVENT_INSURRECTION_ENDEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_INSURRECTION_OUTCOME_H
#include "insurrection_outcome.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_insurrection_endedst : history_event {
    int32_t target_civ;
    int32_t site;
    df::insurrection_outcome outcome;
    static virtual_identity _identity;
  protected:
    history_event_insurrection_endedst(virtual_identity *_id = &history_event_insurrection_endedst::_identity);
    friend void *df::allocator_fn<history_event_insurrection_endedst>(void*,const void*);
  };
}
#endif
