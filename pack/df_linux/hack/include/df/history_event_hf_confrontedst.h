/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_CONFRONTEDST_H
#define DF_HISTORY_EVENT_HF_CONFRONTEDST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_confrontedst : history_event {
    int32_t target;
    int32_t accuser;
    std::vector<int32_t > reasons;
    int32_t site;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    static virtual_identity _identity;
  protected:
    history_event_hf_confrontedst(virtual_identity *_id = &history_event_hf_confrontedst::_identity);
    friend void *df::allocator_fn<history_event_hf_confrontedst>(void*,const void*);
  };
}
#endif
