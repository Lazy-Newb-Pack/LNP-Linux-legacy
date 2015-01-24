/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TREASURELISTST_H
#define DF_VIEWSCREEN_TREASURELISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_treasurelistst : viewscreen {
    int32_t sel_idx;
    static virtual_identity _identity;
  protected:
    viewscreen_treasurelistst(virtual_identity *_id = &viewscreen_treasurelistst::_identity);
    friend void *df::allocator_fn<viewscreen_treasurelistst>(void*,const void*);
  };
}
#endif
