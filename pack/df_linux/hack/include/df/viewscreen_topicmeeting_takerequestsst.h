/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TOPICMEETING_TAKEREQUESTSST_H
#define DF_VIEWSCREEN_TOPICMEETING_TAKEREQUESTSST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct dipscript_popup;
  struct meeting_diplomat_info;
  struct DFHACK_EXPORT viewscreen_topicmeeting_takerequestsst : viewscreen {
    char title[256];
    df::dipscript_popup* popup;
    df::meeting_diplomat_info* meeting;
    std::vector<int16_t > type_categories; /*!< likely entity_sell_category values */
    int32_t type_idx;
    int32_t good_idx;
    static virtual_identity _identity;
  protected:
    viewscreen_topicmeeting_takerequestsst(virtual_identity *_id = &viewscreen_topicmeeting_takerequestsst::_identity);
    friend void *df::allocator_fn<viewscreen_topicmeeting_takerequestsst>(void*,const void*);
  };
}
#endif
