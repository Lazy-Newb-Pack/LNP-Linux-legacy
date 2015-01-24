/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARMOR_PROPERTIES_H
#define DF_ARMOR_PROPERTIES_H
#ifndef DF_ARMOR_GENERAL_FLAGS_H
#include "armor_general_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT armor_properties {
    BitArray<df::armor_general_flags> flags;
    int32_t layer;
    int16_t layer_size;
    int16_t layer_permit;
    int16_t coverage;
    static struct_identity _identity;
  public:
    armor_properties();
  };
}
#endif
