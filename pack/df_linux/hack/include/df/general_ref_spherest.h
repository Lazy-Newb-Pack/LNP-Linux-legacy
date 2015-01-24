/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_SPHEREST_H
#define DF_GENERAL_REF_SPHEREST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
#ifndef DF_SPHERE_TYPE_H
#include "sphere_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_spherest : general_ref {
    enum_field<df::sphere_type,int16_t> sphere_type;
    static virtual_identity _identity;
  protected:
    general_ref_spherest(virtual_identity *_id = &general_ref_spherest::_identity);
    friend void *df::allocator_fn<general_ref_spherest>(void*,const void*);
  };
}
#endif
