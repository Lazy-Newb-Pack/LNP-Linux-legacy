/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_UNDERWORLD_SPIREST_H
#define DF_ABSTRACT_BUILDING_UNDERWORLD_SPIREST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_underworld_spirest : abstract_building {
    std::string unk_50;
    std::string unk_6c;
    int32_t unk_88;
    int32_t unk_8c;
    int32_t unk_90;
    int32_t unk_94;
    int32_t unk_98;
    int32_t unk_9c;
    int32_t unk_a0;
    int32_t unk_a4;
    int32_t unk_a8;
    int32_t unk_ac;
    int16_t unk_b0;
    int32_t unk_b4;
    int16_t unk_b8;
    int8_t unk_ba;
    int32_t unk_bc;
    static virtual_identity _identity;
  protected:
    abstract_building_underworld_spirest(virtual_identity *_id = &abstract_building_underworld_spirest::_identity);
    friend void *df::allocator_fn<abstract_building_underworld_spirest>(void*,const void*);
  };
}
#endif
