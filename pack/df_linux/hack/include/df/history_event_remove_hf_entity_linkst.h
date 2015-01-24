/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_REMOVE_HF_ENTITY_LINKST_H
#define DF_HISTORY_EVENT_REMOVE_HF_ENTITY_LINKST_H
#ifndef DF_HISTFIG_ENTITY_LINK_TYPE_H
#include "histfig_entity_link_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_remove_hf_entity_linkst : history_event {
    int32_t civ;
    int32_t histfig;
    df::histfig_entity_link_type link_type;
    int32_t position_id; /*!< index into entity.positions.own */
    static virtual_identity _identity;
  protected:
    history_event_remove_hf_entity_linkst(virtual_identity *_id = &history_event_remove_hf_entity_linkst::_identity);
    friend void *df::allocator_fn<history_event_remove_hf_entity_linkst>(void*,const void*);
  };
}
#endif
