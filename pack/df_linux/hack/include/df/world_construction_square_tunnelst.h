/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_CONSTRUCTION_SQUARE_TUNNELST_H
#define DF_WORLD_CONSTRUCTION_SQUARE_TUNNELST_H
#ifndef DF_WORLD_CONSTRUCTION_SQUARE_H
#include "world_construction_square.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_construction_square_tunnelst : world_construction_square {
    static virtual_identity _identity;
  protected:
    world_construction_square_tunnelst(virtual_identity *_id = &world_construction_square_tunnelst::_identity);
    friend void *df::allocator_fn<world_construction_square_tunnelst>(void*,const void*);
  };
}
#endif
