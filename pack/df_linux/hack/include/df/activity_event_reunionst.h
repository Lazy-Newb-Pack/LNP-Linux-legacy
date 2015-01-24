/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_REUNIONST_H
#define DF_ACTIVITY_EVENT_REUNIONST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_reunionst : activity_event {
    std::vector<int32_t > anon_1;
    std::vector<int32_t > anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    int32_t anon_6;
    int32_t anon_7;
    static virtual_identity _identity;
  protected:
    activity_event_reunionst(virtual_identity *_id = &activity_event_reunionst::_identity);
    friend void *df::allocator_fn<activity_event_reunionst>(void*,const void*);
  };
}
#endif
