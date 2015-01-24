/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_SITE_RETIREDST_H
#define DF_HISTORY_EVENT_SITE_RETIREDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_site_retiredst : history_event {
    int32_t civ;
    int32_t site_civ;
    int32_t site;
    int32_t flags; /*!< 1: first time */
    static virtual_identity _identity;
  protected:
    history_event_site_retiredst(virtual_identity *_id = &history_event_site_retiredst::_identity);
    friend void *df::allocator_fn<history_event_site_retiredst>(void*,const void*);
  };
}
#endif
