/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WINDOW_GLASSST_H
#define DF_BUILDING_WINDOW_GLASSST_H
#ifndef DF_BUILDING_WINDOWST_H
#include "building_windowst.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_window_glassst : building_windowst {
    static virtual_identity _identity;
  protected:
    building_window_glassst(virtual_identity *_id = &building_window_glassst::_identity);
    friend void *df::allocator_fn<building_window_glassst>(void*,const void*);
  };
}
#endif
