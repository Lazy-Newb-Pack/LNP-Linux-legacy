/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ENTITY_LAWST_H
#define DF_HISTORY_EVENT_ENTITY_LAWST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_entity_lawst : history_event {
    int32_t entity;
    int32_t histfig;
    int32_t add_flags;
    int32_t remove_flags;
    static virtual_identity _identity;
  protected:
    history_event_entity_lawst(virtual_identity *_id = &history_event_entity_lawst::_identity);
    friend void *df::allocator_fn<history_event_entity_lawst>(void*,const void*);
  };
}
#endif
