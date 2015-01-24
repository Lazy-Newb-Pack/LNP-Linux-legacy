/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_DISTURBANCEST_H
#define DF_INTERACTION_SOURCE_DISTURBANCEST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_disturbancest : interaction_source {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_source_disturbancest(virtual_identity *_id = &interaction_source_disturbancest::_identity);
    friend void *df::allocator_fn<interaction_source_disturbancest>(void*,const void*);
  };
}
#endif
