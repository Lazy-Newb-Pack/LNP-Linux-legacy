/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_OVERALLSTATUSST_H
#define DF_VIEWSCREEN_OVERALLSTATUSST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_overallstatusst : viewscreen {
    std::vector<int16_t > visible_pages;
    int32_t page_cursor;
    static virtual_identity _identity;
  protected:
    viewscreen_overallstatusst(virtual_identity *_id = &viewscreen_overallstatusst::_identity);
    friend void *df::allocator_fn<viewscreen_overallstatusst>(void*,const void*);
  };
}
#endif
