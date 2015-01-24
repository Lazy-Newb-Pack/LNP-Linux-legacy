/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_REACTIONST_H
#define DF_VIEWSCREEN_LAYER_REACTIONST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_reactionst : viewscreen_layer {
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_reactionst(virtual_identity *_id = &viewscreen_layer_reactionst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_reactionst>(void*,const void*);
  };
}
#endif
