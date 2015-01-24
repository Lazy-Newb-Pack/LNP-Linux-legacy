/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_EFFECT_INFO_H
#define DF_EFFECT_INFO_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct job;
  struct DFHACK_EXPORT effect_info {
    int32_t id; /*!< assigned during Save */
    df::job* anon_1;
    int16_t type; /*!< 2 = falling into chasm */
    int16_t foreground;
    int16_t background;
    int8_t bright;
    df::coord pos;
    int32_t timer;
    static struct_identity _identity;
  public:
    effect_info();
  };
}
#endif
