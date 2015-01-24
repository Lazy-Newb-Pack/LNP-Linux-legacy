/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ARTIFACT_DROPPEDST_H
#define DF_HISTORY_EVENT_ARTIFACT_DROPPEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_artifact_droppedst : history_event {
    int32_t artifact;
    int32_t unit;
    int32_t histfig;
    int32_t site;
    BitArray<int> flags2;
    static virtual_identity _identity;
  protected:
    history_event_artifact_droppedst(virtual_identity *_id = &history_event_artifact_droppedst::_identity);
    friend void *df::allocator_fn<history_event_artifact_droppedst>(void*,const void*);
  };
}
#endif
