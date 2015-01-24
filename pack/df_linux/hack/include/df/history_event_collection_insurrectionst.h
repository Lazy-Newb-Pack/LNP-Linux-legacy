/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_INSURRECTIONST_H
#define DF_HISTORY_EVENT_COLLECTION_INSURRECTIONST_H
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_insurrectionst : history_event_collection {
    int32_t site;
    int32_t target_civ;
    int32_t ordinal;
    static virtual_identity _identity;
  protected:
    history_event_collection_insurrectionst(virtual_identity *_id = &history_event_collection_insurrectionst::_identity);
    friend void *df::allocator_fn<history_event_collection_insurrectionst>(void*,const void*);
  };
}
#endif
