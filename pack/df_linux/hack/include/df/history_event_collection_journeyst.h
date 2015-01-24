/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_JOURNEYST_H
#define DF_HISTORY_EVENT_COLLECTION_JOURNEYST_H
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_journeyst : history_event_collection {
    std::vector<int32_t > traveler_hf;
    int32_t ordinal;
    static virtual_identity _identity;
  protected:
    history_event_collection_journeyst(virtual_identity *_id = &history_event_collection_journeyst::_identity);
    friend void *df::allocator_fn<history_event_collection_journeyst>(void*,const void*);
  };
}
#endif
