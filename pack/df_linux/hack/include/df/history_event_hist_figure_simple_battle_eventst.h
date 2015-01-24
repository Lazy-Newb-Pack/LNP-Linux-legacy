/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_SIMPLE_BATTLE_EVENTST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_SIMPLE_BATTLE_EVENTST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_HISTORY_EVENT_SIMPLE_BATTLE_SUBTYPE_H
#include "history_event_simple_battle_subtype.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_simple_battle_eventst : history_event {
    std::vector<int32_t > group1;
    std::vector<int32_t > group2;
    int32_t site;
    int32_t region;
    int32_t layer;
    enum_field<df::history_event_simple_battle_subtype,int16_t> subtype;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_simple_battle_eventst(virtual_identity *_id = &history_event_hist_figure_simple_battle_eventst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_simple_battle_eventst>(void*,const void*);
  };
}
#endif
