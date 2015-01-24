/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_PRICEST_H
#define DF_VIEWSCREEN_PRICEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_pricest : viewscreen {
    int16_t anon_1;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    viewscreen_pricest(virtual_identity *_id = &viewscreen_pricest::_identity);
    friend void *df::allocator_fn<viewscreen_pricest>(void*,const void*);
  };
}
#endif
