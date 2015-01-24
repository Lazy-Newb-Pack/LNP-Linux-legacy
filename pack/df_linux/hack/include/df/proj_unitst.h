/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJ_UNITST_H
#define DF_PROJ_UNITST_H
#ifndef DF_PROJECTILE_H
#include "projectile.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT proj_unitst : projectile {
    df::unit* unit; /*!< ? */
    static virtual_identity _identity;
  protected:
    proj_unitst(virtual_identity *_id = &proj_unitst::_identity);
    friend void *df::allocator_fn<proj_unitst>(void*,const void*);
  };
}
#endif
