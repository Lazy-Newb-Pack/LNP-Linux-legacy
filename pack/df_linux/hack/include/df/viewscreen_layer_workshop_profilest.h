/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_WORKSHOP_PROFILEST_H
#define DF_VIEWSCREEN_LAYER_WORKSHOP_PROFILEST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct unit;
  struct workshop_profile;
  struct DFHACK_EXPORT viewscreen_layer_workshop_profilest : viewscreen_layer {
    df::workshop_profile* profile;
    std::vector<df::unit* > workers;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_workshop_profilest(virtual_identity *_id = &viewscreen_layer_workshop_profilest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_workshop_profilest>(void*,const void*);
  };
}
#endif
