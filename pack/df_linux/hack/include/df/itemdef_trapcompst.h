/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_TRAPCOMPST_H
#define DF_ITEMDEF_TRAPCOMPST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_TRAPCOMP_FLAGS_H
#include "trapcomp_flags.h"
#endif
namespace df {
  struct weapon_attack;
  struct DFHACK_EXPORT itemdef_trapcompst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective;
    int32_t size;
    int32_t value;
    int32_t hits;
    int32_t material_size;
    BitArray<df::trapcomp_flags> flags;
    std::vector<df::weapon_attack* > attacks;
    static virtual_identity _identity;
    static std::vector<itemdef_trapcompst*> &get_vector();
    static itemdef_trapcompst *find(int id);
  protected:
    itemdef_trapcompst(virtual_identity *_id = &itemdef_trapcompst::_identity);
    friend void *df::allocator_fn<itemdef_trapcompst>(void*,const void*);
  };
}
#endif
