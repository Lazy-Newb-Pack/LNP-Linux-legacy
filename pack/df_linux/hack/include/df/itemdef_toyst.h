/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_TOYST_H
#define DF_ITEMDEF_TOYST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_TOY_FLAGS_H
#include "toy_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_toyst : itemdef {
    std::string name;
    std::string name_plural;
    BitArray<df::toy_flags> flags;
    static virtual_identity _identity;
    static std::vector<itemdef_toyst*> &get_vector();
    static itemdef_toyst *find(int id);
  protected:
    itemdef_toyst(virtual_identity *_id = &itemdef_toyst::_identity);
    friend void *df::allocator_fn<itemdef_toyst>(void*,const void*);
  };
}
#endif
