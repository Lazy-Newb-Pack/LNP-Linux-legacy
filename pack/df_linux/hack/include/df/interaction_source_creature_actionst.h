/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_CREATURE_ACTIONST_H
#define DF_INTERACTION_SOURCE_CREATURE_ACTIONST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_creature_actionst : interaction_source {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_source_creature_actionst(virtual_identity *_id = &interaction_source_creature_actionst::_identity);
    friend void *df::allocator_fn<interaction_source_creature_actionst>(void*,const void*);
  };
}
#endif
