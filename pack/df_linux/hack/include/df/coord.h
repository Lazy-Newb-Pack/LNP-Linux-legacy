/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COORD_H
#define DF_COORD_H
namespace df {
  struct DFHACK_EXPORT coord {
    int16_t x;
    int16_t y;
    int16_t z;
    static struct_identity _identity;
#include "custom/coord.methods.inc"
  public:
    coord();
  };
}
#endif
