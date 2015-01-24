/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_TOOLST_H
#define DF_ITEMDEF_TOOLST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_TOOL_FLAGS_H
#include "tool_flags.h"
#endif
#ifndef DF_TOOL_USES_H
#include "tool_uses.h"
#endif
namespace df {
  struct weapon_attack;
  struct DFHACK_EXPORT itemdef_toolst : itemdef {
    std::string name;
    std::string name_plural;
    BitArray<df::tool_flags> flags;
    int32_t value;
    uint8_t tile;
    std::vector<df::tool_uses > tool_use;
    std::string adjective;
    int32_t size;
    df::job_skill skill_melee;
    df::job_skill skill_ranged;
    std::string ranged_ammo;
    int32_t two_handed;
    int32_t minimum_size;
    int32_t material_size;
    std::vector<df::weapon_attack* > attacks;
    int32_t shoot_force;
    int32_t shoot_maxvel;
    int32_t container_capacity;
    static virtual_identity _identity;
    static std::vector<itemdef_toolst*> &get_vector();
    static itemdef_toolst *find(int id);
  protected:
    itemdef_toolst(virtual_identity *_id = &itemdef_toolst::_identity);
    friend void *df::allocator_fn<itemdef_toolst>(void*,const void*);
  };
}
#endif
