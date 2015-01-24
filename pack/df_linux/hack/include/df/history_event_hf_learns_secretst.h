/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_LEARNS_SECRETST_H
#define DF_HISTORY_EVENT_HF_LEARNS_SECRETST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_learns_secretst : history_event {
    int32_t student;
    int32_t teacher;
    int32_t artifact;
    int32_t interaction;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    history_event_hf_learns_secretst(virtual_identity *_id = &history_event_hf_learns_secretst::_identity);
    friend void *df::allocator_fn<history_event_hf_learns_secretst>(void*,const void*);
  };
}
#endif
