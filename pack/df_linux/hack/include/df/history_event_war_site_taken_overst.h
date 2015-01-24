/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_WAR_SITE_TAKEN_OVERST_H
#define DF_HISTORY_EVENT_WAR_SITE_TAKEN_OVERST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_war_site_taken_overst : history_event {
    int32_t attacker_civ;
    int32_t new_site_civ;
    int32_t defender_civ;
    int32_t site_civ;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_war_site_taken_overst(virtual_identity *_id = &history_event_war_site_taken_overst::_identity);
    friend void *df::allocator_fn<history_event_war_site_taken_overst>(void*,const void*);
  };
}
#endif
