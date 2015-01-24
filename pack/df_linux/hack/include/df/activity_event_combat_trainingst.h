/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_COMBAT_TRAININGST_H
#define DF_ACTIVITY_EVENT_COMBAT_TRAININGST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_combat_trainingst : activity_event {
    df::activity_event_participants participants;
    int32_t building_id;
    int32_t hist_figure_id;
    int32_t unit_id;
    int32_t organize_counter; /*!< gt 0 => organizing, lt 0 => done */
    static virtual_identity _identity;
  protected:
    activity_event_combat_trainingst(virtual_identity *_id = &activity_event_combat_trainingst::_identity);
    friend void *df::allocator_fn<activity_event_combat_trainingst>(void*,const void*);
  };
}
#endif
