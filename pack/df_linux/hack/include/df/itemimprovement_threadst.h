/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_THREADST_H
#define DF_ITEMIMPROVEMENT_THREADST_H
#ifndef DF_DYE_INFO_H
#include "dye_info.h"
#endif
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_threadst : itemimprovement {
    df::dye_info dye;
    static virtual_identity _identity;
  protected:
    itemimprovement_threadst(virtual_identity *_id = &itemimprovement_threadst::_identity);
    friend void *df::allocator_fn<itemimprovement_threadst>(void*,const void*);
  };
}
#endif
