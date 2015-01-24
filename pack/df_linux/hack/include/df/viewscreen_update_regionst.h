/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_UPDATE_REGIONST_H
#define DF_VIEWSCREEN_UPDATE_REGIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_update_regionst : viewscreen {
    int32_t year;
    int32_t year_tick;
    static virtual_identity _identity;
  protected:
    viewscreen_update_regionst(virtual_identity *_id = &viewscreen_update_regionst::_identity);
    friend void *df::allocator_fn<viewscreen_update_regionst>(void*,const void*);
  };
}
#endif
