/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_H
#define DF_GENERAL_REF_BUILDING_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building : general_ref {
    int32_t building_id;
    static virtual_identity _identity;
  protected:
    general_ref_building(virtual_identity *_id = &general_ref_building::_identity);
    friend void *df::allocator_fn<general_ref_building>(void*,const void*);
  };
}
#endif
