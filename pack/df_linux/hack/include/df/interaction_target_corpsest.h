/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_CORPSEST_H
#define DF_INTERACTION_TARGET_CORPSEST_H
#ifndef DF_INTERACTION_TARGET_H
#include "interaction_target.h"
#endif
#ifndef DF_INTERACTION_TARGET_INFO_H
#include "interaction_target_info.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_target_corpsest : interaction_target {
    df::interaction_target_info anon_1;
    static virtual_identity _identity;
  protected:
    interaction_target_corpsest(virtual_identity *_id = &interaction_target_corpsest::_identity);
    friend void *df::allocator_fn<interaction_target_corpsest>(void*,const void*);
  };
}
#endif
