/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SQUAD_USE_H
#define DF_BUILDING_SQUAD_USE_H
#ifndef DF_SQUAD_USE_FLAGS_H
#include "squad_use_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_squad_use {
    int32_t squad_id;
    df::squad_use_flags mode;
    static struct_identity _identity;
  public:
    building_squad_use();
  };
}
#endif
