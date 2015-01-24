/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_SITE_DISPUTEST_H
#define DF_HISTORY_EVENT_SITE_DISPUTEST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_SITE_DISPUTE_TYPE_H
#include "site_dispute_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_site_disputest : history_event {
    df::site_dispute_type dispute_type;
    int32_t entity_1;
    int32_t entity_2;
    int32_t site_1;
    int32_t site_2;
    static virtual_identity _identity;
  protected:
    history_event_site_disputest(virtual_identity *_id = &history_event_site_disputest::_identity);
    friend void *df::allocator_fn<history_event_site_disputest>(void*,const void*);
  };
}
#endif
