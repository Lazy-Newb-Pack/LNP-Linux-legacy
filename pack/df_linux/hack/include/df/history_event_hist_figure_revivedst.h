/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_REVIVEDST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_REVIVEDST_H
#ifndef DF_GHOST_TYPE_H
#include "ghost_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_revivedst : history_event {
    int32_t histfig;
    int32_t site;
    int32_t region;
    int32_t layer;
    df::ghost_type ghost_type;
    int32_t flags; /*!< 1:again */
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_revivedst(virtual_identity *_id = &history_event_hist_figure_revivedst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_revivedst>(void*,const void*);
  };
}
#endif
