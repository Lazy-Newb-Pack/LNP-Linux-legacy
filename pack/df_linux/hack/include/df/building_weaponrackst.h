/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WEAPONRACKST_H
#define DF_BUILDING_WEAPONRACKST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct building_squad_use;
  struct DFHACK_EXPORT building_weaponrackst : building_actual {
    int16_t unk_c0;
    std::vector<df::building_squad_use* > squads;
    int32_t specific_squad;
    static virtual_identity _identity;
  protected:
    building_weaponrackst(virtual_identity *_id = &building_weaponrackst::_identity);
    friend void *df::allocator_fn<building_weaponrackst>(void*,const void*);
  };
}
#endif
