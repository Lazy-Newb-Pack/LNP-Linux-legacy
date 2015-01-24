/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_BURROW_H
#define DF_BLOCK_BURROW_H
#ifndef DF_TILE_BITMASK_H
#include "tile_bitmask.h"
#endif
namespace df {
  struct block_burrow_link;
  struct DFHACK_EXPORT block_burrow {
    int32_t id;
    df::tile_bitmask tile_bitmask;
    df::block_burrow_link* link;
    static struct_identity _identity;
#include "custom/block_burrow.methods.inc"
  public:
    block_burrow();
  };
}
#endif
