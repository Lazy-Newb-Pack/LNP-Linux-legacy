/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_RANGED_PRACTICEST_H
#define DF_ACTIVITY_EVENT_RANGED_PRACTICEST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_ranged_practicest : activity_event {
    df::activity_event_participants participants;
    int32_t building_id;
    int32_t uniform_lock;
    static virtual_identity _identity;
  protected:
    activity_event_ranged_practicest(virtual_identity *_id = &activity_event_ranged_practicest::_identity);
    friend void *df::allocator_fn<activity_event_ranged_practicest>(void*,const void*);
  };
}
#endif
