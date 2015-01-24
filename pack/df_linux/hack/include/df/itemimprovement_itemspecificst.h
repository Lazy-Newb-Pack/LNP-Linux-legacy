/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_ITEMSPECIFICST_H
#define DF_ITEMIMPROVEMENT_ITEMSPECIFICST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_itemspecificst : itemimprovement {
    int32_t type;
    static virtual_identity _identity;
  protected:
    itemimprovement_itemspecificst(virtual_identity *_id = &itemimprovement_itemspecificst::_identity);
    friend void *df::allocator_fn<itemimprovement_itemspecificst>(void*,const void*);
  };
}
#endif
