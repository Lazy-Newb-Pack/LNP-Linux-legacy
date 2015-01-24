/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COORD2D_H
#define DF_COORD2D_H
namespace df {
  struct DFHACK_EXPORT coord2d {
    int16_t x;
    int16_t y;
    static struct_identity _identity;
#include "custom/coord2d.methods.inc"
  public:
    coord2d();
  };
}
#endif
