/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_BUILDINGST_H
#define DF_VIEWSCREEN_BUILDINGST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct building;
  struct DFHACK_EXPORT viewscreen_buildingst : viewscreen {
    df::building* building;
    static virtual_identity _identity;
  protected:
    viewscreen_buildingst(virtual_identity *_id = &viewscreen_buildingst::_identity);
    friend void *df::allocator_fn<viewscreen_buildingst>(void*,const void*);
  };
}
#endif
