/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DEEP_VEIN_HOLLOW_H
#define DF_DEEP_VEIN_HOLLOW_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
namespace df {
  struct DFHACK_EXPORT deep_vein_hollow {
    int8_t anon_1;
    int32_t anon_2;
    df::coord_path tiles;
    df::coord pos; /*!< seemingly unused */
    static struct_identity _identity;
  public:
    deep_vein_hollow();
  };
}
#endif
