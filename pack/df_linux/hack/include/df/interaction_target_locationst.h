/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_LOCATIONST_H
#define DF_INTERACTION_TARGET_LOCATIONST_H
#ifndef DF_INTERACTION_TARGET_H
#include "interaction_target.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_target_locationst : interaction_target {
    static virtual_identity _identity;
  protected:
    interaction_target_locationst(virtual_identity *_id = &interaction_target_locationst::_identity);
    friend void *df::allocator_fn<interaction_target_locationst>(void*,const void*);
  };
}
#endif
