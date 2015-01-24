/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_SKILL_DEMONSTRATIONST_H
#define DF_ACTIVITY_EVENT_SKILL_DEMONSTRATIONST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_skill_demonstrationst : activity_event {
    df::activity_event_participants participants;
    int32_t building_id;
    int32_t hist_figure_id;
    int32_t unit_id;
    df::job_skill skill;
    int32_t organize_counter;
    int32_t wait_countdown;
    int32_t train_rounds;
    int32_t train_countdown;
    static virtual_identity _identity;
  protected:
    activity_event_skill_demonstrationst(virtual_identity *_id = &activity_event_skill_demonstrationst::_identity);
    friend void *df::allocator_fn<activity_event_skill_demonstrationst>(void*,const void*);
  };
}
#endif
