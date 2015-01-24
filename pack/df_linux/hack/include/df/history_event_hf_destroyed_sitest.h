/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_DESTROYED_SITEST_H
#define DF_HISTORY_EVENT_HF_DESTROYED_SITEST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_destroyed_sitest : history_event {
    int32_t attacker_hf;
    int32_t defender_civ;
    int32_t site_civ;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_hf_destroyed_sitest(virtual_identity *_id = &history_event_hf_destroyed_sitest::_identity);
    friend void *df::allocator_fn<history_event_hf_destroyed_sitest>(void*,const void*);
  };
}
#endif
