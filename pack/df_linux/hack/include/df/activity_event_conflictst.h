/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_CONFLICTST_H
#define DF_ACTIVITY_EVENT_CONFLICTST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT activity_event_conflictst : activity_event {
    struct DFHACK_EXPORT T_anon_1 {
      int32_t id;
      std::vector<int32_t > anon_1;
      std::vector<int32_t > anon_2;
      struct DFHACK_EXPORT T_anon_3 {
        int32_t anon_1;
        int32_t anon_2;
        static struct_identity _identity;
      public:
        T_anon_3();
      };
      std::vector<T_anon_3* > anon_3;
      int32_t anon_4;
      int32_t anon_5;
      static struct_identity _identity;
    public:
      T_anon_1();
    };
    std::vector<T_anon_1* > anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    static virtual_identity _identity;
  protected:
    activity_event_conflictst(virtual_identity *_id = &activity_event_conflictst::_identity);
    friend void *df::allocator_fn<activity_event_conflictst>(void*,const void*);
  };
}
#endif
