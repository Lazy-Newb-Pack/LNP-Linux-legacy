/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_CABINETST_H
#define DF_BUILDING_CABINETST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct building_squad_use;
  struct DFHACK_EXPORT building_cabinetst : building_actual {
    int16_t anon_1;
    std::vector<df::building_squad_use* > squads;
    int32_t specific_squad;
    int32_t specific_position;
    static virtual_identity _identity;
  protected:
    building_cabinetst(virtual_identity *_id = &building_cabinetst::_identity);
    friend void *df::allocator_fn<building_cabinetst>(void*,const void*);
  };
}
#endif
