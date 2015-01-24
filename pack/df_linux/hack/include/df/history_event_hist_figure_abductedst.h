/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_ABDUCTEDST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_ABDUCTEDST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_abductedst : history_event {
    int32_t target;
    int32_t snatcher;
    int32_t site;
    int32_t region;
    int32_t layer;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_abductedst(virtual_identity *_id = &history_event_hist_figure_abductedst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_abductedst>(void*,const void*);
  };
}
#endif
