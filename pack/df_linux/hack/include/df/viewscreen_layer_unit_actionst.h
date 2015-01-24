/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_UNIT_ACTIONST_H
#define DF_VIEWSCREEN_LAYER_UNIT_ACTIONST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct item;
  struct reaction;
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_unit_actionst : viewscreen_layer {
    df::unit* unit;
    std::vector<df::item* > held_items;
    std::vector<df::reaction* > reactions;
    std::vector<df::item* > choice_items;
    std::vector<df::item* > sel_items;
    std::vector<int32_t > sel_reagents;
    df::reaction* cur_reaction;
    int32_t reagent;
    int32_t reagent_amnt_left;
    int32_t anon_1;
    std::vector<void* > anon_2;
    std::vector<void* > anon_3;
    std::vector<void* > anon_4;
    std::vector<void* > anon_5;
    std::vector<void* > anon_6;
    std::vector<void* > anon_7;
    std::vector<void* > anon_8;
    std::vector<void* > anon_9;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_unit_actionst(virtual_identity *_id = &viewscreen_layer_unit_actionst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_unit_actionst>(void*,const void*);
  };
}
#endif
