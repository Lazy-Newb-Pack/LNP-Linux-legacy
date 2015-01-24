/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_REMOVE_HF_HF_LINKST_H
#define DF_HISTORY_EVENT_REMOVE_HF_HF_LINKST_H
#ifndef DF_HISTFIG_HF_LINK_TYPE_H
#include "histfig_hf_link_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_remove_hf_hf_linkst : history_event {
    int32_t hf;
    int32_t hf_target;
    df::histfig_hf_link_type type;
    static virtual_identity _identity;
  protected:
    history_event_remove_hf_hf_linkst(virtual_identity *_id = &history_event_remove_hf_hf_linkst::_identity);
    friend void *df::allocator_fn<history_event_remove_hf_hf_linkst>(void*,const void*);
  };
}
#endif
