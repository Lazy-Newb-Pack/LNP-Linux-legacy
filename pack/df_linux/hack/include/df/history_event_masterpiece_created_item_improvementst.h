/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_ITEM_IMPROVEMENTST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_ITEM_IMPROVEMENTST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
#ifndef DF_IMPROVEMENT_TYPE_H
#include "improvement_type.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_item_improvementst : history_event_masterpiece_createdst {
    int32_t anon_1;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    int32_t anon_2;
    enum_field<df::improvement_type,int16_t> improvement_type;
    int32_t improvement_subtype;
    int16_t imp_mat_type;
    int32_t imp_mat_index;
    int32_t art_id;
    int16_t art_subid;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_item_improvementst(virtual_identity *_id = &history_event_masterpiece_created_item_improvementst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_item_improvementst>(void*,const void*);
  };
}
#endif
