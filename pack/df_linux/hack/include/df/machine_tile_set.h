/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MACHINE_TILE_SET_H
#define DF_MACHINE_TILE_SET_H
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
#ifndef DF_MACHINE_CONN_MODES_H
#include "machine_conn_modes.h"
#endif
namespace df {
  struct DFHACK_EXPORT machine_tile_set {
    df::coord_path tiles;
    std::vector<df::machine_conn_modes > can_connect;
    static struct_identity _identity;
  public:
    machine_tile_set();
  };
}
#endif
