/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_INDIVIDUAL_SKILL_DRILLST_H
#define DF_ACTIVITY_EVENT_INDIVIDUAL_SKILL_DRILLST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_individual_skill_drillst : activity_event {
    df::activity_event_participants participants;
    int32_t building_id;
    int32_t countdown;
    static virtual_identity _identity;
  protected:
    activity_event_individual_skill_drillst(virtual_identity *_id = &activity_event_individual_skill_drillst::_identity);
    friend void *df::allocator_fn<activity_event_individual_skill_drillst>(void*,const void*);
  };
}
#endif
