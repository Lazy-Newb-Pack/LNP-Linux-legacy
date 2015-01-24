/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GLOWING_BARRIER_H
#define DF_GLOWING_BARRIER_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT glowing_barrier {
    int8_t anon_1;
    int32_t anon_2;
    std::vector<int32_t > buildings;
    df::coord pos;
    static struct_identity _identity;
  public:
    glowing_barrier();
  };
}
#endif
