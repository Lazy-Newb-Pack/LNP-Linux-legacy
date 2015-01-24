/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_REUNIONST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_REUNIONST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_reunionst : history_event {
    std::vector<int32_t > missing;
    std::vector<int32_t > reunited_with;
    int32_t assistant;
    int32_t site;
    int32_t region;
    int32_t layer;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_reunionst(virtual_identity *_id = &history_event_hist_figure_reunionst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_reunionst>(void*,const void*);
  };
}
#endif
