/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WINDOW_GEMST_H
#define DF_BUILDING_WINDOW_GEMST_H
#ifndef DF_BUILDING_WINDOWST_H
#include "building_windowst.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_window_gemst : building_windowst {
    static virtual_identity _identity;
  protected:
    building_window_gemst(virtual_identity *_id = &building_window_gemst::_identity);
    friend void *df::allocator_fn<building_window_gemst>(void*,const void*);
  };
}
#endif
