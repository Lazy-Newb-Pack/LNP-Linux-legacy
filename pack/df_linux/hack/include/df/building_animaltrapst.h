/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ANIMALTRAPST_H
#define DF_BUILDING_ANIMALTRAPST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_animaltrapst : building_actual {
    int16_t bait_type;
    int16_t fill_timer;
    static virtual_identity _identity;
  protected:
    building_animaltrapst(virtual_identity *_id = &building_animaltrapst::_identity);
    friend void *df::allocator_fn<building_animaltrapst>(void*,const void*);
  };
}
#endif
