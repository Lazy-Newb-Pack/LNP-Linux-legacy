/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MEETING_EVENT_H
#define DF_MEETING_EVENT_H
#ifndef DF_MEETING_EVENT_TYPE_H
#include "meeting_event_type.h"
#endif
#ifndef DF_MEETING_TOPIC_H
#include "meeting_topic.h"
#endif
namespace df {
  struct entity_buy_prices;
  struct entity_sell_prices;
  struct DFHACK_EXPORT meeting_event {
    df::meeting_event_type type;
    df::meeting_topic topic;
    int16_t topic_parm;
    std::vector<int32_t > anon_1;
    std::vector<int32_t > anon_2;
    int32_t quota_total;
    int32_t quota_remaining;
    int32_t year;
    int32_t ticks;
    df::entity_sell_prices* sell_prices;
    df::entity_buy_prices* buy_prices;
    static struct_identity _identity;
  public:
    meeting_event();
  };
}
#endif
