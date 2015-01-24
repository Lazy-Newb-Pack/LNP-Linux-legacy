/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TRADEGOODSST_H
#define DF_VIEWSCREEN_TRADEGOODSST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct building_tradedepotst;
  struct caravan_state;
  struct historical_entity;
  struct item;
  struct unit;
  struct DFHACK_EXPORT viewscreen_tradegoodsst : viewscreen {
    char title[256];
    std::string merchant_name;
    std::string merchant_entity;
    df::building_tradedepotst* depot;
    df::caravan_state* caravan;
    df::historical_entity* entity;
    bool is_unloading;
    bool has_traders;
    df::unit* trader;
    df::unit* broker;
    std::vector<df::item* > trader_items;
    std::vector<df::item* > broker_items;
    std::vector<char > trader_selected;
    std::vector<char > broker_selected;
    std::vector<int32_t > trader_count;
    std::vector<int32_t > broker_count;
    int32_t trader_cursor;
    int32_t broker_cursor;
    bool in_right_pane;
    int16_t trade_reply;
    int16_t anon_1;
    int32_t anon_2;
    int8_t has_offer;
    std::vector<df::item* > counteroffer;
    int8_t in_edit_count;
    std::string edit_count;
    static virtual_identity _identity;
  protected:
    viewscreen_tradegoodsst(virtual_identity *_id = &viewscreen_tradegoodsst::_identity);
    friend void *df::allocator_fn<viewscreen_tradegoodsst>(void*,const void*);
  };
}
#endif
