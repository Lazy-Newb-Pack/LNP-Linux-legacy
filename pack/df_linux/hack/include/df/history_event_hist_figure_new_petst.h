/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_NEW_PETST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_NEW_PETST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_new_petst : history_event {
    std::vector<int32_t > group;
    std::vector<int16_t > pets;
    int32_t site;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_new_petst(virtual_identity *_id = &history_event_hist_figure_new_petst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_new_petst>(void*,const void*);
  };
}
#endif
