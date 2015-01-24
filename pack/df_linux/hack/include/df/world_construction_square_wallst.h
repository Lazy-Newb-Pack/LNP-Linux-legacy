/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_CONSTRUCTION_SQUARE_WALLST_H
#define DF_WORLD_CONSTRUCTION_SQUARE_WALLST_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_WORLD_CONSTRUCTION_SQUARE_H
#include "world_construction_square.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_construction_square_wallst : world_construction_square {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    world_construction_square_wallst(virtual_identity *_id = &world_construction_square_wallst::_identity);
    friend void *df::allocator_fn<world_construction_square_wallst>(void*,const void*);
  };
}
#endif
