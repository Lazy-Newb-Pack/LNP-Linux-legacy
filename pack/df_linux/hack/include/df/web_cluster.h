/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WEB_CLUSTER_H
#define DF_WEB_CLUSTER_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct DFHACK_EXPORT web_cluster {
    std::vector<int16_t > x;
    std::vector<int16_t > y;
    int16_t z;
    int16_t race;
    int16_t caste;
    df::coord2d pos_min;
    df::coord2d pos_max;
    std::vector<int32_t > ambushers;
    static struct_identity _identity;
  public:
    web_cluster();
  };
}
#endif
