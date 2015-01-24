/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_MUSICSOUNDST_H
#define DF_VIEWSCREEN_LAYER_MUSICSOUNDST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_musicsoundst : viewscreen_layer {
    static virtual_identity _identity;
  protected:
    viewscreen_layer_musicsoundst(virtual_identity *_id = &viewscreen_layer_musicsoundst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_musicsoundst>(void*,const void*);
  };
}
#endif
