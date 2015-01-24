/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_WORLD_CONSTRUCTIONST_H
#define DF_BLOCK_SQUARE_EVENT_WORLD_CONSTRUCTIONST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
#ifndef DF_TILE_BITMASK_H
#include "tile_bitmask.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_world_constructionst : block_square_event {
    int32_t construction_id;
    df::tile_bitmask tile_bitmask;
    static virtual_identity _identity;
  protected:
    block_square_event_world_constructionst(virtual_identity *_id = &block_square_event_world_constructionst::_identity);
    friend void *df::allocator_fn<block_square_event_world_constructionst>(void*,const void*);
  };
}
#endif
