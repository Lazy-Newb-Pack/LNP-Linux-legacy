/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HIST_FIGURE_DIEDST_H
#define DF_HISTORY_EVENT_HIST_FIGURE_DIEDST_H
#ifndef DF_DEATH_TYPE_H
#include "death_type.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_HISTORY_HIT_ITEM_H
#include "history_hit_item.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hist_figure_diedst : history_event {
    int32_t victim_hf;
    int32_t slayer_hf;
    int32_t slayer_race;
    int32_t slayer_caste;
    df::history_hit_item weapon;
    int32_t site;
    int32_t subregion;
    int32_t feature_layer;
    enum_field<df::death_type,int16_t> death_cause;
    static virtual_identity _identity;
  protected:
    history_event_hist_figure_diedst(virtual_identity *_id = &history_event_hist_figure_diedst::_identity);
    friend void *df::allocator_fn<history_event_hist_figure_diedst>(void*,const void*);
  };
}
#endif
