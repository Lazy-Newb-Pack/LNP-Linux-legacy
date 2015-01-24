/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_SIEGEAMMOST_H
#define DF_ITEMDEF_SIEGEAMMOST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_siegeammost : itemdef {
    std::string name;
    std::string name_plural;
    std::string ammo_class;
    static virtual_identity _identity;
    static std::vector<itemdef_siegeammost*> &get_vector();
    static itemdef_siegeammost *find(int id);
  protected:
    itemdef_siegeammost(virtual_identity *_id = &itemdef_siegeammost::_identity);
    friend void *df::allocator_fn<itemdef_siegeammost>(void*,const void*);
  };
}
#endif
