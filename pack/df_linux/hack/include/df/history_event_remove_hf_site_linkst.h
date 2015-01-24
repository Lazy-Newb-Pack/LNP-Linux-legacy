/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_REMOVE_HF_SITE_LINKST_H
#define DF_HISTORY_EVENT_REMOVE_HF_SITE_LINKST_H
#ifndef DF_HISTFIG_SITE_LINK_TYPE_H
#include "histfig_site_link_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_remove_hf_site_linkst : history_event {
    int32_t site;
    int32_t structure;
    int32_t histfig;
    int32_t civ;
    df::histfig_site_link_type type;
    static virtual_identity _identity;
  protected:
    history_event_remove_hf_site_linkst(virtual_identity *_id = &history_event_remove_hf_site_linkst::_identity);
    friend void *df::allocator_fn<history_event_remove_hf_site_linkst>(void*,const void*);
  };
}
#endif
