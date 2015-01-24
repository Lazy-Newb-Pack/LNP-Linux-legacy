/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COORD2D_PATH_H
#define DF_COORD2D_PATH_H
namespace df {
  struct DFHACK_EXPORT coord2d_path {
    std::vector<int16_t > x;
    std::vector<int16_t > y;
    static struct_identity _identity;
#include "custom/coord2d_path.methods.inc"
  public:
    coord2d_path();
  };
}
#endif
