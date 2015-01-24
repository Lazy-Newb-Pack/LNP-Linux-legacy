/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CHANGE_HF_JOBST_H
#define DF_HISTORY_EVENT_CHANGE_HF_JOBST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_change_hf_jobst : history_event {
    int32_t hfid;
    df::profession new_job;
    df::profession old_job;
    int32_t site;
    int32_t region;
    int32_t layer;
    static virtual_identity _identity;
  protected:
    history_event_change_hf_jobst(virtual_identity *_id = &history_event_change_hf_jobst::_identity);
    friend void *df::allocator_fn<history_event_change_hf_jobst>(void*,const void*);
  };
}
#endif
