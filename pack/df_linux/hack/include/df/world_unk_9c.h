/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_UNK_9C_H
#define DF_WORLD_UNK_9C_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_unk_9c {
    df::coord2d region;
    df::coord2d embark;
    int16_t local_feature_idx;
    int32_t global_feature_idx;
    int32_t unk10;
    int16_t unk14;
    df::coord2d local;
    int16_t z_min;
    int16_t z_max;
    static struct_identity _identity;
  public:
    world_unk_9c();
  };
}
#endif
