/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_TRAVELST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_TRAVELST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_travelst : history_event {
    std::vector<int32_t > group;
    int32_t site;
    int32_t region;
    int32_t layer;
    int32_t reason;
    df::coord2d region_pos;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_travelst(virtual_identity *_id = &history_event_hist_figure_travelst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_travelst>(void*,const void*);
  };
}
#endif
