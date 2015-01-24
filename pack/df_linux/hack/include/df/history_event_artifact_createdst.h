/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ARTIFACT_CREATEDST_H
#define DF_HISTORY_EVENT_ARTIFACT_CREATEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_artifact_createdst : history_event {
    int32_t artifact_id;
    int32_t unit_id;
    int32_t hfid;
    int32_t site;
    uint32_t flags2; /*!< 1 = name_only */
    static virtual_identity _identity;
  protected:
    history_event_artifact_createdst(virtual_identity *_id = &history_event_artifact_createdst::_identity);
    friend void *df::allocator_fn<history_event_artifact_createdst>(void*,const void*);
  };
}
#endif
