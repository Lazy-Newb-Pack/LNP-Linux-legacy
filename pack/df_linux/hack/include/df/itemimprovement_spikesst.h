/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_SPIKESST_H
#define DF_ITEMIMPROVEMENT_SPIKESST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_spikesst : itemimprovement {
    static virtual_identity _identity;
  protected:
    itemimprovement_spikesst(virtual_identity *_id = &itemimprovement_spikesst::_identity);
    friend void *df::allocator_fn<itemimprovement_spikesst>(void*,const void*);
  };
}
#endif
