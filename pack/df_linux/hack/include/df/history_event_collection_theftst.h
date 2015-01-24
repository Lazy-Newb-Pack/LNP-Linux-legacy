/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_THEFTST_H
#define DF_HISTORY_EVENT_COLLECTION_THEFTST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_theftst : history_event_collection {
    int32_t parent_collection;
    int32_t region;
    int32_t layer;
    int32_t site;
    df::coord2d region_pos;
    int32_t thief_civ;
    int32_t victim_civ;
    std::vector<int32_t > thief_hf;
    std::vector<df::item_type > stolen_item_types;
    std::vector<int16_t > stolen_item_subtypes;
    std::vector<int16_t > stolen_mat_types;
    std::vector<int32_t > stolen_mat_indices;
    std::vector<int32_t > stolen_item_ids;
    std::vector<int32_t > anon_1;
    std::vector<int16_t > anon_2;
    std::vector<int16_t > anon_3;
    std::vector<int16_t > anon_4;
    std::vector<int32_t > anon_5;
    std::vector<int32_t > anon_6;
    std::vector<int32_t > anon_7;
    int32_t ordinal;
    static virtual_identity _identity;
  protected:
    history_event_collection_theftst(virtual_identity *_id = &history_event_collection_theftst::_identity);
    friend void *df::allocator_fn<history_event_collection_theftst>(void*,const void*);
  };
}
#endif
