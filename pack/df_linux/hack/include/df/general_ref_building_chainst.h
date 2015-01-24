/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_CHAINST_H
#define DF_GENERAL_REF_BUILDING_CHAINST_H
#ifndef DF_GENERAL_REF_BUILDING_H
#include "general_ref_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building_chainst : general_ref_building {
    static virtual_identity _identity;
  protected:
    general_ref_building_chainst(virtual_identity *_id = &general_ref_building_chainst::_identity);
    friend void *df::allocator_fn<general_ref_building_chainst>(void*,const void*);
  };
}
#endif
