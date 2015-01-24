/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ABSTRACT_BUILDINGST_H
#define DF_GENERAL_REF_ABSTRACT_BUILDINGST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_abstract_buildingst : general_ref {
    int32_t site_id;
    int32_t building_id;
    static virtual_identity _identity;
  protected:
    general_ref_abstract_buildingst(virtual_identity *_id = &general_ref_abstract_buildingst::_identity);
    friend void *df::allocator_fn<general_ref_abstract_buildingst>(void*,const void*);
  };
}
#endif
