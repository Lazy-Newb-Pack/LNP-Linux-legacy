/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_REACH_SUMMITST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_REACH_SUMMITST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_reach_summitst : history_event {
    std::vector<int32_t > group;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_reach_summitst(virtual_identity *_id = &history_event_hist_figure_reach_summitst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_reach_summitst>(void*,const void*);
  };
}
#endif
