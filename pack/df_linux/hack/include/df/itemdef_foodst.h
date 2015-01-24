/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_FOODST_H
#define DF_ITEMDEF_FOODST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_foodst : itemdef {
    std::string name;
    int16_t level;
    static virtual_identity _identity;
    static std::vector<itemdef_foodst*> &get_vector();
    static itemdef_foodst *find(int id);
  protected:
    itemdef_foodst(virtual_identity *_id = &itemdef_foodst::_identity);
    friend void *df::allocator_fn<itemdef_foodst>(void*,const void*);
  };
}
#endif
