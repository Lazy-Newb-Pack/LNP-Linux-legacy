/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WINDOWST_H
#define DF_BUILDING_WINDOWST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_windowst : building_actual {
    int16_t anon_1;
    static virtual_identity _identity;
  protected:
    building_windowst(virtual_identity *_id = &building_windowst::_identity);
    friend void *df::allocator_fn<building_windowst>(void*,const void*);
  };
}
#endif
