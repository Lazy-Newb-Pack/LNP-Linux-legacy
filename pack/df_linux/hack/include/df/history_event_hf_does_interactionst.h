/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_DOES_INTERACTIONST_H
#define DF_HISTORY_EVENT_HF_DOES_INTERACTIONST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_does_interactionst : history_event {
    int32_t doer;
    int32_t target;
    int32_t interaction;
    int32_t anon_1;
    int32_t site;
    int32_t region;
    int32_t layer;
    static virtual_identity _identity;
  protected:
    history_event_hf_does_interactionst(virtual_identity *_id = &history_event_hf_does_interactionst::_identity);
    friend void *df::allocator_fn<history_event_hf_does_interactionst>(void*,const void*);
  };
}
#endif
