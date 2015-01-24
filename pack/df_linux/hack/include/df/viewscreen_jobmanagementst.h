/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_JOBMANAGEMENTST_H
#define DF_VIEWSCREEN_JOBMANAGEMENTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_jobmanagementst : viewscreen {
    int32_t sel_idx;
    static virtual_identity _identity;
  protected:
    viewscreen_jobmanagementst(virtual_identity *_id = &viewscreen_jobmanagementst::_identity);
    friend void *df::allocator_fn<viewscreen_jobmanagementst>(void*,const void*);
  };
}
#endif
