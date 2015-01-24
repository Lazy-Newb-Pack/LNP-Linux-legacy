/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COORD_PATH_H
#define DF_COORD_PATH_H
namespace df {
  struct DFHACK_EXPORT coord_path {
    std::vector<int16_t > x;
    std::vector<int16_t > y;
    std::vector<int16_t > z;
    static struct_identity _identity;
#include "custom/coord_path.methods.inc"
  public:
    coord_path();
  };
}
#endif
