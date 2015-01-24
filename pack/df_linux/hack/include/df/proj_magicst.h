/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJ_MAGICST_H
#define DF_PROJ_MAGICST_H
#ifndef DF_PROJECTILE_H
#include "projectile.h"
#endif
namespace df {
  struct DFHACK_EXPORT proj_magicst : projectile {
    void* unk; /*!< ? */
    static virtual_identity _identity;
  protected:
    proj_magicst(virtual_identity *_id = &proj_magicst::_identity);
    friend void *df::allocator_fn<proj_magicst>(void*,const void*);
  };
}
#endif
