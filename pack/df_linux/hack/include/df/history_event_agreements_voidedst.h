/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_AGREEMENTS_VOIDEDST_H
#define DF_HISTORY_EVENT_AGREEMENTS_VOIDEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_agreements_voidedst : history_event {
    int32_t source;
    int32_t destination;
    static virtual_identity _identity;
  protected:
    history_event_agreements_voidedst(virtual_identity *_id = &history_event_agreements_voidedst::_identity);
    friend void *df::allocator_fn<history_event_agreements_voidedst>(void*,const void*);
  };
}
#endif
