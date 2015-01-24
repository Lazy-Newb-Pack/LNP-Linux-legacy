/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_SITE_CONQUEREDST_H
#define DF_HISTORY_EVENT_COLLECTION_SITE_CONQUEREDST_H
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_site_conqueredst : history_event_collection {
    int32_t parent_collection;
    int32_t site;
    std::vector<int32_t > attacker_civ;
    std::vector<int32_t > defender_civ;
    int16_t anon_1; /*!< uninitialized */
    int32_t ordinal;
    static virtual_identity _identity;
  protected:
    history_event_collection_site_conqueredst(virtual_identity *_id = &history_event_collection_site_conqueredst::_identity);
    friend void *df::allocator_fn<history_event_collection_site_conqueredst>(void*,const void*);
  };
}
#endif
