/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_GUARDST_H
#define DF_ACTIVITY_EVENT_GUARDST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_guardst : activity_event {
    std::vector<int32_t > anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int16_t anon_4;
    int32_t anon_5;
    static virtual_identity _identity;
  protected:
    activity_event_guardst(virtual_identity *_id = &activity_event_guardst::_identity);
    friend void *df::allocator_fn<activity_event_guardst>(void*,const void*);
  };
}
#endif
