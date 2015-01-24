/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_FROZEN_LIQUIDST_H
#define DF_BLOCK_SQUARE_EVENT_FROZEN_LIQUIDST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
#ifndef DF_TILE_LIQUID_H
#include "tile_liquid.h"
#endif
#ifndef DF_TILETYPE_H
#include "tiletype.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_frozen_liquidst : block_square_event {
    df::tiletype tiles[16][16];
    enum_field<df::tile_liquid,int8_t> liquid_type[16][16];
    static virtual_identity _identity;
  protected:
    block_square_event_frozen_liquidst(virtual_identity *_id = &block_square_event_frozen_liquidst::_identity);
    friend void *df::allocator_fn<block_square_event_frozen_liquidst>(void*,const void*);
  };
}
#endif
