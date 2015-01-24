/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_OVERALL_HEALTHST_H
#define DF_VIEWSCREEN_LAYER_OVERALL_HEALTHST_H
#ifndef DF_HEALTH_VIEW_BITS1_H
#include "health_view_bits1.h"
#endif
#ifndef DF_HEALTH_VIEW_BITS2_H
#include "health_view_bits2.h"
#endif
#ifndef DF_HEALTH_VIEW_BITS3_H
#include "health_view_bits3.h"
#endif
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_overall_healthst : viewscreen_layer {
    int32_t anon_1;
    std::vector<df::unit* > unit;
    std::vector<df::health_view_bits1 > bits1;
    std::vector<df::health_view_bits2 > bits2;
    std::vector<df::health_view_bits3 > bits3;
    int32_t x_cursor_pos;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_overall_healthst(virtual_identity *_id = &viewscreen_layer_overall_healthst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_overall_healthst>(void*,const void*);
  };
}
#endif
