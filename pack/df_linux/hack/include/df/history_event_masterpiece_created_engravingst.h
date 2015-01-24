/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATED_ENGRAVINGST_H
#define DF_HISTORY_EVENT_MASTERPIECE_CREATED_ENGRAVINGST_H
#ifndef DF_HISTORY_EVENT_MASTERPIECE_CREATEDST_H
#include "history_event_masterpiece_createdst.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_masterpiece_created_engravingst : history_event_masterpiece_createdst {
    df::skill_rating skill_rating; /*!< at the moment of creation */
    int32_t art_id;
    int16_t art_subid;
    static virtual_identity _identity;
  protected:
    history_event_masterpiece_created_engravingst(virtual_identity *_id = &history_event_masterpiece_created_engravingst::_identity);
    friend void *df::allocator_fn<history_event_masterpiece_created_engravingst>(void*,const void*);
  };
}
#endif
