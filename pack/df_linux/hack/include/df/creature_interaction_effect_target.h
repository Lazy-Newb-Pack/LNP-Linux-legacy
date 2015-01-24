/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_H
#define DF_CREATURE_INTERACTION_EFFECT_TARGET_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_MODE_H
#include "creature_interaction_effect_target_mode.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_target {
    std::vector<df::creature_interaction_effect_target_mode > mode;
    std::vector<std::string* > key;
    std::vector<std::string* > tissue;
    static struct_identity _identity;
  public:
    creature_interaction_effect_target();
  };
}
#endif
