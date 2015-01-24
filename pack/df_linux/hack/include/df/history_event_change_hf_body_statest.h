/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_CHANGE_HF_BODY_STATEST_H
#define DF_HISTORY_EVENT_CHANGE_HF_BODY_STATEST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTFIG_BODY_STATE_H
#include "histfig_body_state.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_change_hf_body_statest : history_event {
    int32_t histfig;
    enum_field<df::histfig_body_state,int8_t> body_state;
    int32_t site;
    int32_t structure;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    static virtual_identity _identity;
  protected:
    history_event_change_hf_body_statest(virtual_identity *_id = &history_event_change_hf_body_statest::_identity);
    friend void *df::allocator_fn<history_event_change_hf_body_statest>(void*,const void*);
  };
}
#endif
