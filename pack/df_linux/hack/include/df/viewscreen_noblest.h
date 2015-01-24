/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_NOBLEST_H
#define DF_VIEWSCREEN_NOBLEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_noblest : viewscreen {
    int32_t become_capital_offerings;
    static virtual_identity _identity;
  protected:
    viewscreen_noblest(virtual_identity *_id = &viewscreen_noblest::_identity);
    friend void *df::allocator_fn<viewscreen_noblest>(void*,const void*);
  };
}
#endif
