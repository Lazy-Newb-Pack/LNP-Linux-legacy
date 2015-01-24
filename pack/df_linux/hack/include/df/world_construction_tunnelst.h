/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_CONSTRUCTION_TUNNELST_H
#define DF_WORLD_CONSTRUCTION_TUNNELST_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_WORLD_CONSTRUCTION_H
#include "world_construction.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_construction_tunnelst : world_construction {
    df::language_name name;
    static virtual_identity _identity;
  protected:
    world_construction_tunnelst(virtual_identity *_id = &world_construction_tunnelst::_identity);
    friend void *df::allocator_fn<world_construction_tunnelst>(void*,const void*);
  };
}
#endif
