/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_CROSSROADS_H
#define DF_SITE_REALIZATION_CROSSROADS_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_crossroads {
    int32_t road_min_y[48];
    int32_t road_max_y[48];
    int32_t road_min_x[48];
    int32_t road_max_x[48];
    int32_t idx_x;
    int32_t idx_y;
    int32_t tile_width;
    int32_t tile_height;
    int32_t unk_310;
    int32_t unk_314;
    int32_t unk_318;
    int32_t unk_31c;
    int32_t unk_320;
    int32_t unk_324;
    int32_t unk_328;
    int32_t unk_32c;
    int32_t center_x_tile;
    int32_t center_y_tile;
    df::site_realization_crossroads* up;
    df::site_realization_crossroads* down;
    df::site_realization_crossroads* right;
    df::site_realization_crossroads* left;
    int8_t unk_348;
    int8_t unk_349;
    int32_t unk_34c;
    int8_t anon_1;
    int8_t anon_2;
    int8_t anon_3;
    int8_t anon_4;
    int8_t anon_5;
    int8_t anon_6;
    df::coord unk_356[32];
    static struct_identity _identity;
  public:
    site_realization_crossroads();
  };
}
#endif
