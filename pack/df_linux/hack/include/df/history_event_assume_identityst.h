/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ASSUME_IDENTITYST_H
#define DF_HISTORY_EVENT_ASSUME_IDENTITYST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_assume_identityst : history_event {
    int32_t trickster;
    int32_t identity;
    int32_t target;
    static virtual_identity _identity;
  protected:
    history_event_assume_identityst(virtual_identity *_id = &history_event_assume_identityst::_identity);
    friend void *df::allocator_fn<history_event_assume_identityst>(void*,const void*);
  };
}
#endif
