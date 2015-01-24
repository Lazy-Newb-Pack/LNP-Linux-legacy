/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_EMBARK_LOCATION_H
#define DF_EMBARK_LOCATION_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
namespace df {
  struct DFHACK_EXPORT embark_location {
    df::coord2d region_pos;
    int16_t reclaim_site;
    int16_t reclaim_idx;
    df::coord2d_path biome_rgn;
    df::coord2d embark_pos_min;
    df::coord2d embark_pos_max;
    df::coord2d embark_biome_rgn; /*!< Valid only after e pressed. */
    static struct_identity _identity;
  public:
    embark_location();
  };
}
#endif
