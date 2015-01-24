/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJ_ITEMST_H
#define DF_PROJ_ITEMST_H
#ifndef DF_PROJECTILE_H
#include "projectile.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT proj_itemst : projectile {
    df::item* item;
    static virtual_identity _identity;
  protected:
    proj_itemst(virtual_identity *_id = &proj_itemst::_identity);
    friend void *df::allocator_fn<proj_itemst>(void*,const void*);
  };
}
#endif
