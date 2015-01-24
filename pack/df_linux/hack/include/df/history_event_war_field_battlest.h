/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_WAR_FIELD_BATTLEST_H
#define DF_HISTORY_EVENT_WAR_FIELD_BATTLEST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_war_field_battlest : history_event {
    int32_t attacker_civ;
    int32_t defender_civ;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    int32_t attacker_general_hf;
    int32_t defender_general_hf;
    static virtual_identity _identity;
  protected:
    history_event_war_field_battlest(virtual_identity *_id = &history_event_war_field_battlest::_identity);
    friend void *df::allocator_fn<history_event_war_field_battlest>(void*,const void*);
  };
}
#endif
