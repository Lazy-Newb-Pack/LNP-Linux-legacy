/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_GAINS_SECRET_GOALST_H
#define DF_HISTORY_EVENT_HF_GAINS_SECRET_GOALST_H
#ifndef DF_GOAL_TYPE_H
#include "goal_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_gains_secret_goalst : history_event {
    int32_t histfig;
    df::goal_type goal;
    static virtual_identity _identity;
  protected:
    history_event_hf_gains_secret_goalst(virtual_identity *_id = &history_event_hf_gains_secret_goalst::_identity);
    friend void *df::allocator_fn<history_event_hf_gains_secret_goalst>(void*,const void*);
  };
}
#endif
