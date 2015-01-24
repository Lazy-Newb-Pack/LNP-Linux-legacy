/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_DYE_ITEMST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_DYE_ITEMST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_dye_itemst : history_event_masterpiece_createdst {
    int32_t anon_1;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    int32_t anon_2;
    int16_t dye_mat_type;
    int32_t dye_mat_index;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_dye_itemst(virtual_identity *_id = &history_event_masterpiece_created_dye_itemst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_dye_itemst>(void*,const void*);
  };
}
#endif
