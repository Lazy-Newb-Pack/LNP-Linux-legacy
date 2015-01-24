/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_TOPICAGREEMENT_MADEST_H
#define DF_HISTORY_EVENT_TOPICAGREEMENT_MADEST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_MEETING_TOPIC_H
#include "meeting_topic.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_topicagreement_madest : history_event {
    df::meeting_topic topic;
    int32_t source;
    int32_t destination;
    int32_t site;
    static virtual_identity _identity;
  protected:
    history_event_topicagreement_madest(virtual_identity *_id = &history_event_topicagreement_madest::_identity);
    friend void *df::allocator_fn<history_event_topicagreement_madest>(void*,const void*);
  };
}
#endif
