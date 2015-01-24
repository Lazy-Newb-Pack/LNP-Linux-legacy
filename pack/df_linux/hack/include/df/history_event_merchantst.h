/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MERCHANTST_H
#define DF_HISTORY_EVENT_MERCHANTST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_merchantst : history_event {
    int32_t source;
    int32_t destination;
    int32_t site;
    BitArray<int> flags2;
    static virtual_identity _identity;
  protected:
    history_event_merchantst(virtual_identity *_id = &history_event_merchantst::_identity);
    friend void *df::allocator_fn<history_event_merchantst>(void*,const void*);
  };
}
#endif
