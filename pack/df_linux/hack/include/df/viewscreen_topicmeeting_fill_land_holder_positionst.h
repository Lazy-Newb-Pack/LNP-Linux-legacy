/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TOPICMEETING_FILL_LAND_HOLDER_POSITIONST_H
#define DF_VIEWSCREEN_TOPICMEETING_FILL_LAND_HOLDER_POSITIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_topicmeeting_fill_land_holder_positionst : viewscreen {
    char anon_1[256];
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    std::vector<void* > anon_6;
    std::vector<void* > anon_7;
    std::vector<void* > anon_8;
    std::vector<void* > anon_9;
    int32_t anon_10;
    int32_t anon_11;
    static virtual_identity _identity;
  protected:
    viewscreen_topicmeeting_fill_land_holder_positionst(virtual_identity *_id = &viewscreen_topicmeeting_fill_land_holder_positionst::_identity);
    friend void *df::allocator_fn<viewscreen_topicmeeting_fill_land_holder_positionst>(void*,const void*);
  };
}
#endif
