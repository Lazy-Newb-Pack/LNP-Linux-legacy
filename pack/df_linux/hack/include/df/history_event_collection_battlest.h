/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_BATTLEST_H
#define DF_HISTORY_EVENT_COLLECTION_BATTLEST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_battlest : history_event_collection {
    df::language_name name;
    int32_t parent_collection;
    int32_t region;
    int32_t layer;
    int32_t site;
    df::coord2d region_pos;
    std::vector<int32_t > attacker_civ;
    std::vector<int32_t > defender_civ;
    std::vector<int32_t > attacker_hf;
    std::vector<int32_t > defender_hf;
    std::vector<int32_t > noncombat_hf;
    std::vector<int32_t > attacker_squad_entity_pop;
    std::vector<int32_t > attacker_squad_counts;
    std::vector<int32_t > attacker_squad_deaths;
    std::vector<int32_t > attacker_squad_races;
    std::vector<int32_t > attacker_squad_sites;
    std::vector<int32_t > defender_squad_entity_pops;
    std::vector<int32_t > defender_squad_counts;
    std::vector<int32_t > defender_squad_deaths;
    std::vector<int32_t > defender_squad_races;
    std::vector<int32_t > defender_squad_sites;
    int16_t outcome; /*!< 0 = attacker won, 1 = defender won */
    static virtual_identity _identity;
  protected:
    history_event_collection_battlest(virtual_identity *_id = &history_event_collection_battlest::_identity);
    friend void *df::allocator_fn<history_event_collection_battlest>(void*,const void*);
  };
}
#endif
