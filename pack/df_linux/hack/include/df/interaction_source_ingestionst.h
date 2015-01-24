/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_INGESTIONST_H
#define DF_INTERACTION_SOURCE_INGESTIONST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_ingestionst : interaction_source {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    interaction_source_ingestionst(virtual_identity *_id = &interaction_source_ingestionst::_identity);
    friend void *df::allocator_fn<interaction_source_ingestionst>(void*,const void*);
  };
}
#endif
