/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_INSTRUMENTST_H
#define DF_ITEMDEF_INSTRUMENTST_H
#ifndef DF_INSTRUMENT_FLAGS_H
#include "instrument_flags.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_instrumentst : itemdef {
    std::string name;
    std::string name_plural;
    BitArray<df::instrument_flags> flags;
    static virtual_identity _identity;
    static std::vector<itemdef_instrumentst*> &get_vector();
    static itemdef_instrumentst *find(int id);
  protected:
    itemdef_instrumentst(virtual_identity *_id = &itemdef_instrumentst::_identity);
    friend void *df::allocator_fn<itemdef_instrumentst>(void*,const void*);
  };
}
#endif
