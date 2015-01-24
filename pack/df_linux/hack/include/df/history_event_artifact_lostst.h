/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ARTIFACT_LOSTST_H
#define DF_HISTORY_EVENT_ARTIFACT_LOSTST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_artifact_lostst : history_event {
    int32_t artifact;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_artifact_lostst(virtual_identity *_id = &history_event_artifact_lostst::_identity);
    friend void *df::allocator_fn<history_event_artifact_lostst>(void*,const void*);
  };
}
#endif
