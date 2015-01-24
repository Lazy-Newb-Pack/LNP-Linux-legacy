/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_DUELST_H
#define DF_HISTORY_EVENT_COLLECTION_DUELST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_duelst : history_event_collection {
    int32_t parent_collection;
    int32_t region;
    int32_t layer;
    int32_t site;
    df::coord2d region_pos;
    int32_t attacker_hf;
    int32_t defender_hf;
    int32_t ordinal;
    int8_t anon_1;
    static virtual_identity _identity;
  protected:
    history_event_collection_duelst(virtual_identity *_id = &history_event_collection_duelst::_identity);
    friend void *df::allocator_fn<history_event_collection_duelst>(void*,const void*);
  };
}
#endif
