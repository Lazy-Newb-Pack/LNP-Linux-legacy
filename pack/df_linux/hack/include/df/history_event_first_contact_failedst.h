/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_FIRST_CONTACT_FAILEDST_H
#define DF_HISTORY_EVENT_FIRST_CONTACT_FAILEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_first_contact_failedst : history_event {
    int32_t contactor;
    int32_t rejector;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_first_contact_failedst(virtual_identity *_id = &history_event_first_contact_failedst::_identity);
    friend void *df::allocator_fn<history_event_first_contact_failedst>(void*,const void*);
  };
}
#endif
