/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_AMMOST_H
#define DF_ITEMDEF_AMMOST_H
#ifndef DF_AMMO_FLAGS_H
#include "ammo_flags.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct weapon_attack;
  struct DFHACK_EXPORT itemdef_ammost : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective; /*!< v0.40.1 */
    std::string ammo_class;
    BitArray<df::ammo_flags> flags;
    int32_t size; /*!< divided by 10 */
    int32_t value;
    std::vector<df::weapon_attack* > attacks;
    static virtual_identity _identity;
    static std::vector<itemdef_ammost*> &get_vector();
    static itemdef_ammost *find(int id);
  protected:
    itemdef_ammost(virtual_identity *_id = &itemdef_ammost::_identity);
    friend void *df::allocator_fn<itemdef_ammost>(void*,const void*);
  };
}
#endif
