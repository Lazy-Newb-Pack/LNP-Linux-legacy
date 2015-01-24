/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ARMORSTANDST_H
#define DF_BUILDING_ARMORSTANDST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct building_squad_use;
  struct DFHACK_EXPORT building_armorstandst : building_actual {
    int16_t unk_c0;
    std::vector<df::building_squad_use* > squads;
    int32_t specific_squad;
    int32_t specific_position;
    static virtual_identity _identity;
  protected:
    building_armorstandst(virtual_identity *_id = &building_armorstandst::_identity);
    friend void *df::allocator_fn<building_armorstandst>(void*,const void*);
  };
}
#endif
