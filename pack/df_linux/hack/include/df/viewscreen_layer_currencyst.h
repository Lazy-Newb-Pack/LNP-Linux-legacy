/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_CURRENCYST_H
#define DF_VIEWSCREEN_LAYER_CURRENCYST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_currencyst : viewscreen_layer {
    std::vector<void* > anon_1;
    int32_t anon_2;
    std::vector<void* > anon_3;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_currencyst(virtual_identity *_id = &viewscreen_layer_currencyst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_currencyst>(void*,const void*);
  };
}
#endif
