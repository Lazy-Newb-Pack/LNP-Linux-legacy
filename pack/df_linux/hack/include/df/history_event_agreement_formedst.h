/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_AGREEMENT_FORMEDST_H
#define DF_HISTORY_EVENT_AGREEMENT_FORMEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_agreement_formedst : history_event {
    int32_t agreement_id;
    static virtual_identity _identity;
  protected:
    history_event_agreement_formedst(virtual_identity *_id = &history_event_agreement_formedst::_identity);
    friend void *df::allocator_fn<history_event_agreement_formedst>(void*,const void*);
  };
}
#endif
