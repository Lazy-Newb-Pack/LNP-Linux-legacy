/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_PAGESST_H
#define DF_ITEMIMPROVEMENT_PAGESST_H
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_pagesst : itemimprovement {
    int32_t count;
    std::vector<int32_t > contents;
    static virtual_identity _identity;
  protected:
    itemimprovement_pagesst(virtual_identity *_id = &itemimprovement_pagesst::_identity);
    friend void *df::allocator_fn<itemimprovement_pagesst>(void*,const void*);
  };
}
#endif
