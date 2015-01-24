/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_DEITYST_H
#define DF_INTERACTION_SOURCE_DEITYST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
#ifndef DF_INTERACTION_SOURCE_USAGE_HINT_H
#include "interaction_source_usage_hint.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_deityst : interaction_source {
    int32_t anon_1;
    std::vector<df::interaction_source_usage_hint > usage_hint;
    static virtual_identity _identity;
  protected:
    interaction_source_deityst(virtual_identity *_id = &interaction_source_deityst::_identity);
    friend void *df::allocator_fn<interaction_source_deityst>(void*,const void*);
  };
}
#endif
