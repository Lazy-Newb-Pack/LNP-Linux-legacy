/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DEF_WORKSHOPST_H
#define DF_BUILDING_DEF_WORKSHOPST_H
#ifndef DF_BUILDING_DEF_H
#include "building_def.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_def_workshopst : building_def {
    static virtual_identity _identity;
  protected:
    building_def_workshopst(virtual_identity *_id = &building_def_workshopst::_identity);
    friend void *df::allocator_fn<building_def_workshopst>(void*,const void*);
  };
}
#endif
