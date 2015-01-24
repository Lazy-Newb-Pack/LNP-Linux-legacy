/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_JOBST_H
#define DF_VIEWSCREEN_JOBST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct job;
  struct DFHACK_EXPORT viewscreen_jobst : viewscreen {
    df::job* job;
    static virtual_identity _identity;
  protected:
    viewscreen_jobst(virtual_identity *_id = &viewscreen_jobst::_identity);
    friend void *df::allocator_fn<viewscreen_jobst>(void*,const void*);
  };
}
#endif
