/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_ENTITYST_H
#define DF_VIEWSCREEN_ENTITYST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct historical_entity;
  struct meeting_event;
  struct nemesis_record;
  struct DFHACK_EXPORT viewscreen_entityst : viewscreen {
    df::historical_entity* entity;
    std::vector<void* > anon_1;
    int32_t anon_2;
    std::vector<df::nemesis_record* > important_leader_nemesis;
    std::vector<int32_t > anon_3;
    int32_t start_idx;
    std::vector<df::meeting_event* > agreements;
    std::vector<int8_t > agreement_status;
    int32_t agreement_cursor;
    int16_t page;
    static virtual_identity _identity;
  protected:
    viewscreen_entityst(virtual_identity *_id = &viewscreen_entityst::_identity);
    friend void *df::allocator_fn<viewscreen_entityst>(void*,const void*);
  };
}
#endif
