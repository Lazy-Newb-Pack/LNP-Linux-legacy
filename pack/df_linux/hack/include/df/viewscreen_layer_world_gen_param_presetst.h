/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_WORLD_GEN_PARAM_PRESETST_H
#define DF_VIEWSCREEN_LAYER_WORLD_GEN_PARAM_PRESETST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_world_gen_param_presetst : viewscreen_layer {
    int32_t anon_1;
    int32_t anon_2;
    std::string anon_3;
    int16_t anon_4[24];
    int8_t anon_5[24];
    int32_t anon_6;
    int16_t anon_7;
    int16_t anon_8;
    int16_t anon_9;
    int16_t anon_10;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_world_gen_param_presetst(virtual_identity *_id = &viewscreen_layer_world_gen_param_presetst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_world_gen_param_presetst>(void*,const void*);
  };
}
#endif
