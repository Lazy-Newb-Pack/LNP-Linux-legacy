/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_UNIT_HEALTHST_H
#define DF_VIEWSCREEN_LAYER_UNIT_HEALTHST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_unit_healthst : viewscreen_layer {
    int32_t anon_1;
    df::unit* unit;
    int16_t page;
    std::string title;
    std::vector<std::string* > text[4];
    std::vector<int16_t > text_fg[4];
    std::vector<int16_t > text_bg[4];
    std::vector<int16_t > text_bold[4];
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_unit_healthst(virtual_identity *_id = &viewscreen_layer_unit_healthst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_unit_healthst>(void*,const void*);
  };
}
#endif
