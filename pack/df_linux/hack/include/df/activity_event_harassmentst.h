/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_HARASSMENTST_H
#define DF_ACTIVITY_EVENT_HARASSMENTST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_harassmentst : activity_event {
    std::vector<int32_t > anon_1;
    struct DFHACK_EXPORT T_anon_2 {
      int32_t anon_1;
      int32_t anon_2[3];
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      int32_t anon_6;
      int32_t anon_7;
      int32_t anon_8;
      int32_t anon_9;
      int32_t anon_10;
      std::vector<int32_t > anon_11;
      int32_t anon_12;
      int32_t anon_13;
      static struct_identity _identity;
    public:
      T_anon_2();
    };
    std::vector<T_anon_2* > anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    int32_t anon_6;
    int32_t anon_7;
    int32_t anon_8;
    static virtual_identity _identity;
  protected:
    activity_event_harassmentst(virtual_identity *_id = &activity_event_harassmentst::_identity);
    friend void *df::allocator_fn<activity_event_harassmentst>(void*,const void*);
  };
}
#endif
