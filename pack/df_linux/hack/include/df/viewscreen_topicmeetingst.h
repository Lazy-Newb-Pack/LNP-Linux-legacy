/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TOPICMEETINGST_H
#define DF_VIEWSCREEN_TOPICMEETINGST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct dipscript_popup;
  struct meeting_diplomat_info;
  struct DFHACK_EXPORT viewscreen_topicmeetingst : viewscreen {
    df::dipscript_popup* popup;
    df::meeting_diplomat_info* meeting;
    std::vector<std::string* > text;
    int32_t unk_28;
    static virtual_identity _identity;
  protected:
    viewscreen_topicmeetingst(virtual_identity *_id = &viewscreen_topicmeetingst::_identity);
    friend void *df::allocator_fn<viewscreen_topicmeetingst>(void*,const void*);
  };
}
#endif
