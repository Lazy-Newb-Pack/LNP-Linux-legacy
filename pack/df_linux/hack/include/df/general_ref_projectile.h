/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_PROJECTILE_H
#define DF_GENERAL_REF_PROJECTILE_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_projectile : general_ref {
    int32_t projectile_id;
    static virtual_identity _identity;
  protected:
    general_ref_projectile(virtual_identity *_id = &general_ref_projectile::_identity);
    friend void *df::allocator_fn<general_ref_projectile>(void*,const void*);
  };
}
#endif
