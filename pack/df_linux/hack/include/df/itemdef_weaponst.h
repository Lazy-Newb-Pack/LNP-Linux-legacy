/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_WEAPONST_H
#define DF_ITEMDEF_WEAPONST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_WEAPON_FLAGS_H
#include "weapon_flags.h"
#endif
namespace df {
  struct weapon_attack;
  struct DFHACK_EXPORT itemdef_weaponst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective;
    int32_t size;
    int32_t value;
    df::job_skill skill_melee;
    df::job_skill skill_ranged;
    std::string ranged_ammo;
    int32_t two_handed;
    int32_t minimum_size;
    int32_t material_size;
    BitArray<df::weapon_flags> flags;
    std::vector<df::weapon_attack* > attacks;
    int32_t shoot_force;
    int32_t shoot_maxvel;
    static virtual_identity _identity;
    static std::vector<itemdef_weaponst*> &get_vector();
    static itemdef_weaponst *find(int id);
  protected:
    itemdef_weaponst(virtual_identity *_id = &itemdef_weaponst::_identity);
    friend void *df::allocator_fn<itemdef_weaponst>(void*,const void*);
  };
}
#endif
