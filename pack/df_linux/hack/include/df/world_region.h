/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_REGION_H
#define DF_WORLD_REGION_H
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_WORLD_REGION_TYPE_H
#include "world_region_type.h"
#endif
namespace df {
  struct world_population;
  struct DFHACK_EXPORT world_region {
    df::language_name name;
    int32_t index;
    df::world_region_type type;
    df::coord2d_path region_coords;
    int32_t unk_94;
    int32_t unk_98;
    int32_t unk_9c;
    int32_t unk_a0;
    int32_t unk_a4;
    std::vector<df::world_population* > population;
    int32_t unk_118[51];
    std::vector<int16_t > unk_184;
    std::vector<int16_t > unk_194;
    std::vector<int16_t > unk_1a4;
    std::vector<int16_t > unk_1b4;
    std::vector<int16_t > unk_1c4;
    std::vector<int16_t > unk_1d4;
    int16_t unk_1e4;
    int16_t unk_1e6;
    int16_t unk_1e8;
    int16_t lake_surface;
    std::vector<int32_t > unk_1f0;
    char unk_200[4];
    int32_t mid_x;
    int32_t mid_y;
    int32_t min_x;
    int32_t max_x;
    int32_t min_y;
    int32_t max_y;
    static struct_identity _identity;
    static std::vector<world_region*> &get_vector();
    static world_region *find(int id);
  public:
    world_region();
  };
}
#endif
