/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_CREATUREST_H
#define DF_INTERACTION_TARGET_CREATUREST_H
#ifndef DF_INTERACTION_TARGET_H
#include "interaction_target.h"
#endif
#ifndef DF_INTERACTION_TARGET_INFO_H
#include "interaction_target_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_target_creaturest : interaction_target {
    df::interaction_target_info anon_1;
    static virtual_identity _identity;
  protected:
    interaction_target_creaturest(virtual_identity *_id = &interaction_target_creaturest::_identity);
    friend void *df::allocator_fn<interaction_target_creaturest>(void*,const void*);
  };
}
#endif
