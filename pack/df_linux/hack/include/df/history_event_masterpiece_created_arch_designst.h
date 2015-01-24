/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_ARCH_DESIGNST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_ARCH_DESIGNST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_arch_designst : history_event_masterpiece_createdst {
    int32_t anon_1;
    int16_t building_type;
    int16_t building_subtype;
    int32_t building_custom;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_arch_designst(virtual_identity *_id = &history_event_masterpiece_created_arch_designst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_arch_designst>(void*,const void*);
  };
}
#endif
