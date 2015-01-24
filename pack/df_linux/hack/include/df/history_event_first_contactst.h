/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_FIRST_CONTACTST_H
#define DF_HISTORY_EVENT_FIRST_CONTACTST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_first_contactst : history_event {
    int32_t contactor;
    int32_t contacted;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_first_contactst(virtual_identity *_id = &history_event_first_contactst::_identity);
    friend void *df::allocator_fn<history_event_first_contactst>(void*,const void*);
  };
}
#endif
