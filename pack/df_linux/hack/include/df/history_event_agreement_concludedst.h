/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_AGREEMENT_CONCLUDEDST_H
#define DF_HISTORY_EVENT_AGREEMENT_CONCLUDEDST_H
#ifndef DF_AGREEMENT_CONCLUSION_REASON_H
#include "agreement_conclusion_reason.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_agreement_concludedst : history_event {
    int32_t agreement_id;
    int32_t subject_id;
    df::agreement_conclusion_reason reason;
    int32_t concluder_hf;
    static virtual_identity _identity;
  protected:
    history_event_agreement_concludedst(virtual_identity *_id = &history_event_agreement_concludedst::_identity);
    friend void *df::allocator_fn<history_event_agreement_concludedst>(void*,const void*);
  };
}
#endif
