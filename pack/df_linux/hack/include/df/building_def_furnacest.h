/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DEF_FURNACEST_H
#define DF_BUILDING_DEF_FURNACEST_H
#ifndef DF_BUILDING_DEF_H
#include "building_def.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_def_furnacest : building_def {
    static virtual_identity _identity;
  protected:
    building_def_furnacest(virtual_identity *_id = &building_def_furnacest::_identity);
    friend void *df::allocator_fn<building_def_furnacest>(void*,const void*);
  };
}
#endif
