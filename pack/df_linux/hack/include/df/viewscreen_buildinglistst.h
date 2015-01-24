/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_BUILDINGLISTST_H
#define DF_VIEWSCREEN_BUILDINGLISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct building;
  struct DFHACK_EXPORT viewscreen_buildinglistst : viewscreen {
    int32_t cursor;
    bool alt_right_panel;
    std::vector<df::building* > buildings;
    std::vector<df::building* > buildings2;
    std::vector<int32_t > room_value;
    std::vector<int32_t > room_value2;
    static virtual_identity _identity;
  protected:
    viewscreen_buildinglistst(virtual_identity *_id = &viewscreen_buildinglistst::_identity);
    friend void *df::allocator_fn<viewscreen_buildinglistst>(void*,const void*);
  };
}
#endif
