/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_TRAINING_SESSIONST_H
#define DF_ACTIVITY_EVENT_TRAINING_SESSIONST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_training_sessionst : activity_event {
    df::activity_event_participants participants;
    static virtual_identity _identity;
  protected:
    activity_event_training_sessionst(virtual_identity *_id = &activity_event_training_sessionst::_identity);
    friend void *df::allocator_fn<activity_event_training_sessionst>(void*,const void*);
  };
}
#endif
