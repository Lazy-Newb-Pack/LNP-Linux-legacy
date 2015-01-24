/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_H
#define DF_GENERAL_REF_UNIT_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit : general_ref {
    int32_t unit_id;
    static virtual_identity _identity;
  protected:
    general_ref_unit(virtual_identity *_id = &general_ref_unit::_identity);
    friend void *df::allocator_fn<general_ref_unit>(void*,const void*);
  };
}
#endif
