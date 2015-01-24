/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CREATURE_DEVOUREDST_H
#define DF_HISTORY_EVENT_CREATURE_DEVOUREDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_creature_devouredst : history_event {
    int32_t victim;
    int32_t race;
    int16_t caste;
    int32_t eater;
    int32_t entity;
    int32_t site;
    int32_t region;
    int32_t layer;
    static virtual_identity _identity;
  protected:
    history_event_creature_devouredst(virtual_identity *_id = &history_event_creature_devouredst::_identity);
    friend void *df::allocator_fn<history_event_creature_devouredst>(void*,const void*);
  };
}
#endif
