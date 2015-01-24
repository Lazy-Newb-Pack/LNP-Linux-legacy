/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CHANGE_CREATURE_TYPEST_H
#define DF_HISTORY_EVENT_CHANGE_CREATURE_TYPEST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_change_creature_typest : history_event {
    int32_t changee;
    int32_t changer;
    int32_t old_race;
    int32_t old_caste;
    int32_t new_race;
    int32_t new_caste;
    static virtual_identity _identity;
  protected:
    history_event_change_creature_typest(virtual_identity *_id = &history_event_change_creature_typest::_identity);
    friend void *df::allocator_fn<history_event_change_creature_typest>(void*,const void*);
  };
}
#endif
