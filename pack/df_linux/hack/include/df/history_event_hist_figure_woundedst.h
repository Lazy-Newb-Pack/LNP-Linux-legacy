/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_WOUNDEDST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_WOUNDEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_woundedst : history_event {
    int32_t woundee;
    int32_t wounder;
    int32_t site;
    int32_t region;
    int32_t layer;
    int32_t woundee_race;
    int16_t woundee_caste;
    int16_t body_part;
    int16_t injury_type;
    int8_t part_lost;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_woundedst(virtual_identity *_id = &history_event_hist_figure_woundedst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_woundedst>(void*,const void*);
  };
}
#endif
