/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_ASSIGNTRADEST_H
#define DF_VIEWSCREEN_LAYER_ASSIGNTRADEST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct assign_trade_status;
  struct building_tradedepotst;
  struct DFHACK_EXPORT viewscreen_layer_assigntradest : viewscreen_layer {
    std::vector<df::assign_trade_status* > info;
    df::building_tradedepotst* depot;
    std::vector<int32_t > lists[63];
    std::vector<int16_t > visible_lists;
    bool sort_distance;
    bool pending_on_top;
    bool filter_mandates;
    std::string filter; /*!< v0.34.10 */
    static virtual_identity _identity;
  protected:
    viewscreen_layer_assigntradest(virtual_identity *_id = &viewscreen_layer_assigntradest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_assigntradest>(void*,const void*);
  };
}
#endif
