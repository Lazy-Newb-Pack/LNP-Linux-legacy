/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_BODY_TRANSFORMATIONST_H
#define DF_CREATURE_INTERACTION_EFFECT_BODY_TRANSFORMATIONST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_body_transformationst : creature_interaction_effect {
    int32_t chance; /*!< % */
    std::string race_str;
    std::string caste_str;
    int32_t race;
    int16_t caste;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_body_transformationst(virtual_identity *_id = &creature_interaction_effect_body_transformationst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_body_transformationst>(void*,const void*);
  };
}
#endif
