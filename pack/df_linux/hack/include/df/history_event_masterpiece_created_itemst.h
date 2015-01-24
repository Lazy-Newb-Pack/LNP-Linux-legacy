/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_ITEMST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_ITEMST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_itemst : history_event_masterpiece_createdst {
    enum_field<df::job_skill,int32_t> skill_used;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int16_t mat_index;
    int32_t item_id;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_itemst(virtual_identity *_id = &history_event_masterpiece_created_itemst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_itemst>(void*,const void*);
  };
}
#endif
