/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ENTITY_STOLENST_H
#define DF_GENERAL_REF_ENTITY_STOLENST_H
#ifndef DF_GENERAL_REF_ENTITY_H
#include "general_ref_entity.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_entity_stolenst : general_ref_entity {
    static virtual_identity _identity;
  protected:
    general_ref_entity_stolenst(virtual_identity *_id = &general_ref_entity_stolenst::_identity);
    friend void *df::allocator_fn<general_ref_entity_stolenst>(void*,const void*);
  };
}
#endif
