/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_ARCH_CONSTRUCTST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_ARCH_CONSTRUCTST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_arch_constructst : history_event_masterpiece_createdst {
    int32_t anon_1;
    int16_t building_type;
    int16_t building_subtype;
    int32_t building_custom;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_arch_constructst(virtual_identity *_id = &history_event_masterpiece_created_arch_constructst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_arch_constructst>(void*,const void*);
  };
}
#endif
