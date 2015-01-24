/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ENTITY_OFFEREDST_H
#define DF_GENERAL_REF_ENTITY_OFFEREDST_H
#ifndef DF_GENERAL_REF_ENTITY_H
#include "general_ref_entity.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_entity_offeredst : general_ref_entity {
    static virtual_identity _identity;
  protected:
    general_ref_entity_offeredst(virtual_identity *_id = &general_ref_entity_offeredst::_identity);
    friend void *df::allocator_fn<general_ref_entity_offeredst>(void*,const void*);
  };
}
#endif
