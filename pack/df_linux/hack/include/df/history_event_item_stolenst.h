/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_ITEM_STOLENST_H
#define DF_HISTORY_EVENT_ITEM_STOLENST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_item_stolenst : history_event {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mattype;
    int32_t matindex;
    int32_t item;
    int32_t entity;
    int32_t histfig;
    int32_t site;
    int32_t structure;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    history_event_item_stolenst(virtual_identity *_id = &history_event_item_stolenst::_identity);
    friend void *df::allocator_fn<history_event_item_stolenst>(void*,const void*);
  };
}
#endif
