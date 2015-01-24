/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_DESTINATIONST_H
#define DF_GENERAL_REF_BUILDING_DESTINATIONST_H
#ifndef DF_GENERAL_REF_BUILDING_H
#include "general_ref_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building_destinationst : general_ref_building {
    static virtual_identity _identity;
  protected:
    general_ref_building_destinationst(virtual_identity *_id = &general_ref_building_destinationst::_identity);
    friend void *df::allocator_fn<general_ref_building_destinationst>(void*,const void*);
  };
}
#endif
