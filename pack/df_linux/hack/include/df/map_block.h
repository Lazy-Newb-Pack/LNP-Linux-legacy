/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MAP_BLOCK_H
#define DF_MAP_BLOCK_H
#ifndef DF_BLOCK_BURROW_LINK_H
#include "block_burrow_link.h"
#endif
#ifndef DF_BLOCK_FLAGS_H
#include "block_flags.h"
#endif
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_FLOW_REUSE_POOL_H
#include "flow_reuse_pool.h"
#endif
#ifndef DF_TILE_DESIGNATION_H
#include "tile_designation.h"
#endif
#ifndef DF_TILE_LIQUID_FLOW_H
#include "tile_liquid_flow.h"
#endif
#ifndef DF_TILE_OCCUPANCY_H
#include "tile_occupancy.h"
#endif
#ifndef DF_TILETYPE_H
#include "tiletype.h"
#endif
namespace df {
  struct block_square_event;
  struct flow_info;
  struct DFHACK_EXPORT map_block {
    df::block_flags flags;
    std::vector<df::block_square_event* > block_events;
    df::block_burrow_link block_burrows;
    int32_t local_feature; /*!< index into world_data.region_map */
    int32_t global_feature;
    int32_t unk2;
    int16_t layer_depth; /*!< uninitialized */
    int32_t dsgn_check_cooldown;
    df::tile_designation default_liquid;
    std::vector<int32_t > items;
    std::vector<df::flow_info* > flows;
    df::flow_reuse_pool flow_pool;
    df::coord map_pos;
    df::coord2d region_pos;
    df::tiletype tiletype[16][16];
    df::tile_designation designation[16][16];
    df::tile_occupancy occupancy[16][16];
    uint8_t fog_of_war[16][16]; /*!< for adventure mode */
    /**
     * flood; 256*cost for straight, 362*cost for diagonal
     */
    int32_t path_cost[16][16];
    /**
     * flood; sync to path_distance; same value; inc per run; reset to 0 on wraparound
     */
    uint16_t path_tag[16][16];
    /**
     * 0 = non-walkable; same nonzero at A and B = walkable from A to B
     */
    uint16_t walkable[16][16];
    /**
     * 1 at walkable map edge; then +1 per 10 tiles it seems; 0 in dug tunnels
     */
    uint16_t map_edge_distance[16][16];
    uint16_t temperature_1[16][16];
    uint16_t temperature_2[16][16];
    uint16_t unk13[16][16];
    df::tile_liquid_flow liquid_flow[16][16];
    uint8_t region_offset[9];
    static struct_identity _identity;
  public:
    map_block();
  };
}
#endif
