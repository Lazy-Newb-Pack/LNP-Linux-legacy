/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_CAN_DO_INTERACTIONST_H
#define DF_CREATURE_INTERACTION_EFFECT_CAN_DO_INTERACTIONST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_can_do_interactionst : creature_interaction_effect {
    std::vector<void* > unk_6c;
    std::vector<void* > unk_7c;
    std::string unk_8c;
    std::string unk_a8;
    std::string unk_c4;
    std::string unk_v40_1; /*!< v0.40.01 */
    std::string unk_v40_2; /*!< v0.40.01 */
    int16_t unk_e0;
    char unk_e2[2];
    std::string verb[3];
    std::string unk_138;
    std::string unk_154;
    std::string unk_170;
    std::string unk_18c;
    std::string interaction_name;
    int32_t type_id;
    std::vector<void* > unk_1c8;
    std::vector<void* > unk_1d8;
    int32_t unk_1e8;
    std::vector<void* > unk_1ec;
    std::vector<int32_t > unk_1fc;
    std::vector<int32_t > unk_20c;
    std::vector<void* > unk_21c;
    std::vector<void* > unk_22c;
    std::vector<void* > unk_23c;
    std::vector<void* > unk_24c;
    std::string name;
    int32_t usage_delay;
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_can_do_interactionst(virtual_identity *_id = &creature_interaction_effect_can_do_interactionst::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_can_do_interactionst>(void*,const void*);
  };
}
#endif
