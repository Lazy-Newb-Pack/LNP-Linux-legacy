/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_UNITLISTST_H
#define DF_VIEWSCREEN_UNITLISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
#ifndef DF_VIEWSCREEN_UNITLIST_PAGE_H
#include "viewscreen_unitlist_page.h"
#endif
namespace df {
  struct job;
  struct unit;
  struct DFHACK_EXPORT viewscreen_unitlistst : viewscreen {
    bool allow_zoom;
    df::viewscreen_unitlist_page page;
    int32_t cursor_pos[4];
    std::vector<df::job* > jobs[4];
    std::vector<df::unit* > units[4];
    static virtual_identity _identity;
  protected:
    viewscreen_unitlistst(virtual_identity *_id = &viewscreen_unitlistst::_identity);
    friend void *df::allocator_fn<viewscreen_unitlistst>(void*,const void*);
  };
}
#endif
