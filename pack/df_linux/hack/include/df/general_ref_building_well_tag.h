/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_WELL_TAG_H
#define DF_GENERAL_REF_BUILDING_WELL_TAG_H
#ifndef DF_GENERAL_REF_BUILDING_H
#include "general_ref_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building_well_tag : general_ref_building {
    int8_t direction;
    static virtual_identity _identity;
  protected:
    general_ref_building_well_tag(virtual_identity *_id = &general_ref_building_well_tag::_identity);
    friend void *df::allocator_fn<general_ref_building_well_tag>(void*,const void*);
  };
}
#endif
