/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_JOBLISTST_H
#define DF_VIEWSCREEN_JOBLISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct job;
  struct unit;
  struct DFHACK_EXPORT viewscreen_joblistst : viewscreen {
    bool allow_zoom;
    int32_t cursor_pos;
    std::vector<df::job* > jobs;
    std::vector<df::unit* > units;
    static virtual_identity _identity;
  protected:
    viewscreen_joblistst(virtual_identity *_id = &viewscreen_joblistst::_identity);
    friend void *df::allocator_fn<viewscreen_joblistst>(void*,const void*);
  };
}
#endif
