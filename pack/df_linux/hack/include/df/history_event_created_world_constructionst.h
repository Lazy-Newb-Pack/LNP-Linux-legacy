/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CREATED_WORLD_CONSTRUCTIONST_H
#define DF_HISTORY_EVENT_CREATED_WORLD_CONSTRUCTIONST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_created_world_constructionst : history_event {
    int32_t civ;
    int32_t site_civ;
    int32_t construction;
    int32_t master_construction;
    int32_t site1;
    int32_t site2;
    static virtual_identity _identity;
  protected:
    history_event_created_world_constructionst(virtual_identity *_id = &history_event_created_world_constructionst::_identity);
    friend void *df::allocator_fn<history_event_created_world_constructionst>(void*,const void*);
  };
}
#endif
