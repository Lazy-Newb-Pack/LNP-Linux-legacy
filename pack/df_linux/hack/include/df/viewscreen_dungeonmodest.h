/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_DUNGEONMODEST_H
#define DF_VIEWSCREEN_DUNGEONMODEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_dungeonmodest : viewscreen {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t announce_y;
    int32_t announce_idx;
    int8_t announce_more;
    static virtual_identity _identity;
  protected:
    viewscreen_dungeonmodest(virtual_identity *_id = &viewscreen_dungeonmodest::_identity);
    friend void *df::allocator_fn<viewscreen_dungeonmodest>(void*,const void*);
  };
}
#endif
