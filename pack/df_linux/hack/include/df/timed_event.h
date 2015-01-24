/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TIMED_EVENT_H
#define DF_TIMED_EVENT_H
#ifndef DF_TIMED_EVENT_TYPE_H
#include "timed_event_type.h"
#endif
namespace df {
  struct historical_entity;
  struct DFHACK_EXPORT timed_event {
    df::timed_event_type type;
    int8_t season;
    int16_t season_ticks; /*!< 1 tick = 10 frames */
    df::historical_entity* entity;
    int16_t anon_1;
    int32_t anon_2;
    int16_t anon_3;
    int16_t anon_4;
    static struct_identity _identity;
  public:
    timed_event();
  };
}
#endif
