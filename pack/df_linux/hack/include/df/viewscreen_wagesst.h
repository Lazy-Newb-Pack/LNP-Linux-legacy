/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_WAGESST_H
#define DF_VIEWSCREEN_WAGESST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_wagesst : viewscreen {
    int16_t profession_category;
    static virtual_identity _identity;
  protected:
    viewscreen_wagesst(virtual_identity *_id = &viewscreen_wagesst::_identity);
    friend void *df::allocator_fn<viewscreen_wagesst>(void*,const void*);
  };
}
#endif
