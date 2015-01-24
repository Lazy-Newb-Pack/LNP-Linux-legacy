/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_CLOTHST_H
#define DF_ITEMIMPROVEMENT_CLOTHST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_clothst : itemimprovement {
    static virtual_identity _identity;
  protected:
    itemimprovement_clothst(virtual_identity *_id = &itemimprovement_clothst::_identity);
    friend void *df::allocator_fn<itemimprovement_clothst>(void*,const void*);
  };
}
#endif
