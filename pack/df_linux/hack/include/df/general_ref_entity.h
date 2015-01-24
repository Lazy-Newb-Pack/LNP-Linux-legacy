/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ENTITY_H
#define DF_GENERAL_REF_ENTITY_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_entity : general_ref {
    int32_t entity_id;
    static virtual_identity _identity;
  protected:
    general_ref_entity(virtual_identity *_id = &general_ref_entity::_identity);
    friend void *df::allocator_fn<general_ref_entity>(void*,const void*);
  };
}
#endif
