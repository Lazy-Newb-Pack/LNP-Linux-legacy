/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_BANDSST_H
#define DF_ITEMIMPROVEMENT_BANDSST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_bandsst : itemimprovement {
    int32_t shape;
    static virtual_identity _identity;
  protected:
    itemimprovement_bandsst(virtual_identity *_id = &itemimprovement_bandsst::_identity);
    friend void *df::allocator_fn<itemimprovement_bandsst>(void*,const void*);
  };
}
#endif
