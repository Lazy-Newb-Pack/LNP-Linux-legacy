/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_TOPICAGREEMENT_CONCLUDEDST_H
#define DF_HISTORY_EVENT_TOPICAGREEMENT_CONCLUDEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_MEETING_TOPIC_H
#include "meeting_topic.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_topicagreement_concludedst : history_event {
    int32_t source;
    int32_t destination;
    int32_t site;
    df::meeting_topic topic;
    int32_t result; /*!< range from -3 to +2 */
    static virtual_identity _identity;
  protected:
    history_event_topicagreement_concludedst(virtual_identity *_id = &history_event_topicagreement_concludedst::_identity);
    friend void *df::allocator_fn<history_event_topicagreement_concludedst>(void*,const void*);
  };
}
#endif
