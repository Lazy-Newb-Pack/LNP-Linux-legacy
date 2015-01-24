/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ENTITY_ITEMOWNERST_H
#define DF_GENERAL_REF_ENTITY_ITEMOWNERST_H
#ifndef DF_GENERAL_REF_ENTITY_H
#include "general_ref_entity.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_entity_itemownerst : general_ref_entity {
    static virtual_identity _identity;
  protected:
    general_ref_entity_itemownerst(virtual_identity *_id = &general_ref_entity_itemownerst::_identity);
    friend void *df::allocator_fn<general_ref_entity_itemownerst>(void*,const void*);
  };
}
#endif
