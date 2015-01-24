/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_SENSE_CREATURE_CLASSST_H
#define DF_CREATURE_INTERACTION_EFFECT_SENSE_CREATURE_CLASSST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_sense_creature_classst : creature_interaction_effect {
    std::string class_name;
    int8_t unk_88;
    int16_t unk_8a;
    int16_t unk_8c;
    int16_t unk_8e;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_sense_creature_classst(virtual_identity *_id = &creature_interaction_effect_sense_creature_classst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_sense_creature_classst>(void*,const void*);
  };
}
#endif
