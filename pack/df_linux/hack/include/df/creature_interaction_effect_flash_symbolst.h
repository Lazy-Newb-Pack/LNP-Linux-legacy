/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_FLASH_SYMBOLST_H
#define DF_CREATURE_INTERACTION_EFFECT_FLASH_SYMBOLST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_flash_symbolst : creature_interaction_effect {
    uint8_t sym_color[4];
    int32_t period;
    int32_t time;
    int32_t unk_78;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_flash_symbolst(virtual_identity *_id = &creature_interaction_effect_flash_symbolst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_flash_symbolst>(void*,const void*);
  };
}
#endif
