/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_MEETINGST_H
#define DF_VIEWSCREEN_MEETINGST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct activity_info;
  struct dipscript_popup;
  struct unit;
  struct DFHACK_EXPORT viewscreen_meetingst : viewscreen {
    df::dipscript_popup* dipscript_popup;
    df::activity_info* activity;
    df::unit* holder;
    static virtual_identity _identity;
  protected:
    viewscreen_meetingst(virtual_identity *_id = &viewscreen_meetingst::_identity);
    friend void *df::allocator_fn<viewscreen_meetingst>(void*,const void*);
  };
}
#endif
