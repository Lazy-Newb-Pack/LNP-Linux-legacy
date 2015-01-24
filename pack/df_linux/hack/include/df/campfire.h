/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CAMPFIRE_H
#define DF_CAMPFIRE_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT campfire {
    df::coord pos;
    int32_t timer;
    static struct_identity _identity;
  public:
    campfire();
  };
}
#endif
