/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_LOSTST_H
#define DF_HISTORY_EVENT_MASTERPIECE_LOSTST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_MASTERPIECE_LOSS_TYPE_H
#include "masterpiece_loss_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_lostst : history_event {
    int32_t creation_event;
    int32_t histfig;
    int32_t site;
    enum_field<df::masterpiece_loss_type,int16_t> method;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_lostst(virtual_identity *_id = &history_event_masterpiece_lostst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_lostst>(void*,const void*);
  };
}
#endif
