/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_REPLACED_BUILDINGST_H
#define DF_HISTORY_EVENT_REPLACED_BUILDINGST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_replaced_buildingst : history_event {
    int32_t civ;
    int32_t site_civ;
    int32_t site;
    int32_t old_structure;
    int32_t new_structure;
    static virtual_identity _identity;
  protected:
    history_event_replaced_buildingst(virtual_identity *_id = &history_event_replaced_buildingst::_identity);
    friend void *df::allocator_fn<history_event_replaced_buildingst>(void*,const void*);
  };
}
#endif
