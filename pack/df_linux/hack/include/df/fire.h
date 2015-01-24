/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FIRE_H
#define DF_FIRE_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT fire {
    df::coord pos;
    int16_t timer;
    uint16_t temperature;
    uint16_t unk1; /*!< 10000 */
    uint16_t unk2;
    uint16_t unk3;
    static struct_identity _identity;
  public:
    fire();
  };
}
#endif
