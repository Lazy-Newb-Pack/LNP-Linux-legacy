/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_STONE_RESTRICTIONST_H
#define DF_VIEWSCREEN_LAYER_STONE_RESTRICTIONST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_stone_restrictionst : viewscreen_layer {
    std::vector<int32_t > stone_type[2];
    std::vector<bool* > stone_economic[2];
    int32_t type_tab;
    int32_t anon_1;
    int32_t anon_2;
    std::vector<std::string* > use_name;
    std::vector<int32_t > use_id;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_stone_restrictionst(virtual_identity *_id = &viewscreen_layer_stone_restrictionst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_stone_restrictionst>(void*,const void*);
  };
}
#endif
