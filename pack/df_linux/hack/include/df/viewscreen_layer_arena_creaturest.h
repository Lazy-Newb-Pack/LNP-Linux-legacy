/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_ARENA_CREATUREST_H
#define DF_VIEWSCREEN_LAYER_ARENA_CREATUREST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_arena_creaturest : viewscreen_layer {
    int8_t unk_1c;
    int16_t unk_1e;
    char unk_20[8];
    int32_t cur_side;
    int32_t cur_interaction;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_arena_creaturest(virtual_identity *_id = &viewscreen_layer_arena_creaturest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_arena_creaturest>(void*,const void*);
  };
}
#endif
