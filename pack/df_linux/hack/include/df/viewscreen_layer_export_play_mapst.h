/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_EXPORT_PLAY_MAPST_H
#define DF_VIEWSCREEN_LAYER_EXPORT_PLAY_MAPST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_export_play_mapst : viewscreen_layer {
    std::vector<int8_t > anon_1;
    std::vector<int16_t > anon_2;
    std::vector<int16_t > anon_3;
    std::vector<int16_t > anon_4;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_export_play_mapst(virtual_identity *_id = &viewscreen_layer_export_play_mapst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_export_play_mapst>(void*,const void*);
  };
}
#endif
