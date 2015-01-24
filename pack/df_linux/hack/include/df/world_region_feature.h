/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_REGION_FEATURE_H
#define DF_WORLD_REGION_FEATURE_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_region_feature {
    int16_t feature_idx;
    int32_t layer;
    int32_t region_tile_idx;
    int16_t min_z;
    int16_t max_z;
    df::coord2d unk_c[6];
    int32_t unk_28;
    uint32_t seed; /*!< looks random */
    BitArray<int> unk_30;
    int16_t unk_38[15];
    int16_t top_layer_idx; /*!< topmost cave layer the feature reaches */
    static struct_identity _identity;
  public:
    world_region_feature();
  };
}
#endif
