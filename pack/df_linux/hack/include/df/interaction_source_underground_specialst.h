/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_UNDERGROUND_SPECIALST_H
#define DF_INTERACTION_SOURCE_UNDERGROUND_SPECIALST_H
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_underground_specialst : interaction_source {
    static virtual_identity _identity;
  protected:
    interaction_source_underground_specialst(virtual_identity *_id = &interaction_source_underground_specialst::_identity);
    friend void *df::allocator_fn<interaction_source_underground_specialst>(void*,const void*);
  };
}
#endif
