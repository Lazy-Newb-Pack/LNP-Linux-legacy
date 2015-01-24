/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_EXPORT_GRAPHICAL_MAPST_H
#define DF_VIEWSCREEN_EXPORT_GRAPHICAL_MAPST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_export_graphical_mapst : viewscreen {
    int16_t anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int16_t anon_4;
    int32_t anon_5;
    int32_t anon_6;
    int32_t anon_7;
    int32_t anon_8;
    int32_t anon_9;
    int32_t anon_10;
    int32_t anon_11;
    int8_t anon_12;
    int32_t sel_idx;
    static virtual_identity _identity;
  protected:
    viewscreen_export_graphical_mapst(virtual_identity *_id = &viewscreen_export_graphical_mapst::_identity);
    friend void *df::allocator_fn<viewscreen_export_graphical_mapst>(void*,const void*);
  };
}
#endif
