/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_RIVER_H
#define DF_WORLD_RIVER_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_river {
    df::language_name name;
    df::coord2d_path path;
    std::vector<int32_t > unk_8c;
    std::vector<int16_t > unk_9c;
    std::vector<int16_t > elevation;
    df::coord2d end_pos;
    BitArray<int> flags;
    static struct_identity _identity;
  public:
    world_river();
  };
}
#endif
