/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_SPARRINGST_H
#define DF_ACTIVITY_EVENT_SPARRINGST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#include "activity_event_participants.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_sparringst : activity_event {
    df::activity_event_participants participants;
    int32_t building_id;
    struct DFHACK_EXPORT T_groups {
      std::vector<int32_t > units;
      int32_t countdown;
      int32_t building_id;
      static struct_identity _identity;
    public:
      T_groups();
    };
    std::vector<T_groups* > groups;
    int32_t countdown;
    static virtual_identity _identity;
  protected:
    activity_event_sparringst(virtual_identity *_id = &activity_event_sparringst::_identity);
    friend void *df::allocator_fn<activity_event_sparringst>(void*,const void*);
  };
}
#endif
