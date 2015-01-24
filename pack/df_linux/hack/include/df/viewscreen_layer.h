/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_H
#define DF_VIEWSCREEN_LAYER_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct layer_object;
  struct DFHACK_EXPORT viewscreen_layer : viewscreen {
    std::vector<df::layer_object* > layer_objects;
    static virtual_identity _identity;
  protected:
    viewscreen_layer(virtual_identity *_id = &viewscreen_layer::_identity);
    friend void *df::allocator_fn<viewscreen_layer>(void*,const void*);
  };
}
#endif
